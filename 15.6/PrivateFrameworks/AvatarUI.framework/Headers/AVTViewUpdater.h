// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVTVIEWUPDATER_H
#define AVTVIEWUPDATER_H

@class AVTView, AVTAvatar, NSString;
@protocol SCNSceneRendererDelegate, AVTAvatarRecord, OS_dispatch_queue, AVTUILogger;

#import <Foundation/Foundation.h>


@interface AVTViewUpdater : NSObject <SCNSceneRendererDelegate>

 {
    os_unfair_lock_s _lock;
    CGFloat _lastUpdateTimestamp;
}


@property (retain, nonatomic) NSObject<AVTAvatarRecord> *avatarRecord; // ivar: _avatarRecord
@property (readonly, nonatomic) AVTView *avtView; // ivar: _avtView
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // ivar: _callbackQueue
@property (retain, nonatomic) AVTAvatar *currentAvatar; // ivar: _currentAvatar
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<AVTUILogger> *logger; // ivar: _logger
@property (readonly) Class superclass;


-(BOOL)willUpdateViewForRecord:(id)arg0 avatar:(id)arg1 ;
-(id)initWithAVTView:(id)arg0 callbackQueue:(id)arg1 logger:(id)arg2 ;
-(id)initWithAVTView:(id)arg0 logger:(id)arg1 ;
// -(void)addAvatarPresentedOnScreenCallbackWithQueue:(id)arg0 forTimestamp:(unk)arg1  ;
-(void)setStickerConfiguration:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif