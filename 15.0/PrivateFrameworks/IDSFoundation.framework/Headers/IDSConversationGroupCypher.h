// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IDSCONVERSATIONGROUPCYPHER_H
#define IDSCONVERSATIONGROUPCYPHER_H

@class NSString, NSArray;
@protocol ENCypher;

#import <Foundation/Foundation.h>

#import "IDSMPConversationGroup.h"
#import "IDSDeviceIdentity.h"

@interface IDSConversationGroupCypher : NSObject <ENCypher>



@property (retain, nonatomic) IDSMPConversationGroup *conversationGroup; // ivar: _conversationGroup
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) IDSDeviceIdentity *deviceIdentity; // ivar: _deviceIdentity
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSArray *participants; // ivar: _participants
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)_memberList;
-(id)cypherData:(id)arg0 withAccountIdentity:(id)arg1 identifier:(*id)arg2 error:(*id)arg3 ;
-(id)decypherData:(id)arg0 withAccountIdentity:(id)arg1 signingDevicePublicKey:(id)arg2 identifier:(id)arg3 error:(*id)arg4 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConversationGroup:(id)arg0 deviceIdentity:(id)arg1 participants:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif