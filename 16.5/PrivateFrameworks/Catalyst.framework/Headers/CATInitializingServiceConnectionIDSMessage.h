// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CATINITIALIZINGSERVICECONNECTIONIDSMESSAGE_H
#define CATINITIALIZINGSERVICECONNECTIONIDSMESSAGE_H

@class NSDictionary, NSUUID;
@protocol CATIDSMessage, CATInitializingIDSServiceConnectionMessageContent;

#import <Foundation/Foundation.h>


@interface CATInitializingServiceConnectionIDSMessage : NSObject <CATIDSMessage>



@property (readonly, nonatomic) NSObject<CATInitializingIDSServiceConnectionMessageContent> *content; // ivar: _content
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly, nonatomic) NSUUID *invitationIdentifier; // ivar: _invitationIdentifier
@property (readonly, nonatomic) NSInteger messageType;


+(id)instanceWithDictionary:(id)arg0 ;
-(id)initWithInvitationIdentifier:(id)arg0 content:(id)arg1 ;


@end


#endif