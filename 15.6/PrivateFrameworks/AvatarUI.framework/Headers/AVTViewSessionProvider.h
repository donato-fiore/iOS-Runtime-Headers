// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVTVIEWSESSIONPROVIDER_H
#define AVTVIEWSESSIONPROVIDER_H

@class AVTView, UIView, NSString, NSNotificationCenter;
@protocol AVTViewSessionDelegate, AVTViewLayoutInfo, AVTViewSessionProviderDelegate;

#import <Foundation/Foundation.h>

#import "AVTViewSession.h"
#import "AVTViewUpdater.h"
#import "AVTUIEnvironment.h"
#import "AVTFaceTrackingManager.h"

@interface AVTViewSessionProvider : NSObject <AVTViewSessionDelegate, AVTViewLayoutInfo>



@property (retain, nonatomic) AVTViewSession *activeSession; // ivar: _activeSession
@property (retain, nonatomic) AVTView *avtView; // ivar: _avtView
@property (readonly, nonatomic) CGSize avtViewBackingSize; // ivar: _avtViewBackingSize
@property (retain, nonatomic) UIView *avtViewContainer; // ivar: _avtViewContainer
@property (retain, nonatomic) AVTViewUpdater *avtViewUpdater; // ivar: _avtViewUpdater
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AVTViewSessionProviderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) AVTUIEnvironment *environment; // ivar: _environment
@property (retain, nonatomic) AVTFaceTrackingManager *faceTrackingManager; // ivar: _faceTrackingManager
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSNotificationCenter *notificationCenter; // ivar: _notificationCenter
@property (retain, nonatomic) AVTViewSession *pausedTrackingSession; // ivar: _pausedTrackingSession
@property (retain, nonatomic) AVTViewSession *pendingSession; // ivar: _pendingSession
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) id *viewCreator; // ivar: _viewCreator


+(id)creatorForAVTRecordView:(SEL)arg0 ;
+(id)creatorForAVTView:(SEL)arg0 ;
+(struct CGSize )backingSizeForEnvironment:(id)arg0 ;
// -(id)initWithAVTViewBackingSize:(struct CGSize )arg0 viewCreator:(id)arg1 environment:(unk)arg2  ;
// -(id)sessionWithDidBecomeActiveHandler:(id)arg0 tearDownHandler:(unk)arg1  ;
-(void)activateNextSession;
-(void)createContainerAndViewIfNeeded;
-(void)dealloc;
-(void)didLosePrimaryStatusWithSessionToPause:(id)arg0 ;
-(void)handleProviderReleasesPrimaryStatusNotification:(id)arg0 ;
-(void)handleProviderTakesPrimaryStatusNotification:(id)arg0 ;
-(void)recoverPrimaryStatus;
-(void)sessionDidTearDown:(id)arg0 ;


@end


#endif