// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ACPROTOBUFACCOUNTTYPE_H
#define ACPROTOBUFACCOUNTTYPE_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "ACProtobufURL.h"

@interface ACProtobufAccountType : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *accountTypeDescription; // ivar: _accountTypeDescription
@property (retain, nonatomic) NSString *credentialProtectionPolicy; // ivar: _credentialProtectionPolicy
@property (retain, nonatomic) NSString *credentialType; // ivar: _credentialType
@property (readonly, nonatomic) BOOL hasCredentialProtectionPolicy;
@property (readonly, nonatomic) BOOL hasCredentialType;
@property (readonly, nonatomic) BOOL hasObjectID;
@property (nonatomic) BOOL hasObsolete;
@property (readonly, nonatomic) BOOL hasOwningBundleID;
@property (nonatomic) BOOL hasSupportsAuthentication;
@property (nonatomic) BOOL hasSupportsMultipleAccounts;
@property (nonatomic) BOOL hasVisibility;
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) ACProtobufURL *objectID; // ivar: _objectID
@property (nonatomic) BOOL obsolete; // ivar: _obsolete
@property (retain, nonatomic) NSString *owningBundleID; // ivar: _owningBundleID
@property (nonatomic) int supportsAuthentication; // ivar: _supportsAuthentication
@property (nonatomic) BOOL supportsMultipleAccounts; // ivar: _supportsMultipleAccounts
@property (nonatomic) int visibility; // ivar: _visibility


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif