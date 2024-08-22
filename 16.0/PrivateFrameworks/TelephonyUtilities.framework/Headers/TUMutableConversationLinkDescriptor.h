// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TUMUTABLECONVERSATIONLINKDESCRIPTOR_H
#define TUMUTABLECONVERSATIONLINKDESCRIPTOR_H

@class NSDate, NSUUID, NSSet, NSString, NSData;


#import "TUConversationLinkDescriptor.h"
#import "TUConversationLinkOriginator.h"

@interface TUMutableConversationLinkDescriptor : TUConversationLinkDescriptor

@property (nonatomic, getter=isActivated) BOOL activated;
@property (retain, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) NSDate *expirationDate;
@property (retain, nonatomic) NSUUID *groupUUID;
@property (copy, nonatomic) NSSet *invitedHandles;
@property (nonatomic) NSInteger linkLifetimeScope;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) TUConversationLinkOriginator *originator;
@property (copy, nonatomic) NSData *privateKey;
@property (copy, nonatomic) NSString *pseudonym;
@property (copy, nonatomic) NSData *publicKey;
@property (nonatomic) int version;




@end


#endif