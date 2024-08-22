// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFCAMERATIMELAPSECLIPMANAGER_H
#define HFCAMERATIMELAPSECLIPMANAGER_H

@class HMCameraClipManager, NSMutableArray, NSString, HMCameraClip, NSDate;
@protocol HMCameraClipManagerObserver, HFCameraTimelapseClipInfoProvider;

#import <Foundation/Foundation.h>


@interface HFCameraTimelapseClipManager : NSObject <HMCameraClipManagerObserver, HFCameraTimelapseClipInfoProvider>



@property (weak, nonatomic) HMCameraClipManager *clipManager; // ivar: _clipManager
@property (retain, nonatomic) NSMutableArray *clips; // ivar: _clips
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HMCameraClip *lastSelectedTimelapseClip; // ivar: _lastSelectedTimelapseClip
@property (retain, nonatomic) HMCameraClip *oldestFetchedClip; // ivar: _oldestFetchedClip
@property (retain, nonatomic) NSDate *oldestValidDateForTimeline; // ivar: _oldestValidDateForTimeline
@property (readonly) Class superclass;


+(id)sharedManager;
-(id)init;
-(id)timelapseClipPositionForDate:(id)arg0 inHighQualityClip:(id)arg1 ;
-(id)timelapseClipPositionForDate:(id)arg0 inHighQualityClip:(id)arg1 scrubbingType:(NSUInteger)arg2 ;
-(id)timelapseURLForTimelapseClip:(id)arg0 ;
-(void)clipManager:(id)arg0 didUpdateClips:(id)arg1 ;
-(void)fetchClipsFromStartDate:(id)arg0 toEndDate:(id)arg1 limit:(NSUInteger)arg2 ;
-(void)fetchTimelapseClips;


@end


#endif