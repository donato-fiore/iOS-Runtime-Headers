// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPASSSHARE_H
#define PKPASSSHARE_H

@class NSDate, NSArray, NSString, NSUUID;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "PKPassShareActivationOptions.h"

@interface PKPassShare : NSObject <NSSecureCoding, NSCopying>

 {
    NSUInteger _status;
}


@property (retain, nonatomic) PKPassShareActivationOptions *activationOptions; // ivar: _activationOptions
@property (retain, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (retain, nonatomic) NSArray *credentialShares; // ivar: _credentialShares
@property (retain, nonatomic) NSArray *displayableSharedEntitlements; // ivar: _displayableSharedEntitlements
@property (retain, nonatomic) NSString *groupIdentifier; // ivar: _groupIdentifier
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) BOOL isEditable;
@property (readonly, nonatomic) BOOL isLocalShare;
@property (readonly, nonatomic) BOOL isRevokable;
@property (nonatomic) NSUInteger manageability; // ivar: _manageability
@property (readonly, nonatomic) NSUInteger mostRestrictiveShareability;
@property (retain, nonatomic) NSString *recipientHandle; // ivar: _recipientHandle
@property (retain, nonatomic) NSString *recipientNickname; // ivar: _recipientNickname
@property (retain, nonatomic) NSString *senderShareIdentifier; // ivar: _senderShareIdentifier
@property (retain, nonatomic) NSArray *sharedEntitlements; // ivar: _sharedEntitlements
@property (nonatomic) NSUInteger status;
@property (retain, nonatomic) NSString *subcredentialIdentifier; // ivar: _subcredentialIdentifier
@property (readonly, nonatomic) NSUUID *uuidIdentifier;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isSameUnderlyingShareAs:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)addCredentialShare:(id)arg0 ;
-(void)appendCredentialShareDictionary:(id)arg0 entitlements:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateDisplayableSharedEntitlementsFromDisplayableEntitlements:(id)arg0 ;


@end


#endif