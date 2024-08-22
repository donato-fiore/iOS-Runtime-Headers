// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSTORYAUDIOSESSIONCONTROLLER_H
#define PXSTORYAUDIOSESSIONCONTROLLER_H

@class AVAudioSession;
@protocol OS_dispatch_queue;


#import "PXStoryController.h"
#import "PXStoryModel.h"

@interface PXStoryAudioSessionController : PXStoryController

@property (retain, nonatomic) AVAudioSession *audioSession; // ivar: _audioSession
@property (readonly, weak, nonatomic) PXStoryModel *model; // ivar: _model
@property (readonly, nonatomic) BOOL shouldMixWithOthers; // ivar: _shouldMixWithOthers
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


-(id)initWithModel:(id)arg0 ;
-(id)initWithObservableModel:(id)arg0 ;
-(void)_handleMediaServicesResetNotification:(id)arg0 ;
-(void)_invalidateAudioSession;
-(void)_invalidateShouldMixWithOthers;
-(void)_updateAudioSession;
-(void)_updateShouldMixWithOthers;
-(void)configureUpdater:(id)arg0 ;
-(void)handleModelChange:(NSUInteger)arg0 ;


@end


#endif