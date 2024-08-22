// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMAVCHATPARTICIPANTPROXY_H
#define IMAVCHATPARTICIPANTPROXY_H

@class NSDictionary, NSString;

#import <Foundation/Foundation.h>

#import "IMAVChatProxy.h"
#import "IMAVChat.h"

@interface IMAVChatParticipantProxy : NSObject {
    NSDictionary *_info;
    IMAVChatProxy *_chat;
}


@property (readonly, nonatomic) BOOL _inviteDelivered;
@property (readonly, nonatomic) IMAVChat *avChat;
@property (readonly, nonatomic) NSString *name;


-(BOOL)isLocalParticipant;
-(id)initWithDictionary:(id)arg0 chat:(id)arg1 ;
-(void)forwardInvocation:(id)arg0 ;


@end


#endif