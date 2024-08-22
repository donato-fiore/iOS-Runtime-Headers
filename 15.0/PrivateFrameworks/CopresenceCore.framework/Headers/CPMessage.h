// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPMESSAGE_H
#define CPMESSAGE_H

@class NSArray, NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface CPMessage : NSObject

@property (copy, nonatomic) NSArray *destinations; // ivar: _destinations
@property (copy, nonatomic) NSString *messageType; // ivar: _messageType
@property (copy, nonatomic) NSDictionary *payloadDict; // ivar: _payloadDict
@property (copy, nonatomic) NSString *sender; // ivar: _sender
@property (copy, nonatomic) NSString *sessionUUID; // ivar: _sessionUUID


+(id)makeAppBroadcastMessageForSession:(id)arg0 appBundleId:(id)arg1 toDestinations:(id)arg2 ;
+(id)makeAppSharingRequestMessageForSession:(id)arg0 bundleInfo:(id)arg1 toDestinations:(id)arg2 ;
+(id)makeInviteDeclineMessageForSession:(id)arg0 inviteOriginatorAccountID:(id)arg1 toDestinations:(id)arg2 ;
+(id)makeInviteRequestMessageForParticipants:(id)arg0 withSession:(id)arg1 toDestinations:(id)arg2 ;
-(id)description;
-(id)initWithMessageType:(id)arg0 withSession:(id)arg1 withPayload:(id)arg2 from:(id)arg3 ;
-(id)initWithMessageType:(id)arg0 withSession:(id)arg1 withPayload:(id)arg2 toDestinations:(id)arg3 ;


@end


#endif