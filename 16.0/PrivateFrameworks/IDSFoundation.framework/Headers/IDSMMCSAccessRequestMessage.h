// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IDSMMCSACCESSREQUESTMESSAGE_H
#define IDSMMCSACCESSREQUESTMESSAGE_H

@class NSArray, NSString, NSData;


#import "IDSMessage.h"

@interface IDSMMCSAccessRequestMessage : IDSMessage

@property (retain, nonatomic) NSArray *downloadAuths; // ivar: _downloadAuths
@property (retain, nonatomic) NSString *downloadingDeviceID; // ivar: _downloadingDeviceID
@property (retain, nonatomic) NSData *downloadingDeviceToken; // ivar: _downloadingDeviceToken
@property (retain, nonatomic) NSString *senderID; // ivar: _senderID
@property (retain, nonatomic) NSData *sessionToken; // ivar: _sessionToken


-(NSInteger)command;
-(NSInteger)responseCommand;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)messageBody;
-(id)requiredKeys;


@end


#endif