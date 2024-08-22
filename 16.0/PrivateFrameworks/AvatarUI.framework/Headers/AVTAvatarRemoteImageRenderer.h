// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVTAVATARREMOTEIMAGERENDERER_H
#define AVTAVATARREMOTEIMAGERENDERER_H

@class NSXPCConnection;
@protocol AVTUILogger;

#import <Foundation/Foundation.h>


@interface AVTAvatarRemoteImageRenderer : NSObject

@property (readonly, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (readonly, nonatomic) NSObject<AVTUILogger> *logger; // ivar: _logger


-(id)_setupConnection;
-(id)init;
-(id)initWithEnvironment:(id)arg0 ;
-(void)_requestStickerAndCacheWithProxy:(id)arg0 avatarRecord:(id)arg1 stickerPackName:(id)arg2 stickerConfigurationName:(id)arg3 resource:(id)arg4 reply:(id)arg5 ;
// -(void)_startRequestWithRetryCount:(NSUInteger)arg0 withReply:(id)arg1 connectionRequestHandler:(unk)arg2  ;
-(void)_tearDownService;
-(void)getSnapshotAndCacheForAvatarRecord:(id)arg0 scope:(id)arg1 withReply:(id)arg2 ;
-(void)getSnapshotForAvatar:(id)arg0 scope:(id)arg1 withModifications:(id)arg2 withReply:(id)arg3 ;
-(void)getSnapshotForAvatar:(id)arg0 scope:(id)arg1 withReply:(id)arg2 ;
-(void)getStickerAndCacheForAvatarRecord:(id)arg0 withStickerPackName:(id)arg1 stickerConfigurationName:(id)arg2 resource:(id)arg3 withReply:(id)arg4 ;


@end


#endif