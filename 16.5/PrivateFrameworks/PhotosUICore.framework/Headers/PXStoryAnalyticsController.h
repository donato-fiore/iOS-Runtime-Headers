// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSTORYANALYTICSCONTROLLER_H
#define PXSTORYANALYTICSCONTROLLER_H

@class NSDictionary, NSString, NSNumber;
@protocol PXChangeObserver;

#import <Foundation/Foundation.h>

#import "PXStoryModel.h"
#import "PXStoryViewModel.h"

@interface PXStoryAnalyticsController : NSObject <PXChangeObserver>

 {
    NSInteger _currentViewModeSignpostID;
}


@property (nonatomic) NSInteger bufferingEventsCount; // ivar: _bufferingEventsCount
@property (readonly, nonatomic) NSDictionary *commonSpinnerRelatedPayload;
@property (retain, nonatomic) PXStoryModel *currentModel; // ivar: _currentModel
@property (nonatomic) NSInteger currentViewMode; // ivar: _currentViewMode
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSDictionary *defaultPayload;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didPlayStory; // ivar: _didPlayStory
@property (nonatomic) BOOL didUserChangePlaybackTime; // ivar: _didUserChangePlaybackTime
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSNumber *initialBufferingDuration; // ivar: _initialBufferingDuration
@property (nonatomic) BOOL isSessionActive; // ivar: _isSessionActive
@property (readonly, nonatomic) NSString *sessionIdentifier; // ivar: _sessionIdentifier
@property (readonly) Class superclass;
@property (readonly, nonatomic) PXStoryViewModel *viewModel; // ivar: _viewModel


+(id)analyticsViewNameForViewMode:(NSInteger)arg0 ;
+(id)memoryPayloadFromStoryModel:(id)arg0 ;
+(id)stringForAudioAssetCatalog:(NSInteger)arg0 ;
+(id)stringForLaunchType:(id)arg0 assetCollection:(id)arg1 ;
+(void)sendMemoryEvent:(id)arg0 model:(id)arg1 payload:(id)arg2 ;
-(id)init;
-(id)initWithViewModel:(id)arg0 ;
-(void)_collectAnalyticsAtPlaybackEnd;
-(void)_collectAnalyticsForBuffering;
-(void)_collectAnalyticsForPlayStateChange;
-(void)_incrementPlayCountForMemory:(id)arg0 ;
-(void)_invalidateCurrentModel;
-(void)_invalidateCurrentViewMode;
-(void)_invalidateDidUserChangePlaybackTime;
-(void)_updateCurrentModel;
-(void)_updateCurrentViewMode;
-(void)_updateDidUserChangePlaybackTime;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)viewDidAppear;
-(void)viewDidDisappear;


@end


#endif