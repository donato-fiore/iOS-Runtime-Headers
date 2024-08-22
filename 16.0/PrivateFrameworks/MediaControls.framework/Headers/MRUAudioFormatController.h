// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRUAUDIOFORMATCONTROLLER_H
#define MRUAUDIOFORMATCONTROLLER_H

@class MRNowPlayingAudioFormatController, NSString, FBSDisplayLayoutMonitor, NSTimer;
@protocol MRNowPlayingAudioFormatControllerDelegate, MRExpanseManagerObserver, MRUAudioFormatControllerDelegate;

#import <Foundation/Foundation.h>


@interface MRUAudioFormatController : NSObject <MRNowPlayingAudioFormatControllerDelegate, MRExpanseManagerObserver>



@property (retain, nonatomic) MRNowPlayingAudioFormatController *audioFormatController; // ivar: _audioFormatController
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MRUAudioFormatControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *displayBundleID;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isFaceTimePreferencesVisible; // ivar: _isFaceTimePreferencesVisible
@property (readonly, nonatomic) BOOL isMultichannelAvailable;
@property (readonly, nonatomic) BOOL isMultichannelPreferencesVisible;
@property (readonly, nonatomic) BOOL isSpatialAudioActive;
@property (readonly, nonatomic) BOOL isSpatialAudioEnabled;
@property (readonly, nonatomic) BOOL isSpatialAudioNotAvailable;
@property (retain, nonatomic) FBSDisplayLayoutMonitor *layoutMonitor; // ivar: _layoutMonitor
@property (nonatomic) BOOL optimisticSpatialAudioActive; // ivar: _optimisticSpatialAudioActive
@property (retain, nonatomic) NSTimer *optimisticTimer; // ivar: _optimisticTimer
@property (readonly, nonatomic) NSString *preferencesBundleID;
@property (readonly) Class superclass;


-(id)audioFormatDescriptionForPreferences:(id)arg0 ;
-(id)init;
-(void)dealloc;
-(void)expanseManagerDidJoinExpanseSession:(id)arg0 ;
-(void)expanseManagerDidLeaveExpanseSession:(id)arg0 ;
-(void)nowPlayingAudioFormatController:(id)arg0 didChangeAudioFormatContentInfo:(id)arg1 ;
-(void)nowPlayingAudioFormatController:(id)arg0 didChangeBundleID:(id)arg1 displayName:(id)arg2 ;
-(void)startMonitoring;
-(void)startOptimisticSpatialAudioActive;
-(void)stopMonitoring;
-(void)stopOptimisticSpatialAudioActive;
-(void)updateFacetime;


@end


#endif