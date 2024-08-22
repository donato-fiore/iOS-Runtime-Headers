// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMAVCHATPROXY_H
#define IMAVCHATPROXY_H

@class NSDictionary, NSString, NSNumber, NSDate, IMHandle, NSArray;

#import <Foundation/Foundation.h>


@interface IMAVChatProxy : NSObject {
    NSDictionary *_info;
}


@property (readonly, nonatomic) NSString *GUID;
@property (readonly, nonatomic) NSString *conferenceID;
@property (nonatomic) CGFloat connectionTimeoutTime;
@property (readonly, nonatomic) NSNumber *dataDownloaded;
@property (readonly, nonatomic) NSNumber *dataUploaded;
@property (readonly, nonatomic) NSDate *dateConnected;
@property (readonly, nonatomic) NSDate *dateEnded;
@property (readonly, nonatomic) int endedError;
@property (readonly, nonatomic) unsigned int endedReason;
@property (readonly, nonatomic) BOOL hasReceivedFirstFrame;
@property (readonly, nonatomic) IMHandle *initiatorIMHandle;
@property (nonatomic) CGFloat invitationTimeoutTime;
@property (readonly, nonatomic) BOOL isActive;
@property (readonly, nonatomic) BOOL isCaller;
@property (nonatomic, setter=setMute:) BOOL isMute;
@property (nonatomic) BOOL isSendingAudio;
@property (nonatomic) BOOL isSendingVideo;
@property (readonly, nonatomic) BOOL isStateFinal;
@property (readonly, nonatomic) BOOL isVideo;
@property (readonly, nonatomic) IMHandle *otherIMHandle;
@property (nonatomic, getter=isRelayed) BOOL relayed;
@property (readonly, nonatomic) NSArray *remoteParticipants;
@property (readonly, nonatomic) unsigned int sessionID;
@property (readonly, nonatomic) unsigned int state;


-(BOOL)_isCallUpgradeTo:(id)arg0 ;
-(BOOL)_isProxy;
-(id)account;
-(id)description;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(void)acceptInvitation;
-(void)cancelInvitation;
-(void)declineInvitation;
-(void)endChat;
-(void)endChatWithReason:(unsigned int)arg0 ;
-(void)finalUpdate;
-(void)forwardInvocation:(id)arg0 ;
-(void)invite:(id)arg0 additionalPeers:(id)arg1 ;
-(void)invite:(id)arg0 additionalPeers:(id)arg1 excludingPushTokens:(id)arg2 ;
-(void)inviteAll;
-(void)setLocalAspectRatio:(struct CGSize )arg0 cameraOrientation:(unsigned int)arg1 cameraType:(unsigned int)arg2 ;
-(void)updateWithInfo:(id)arg0 ;


@end


#endif