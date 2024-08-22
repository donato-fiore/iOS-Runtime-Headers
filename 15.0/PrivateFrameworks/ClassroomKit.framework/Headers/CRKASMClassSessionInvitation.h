// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRKASMCLASSSESSIONINVITATION_H
#define CRKASMCLASSSESSIONINVITATION_H

@class NSDictionary, NSString, NSUUID, DMFControlSessionIdentifier;
@protocol CRKDictionaryCodable;

#import <Foundation/Foundation.h>


@interface CRKASMClassSessionInvitation : NSObject <CRKDictionaryCodable>



@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly, copy, nonatomic) NSString *instructorIdentifier; // ivar: _instructorIdentifier
@property (readonly, nonatomic) NSUUID *invitationIdentifier; // ivar: _invitationIdentifier
@property (readonly, nonatomic) DMFControlSessionIdentifier *sessionIdentifier; // ivar: _sessionIdentifier


+(id)instanceWithDictionary:(id)arg0 ;
-(id)initWithInvitationIdentifier:(id)arg0 instructorIdentifier:(id)arg1 sessionIdentifier:(id)arg2 ;
-(id)initWithSessionIdentifier:(id)arg0 instructorIdentifier:(id)arg1 ;


@end


#endif