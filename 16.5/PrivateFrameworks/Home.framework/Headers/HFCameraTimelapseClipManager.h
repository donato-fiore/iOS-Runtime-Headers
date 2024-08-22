// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFCAMERATIMELAPSECLIPMANAGER_H
#define HFCAMERATIMELAPSECLIPMANAGER_H

@class HMCameraClipManager, NSString, HMCameraClip, NSDate, NSArray;
@protocol HMCameraClipManagerObserver, HFCameraTimelapseClipInfoProvider, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface HFCameraTimelapseClipManager : NSObject <HMCameraClipManagerObserver, HFCameraTimelapseClipInfoProvider>



@property (weak, nonatomic) HMCameraClipManager *clipManager; // ivar: _clipManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HMCameraClip *lastSelectedTimelapseClip; // ivar: _lastSelectedTimelapseClip
@property (nonatomic) os_unfair_lock_s lock; // ivar: _lock
@property (retain, nonatomic) HMCameraClip *oldestFetchedClip; // ivar: _oldestFetchedClip
@property (retain, nonatomic) NSDate *oldestValidDateForTimeline; // ivar: _oldestValidDateForTimeline
@property (readonly) Class superclass;
@property (retain, nonatomic) NSArray *timelapseClips; // ivar: _timelapseClips
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *updateQueue; // ivar: _updateQueue


+(id)sharedManager;
-(id)init;
-(id)timelapseClipPositionForDate:(id)arg0 inHighQualityClip:(id)arg1 ;
-(id)timelapseClipPositionForDate:(id)arg0 inHighQualityClip:(id)arg1 scrubbingType:(NSUInteger)arg2 ;
-(id)timelapseURLForTimelapseClip:(id)arg0 ;
-(void)_processUpdatedClips:(id)arg0 ;
-(void)clipManager:(id)arg0 didUpdateClips:(id)arg1 ;
-(void)fetchClipsFromStartDate:(id)arg0 toEndDate:(id)arg1 limit:(NSUInteger)arg2 ;
-(void)fetchTimelapseClips;


@end


#endif