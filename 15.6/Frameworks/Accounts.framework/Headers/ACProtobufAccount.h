// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ACPROTOBUFACCOUNT_H
#define ACPROTOBUFACCOUNT_H

@class PBCodable, NSString, NSMutableArray, NSDictionary;
@protocol NSCopying;


#import "ACProtobufAccountType.h"
#import "ACProtobufAccountCredential.h"
#import "ACProtobufDate.h"
#import "ACProtobufURL.h"
#import "ACProtobufAccount.h"

@interface ACProtobufAccount : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *accountDescription; // ivar: _accountDescription
@property (retain, nonatomic) ACProtobufAccountType *accountType; // ivar: _accountType
@property (nonatomic) BOOL active; // ivar: _active
@property (nonatomic) BOOL authenticated; // ivar: _authenticated
@property (retain, nonatomic) NSString *authenticationType; // ivar: _authenticationType
@property (retain, nonatomic) ACProtobufAccountCredential *credential; // ivar: _credential
@property (retain, nonatomic) NSString *credentialType; // ivar: _credentialType
@property (retain, nonatomic) NSMutableArray *dataclassProperties; // ivar: _dataclassProperties
@property (copy, nonatomic) NSDictionary *dataclassPropertiesDictionary;
@property (retain, nonatomic) ACProtobufDate *date; // ivar: _date
@property (retain, nonatomic) NSMutableArray *dirtyAccountProperties; // ivar: _dirtyAccountProperties
@property (retain, nonatomic) NSMutableArray *dirtyDataclassProperties; // ivar: _dirtyDataclassProperties
@property (retain, nonatomic) NSMutableArray *dirtyProperties; // ivar: _dirtyProperties
@property (retain, nonatomic) NSMutableArray *enabledDataclasses; // ivar: _enabledDataclasses
@property (readonly, nonatomic) BOOL hasAccountDescription;
@property (readonly, nonatomic) BOOL hasAuthenticationType;
@property (readonly, nonatomic) BOOL hasCredential;
@property (readonly, nonatomic) BOOL hasCredentialType;
@property (readonly, nonatomic) BOOL hasDate;
@property (readonly, nonatomic) BOOL hasLastCredentialRenewalRejectionDate;
@property (readonly, nonatomic) BOOL hasModificationID;
@property (readonly, nonatomic) BOOL hasObjectID;
@property (readonly, nonatomic) BOOL hasOwningBundleID;
@property (readonly, nonatomic) BOOL hasParentAccount;
@property (readonly, nonatomic) BOOL hasUsername;
@property (nonatomic) BOOL hasWarmingUp;
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) ACProtobufDate *lastCredentialRenewalRejectionDate; // ivar: _lastCredentialRenewalRejectionDate
@property (retain, nonatomic) NSString *modificationID; // ivar: _modificationID
@property (retain, nonatomic) ACProtobufURL *objectID; // ivar: _objectID
@property (retain, nonatomic) NSString *owningBundleID; // ivar: _owningBundleID
@property (retain, nonatomic) ACProtobufAccount *parentAccount; // ivar: _parentAccount
@property (retain, nonatomic) NSMutableArray *properties; // ivar: _properties
@property (copy, nonatomic) NSDictionary *propertiesDictionary;
@property (retain, nonatomic) NSMutableArray *provisionedDataclasses; // ivar: _provisionedDataclasses
@property (nonatomic) BOOL supportsAuthentication; // ivar: _supportsAuthentication
@property (retain, nonatomic) NSString *username; // ivar: _username
@property (nonatomic) BOOL visible; // ivar: _visible
@property (nonatomic) BOOL warmingUp; // ivar: _warmingUp


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dataclassPropertiesAtIndex:(NSUInteger)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)dirtyAccountPropertiesAtIndex:(NSUInteger)arg0 ;
-(id)dirtyDataclassPropertiesAtIndex:(NSUInteger)arg0 ;
-(id)dirtyPropertiesAtIndex:(NSUInteger)arg0 ;
-(id)enabledDataclassesAtIndex:(NSUInteger)arg0 ;
-(id)propertiesAtIndex:(NSUInteger)arg0 ;
-(id)provisionedDataclassesAtIndex:(NSUInteger)arg0 ;
-(void)addDataclassProperties:(id)arg0 ;
-(void)addDirtyAccountProperties:(id)arg0 ;
-(void)addDirtyDataclassProperties:(id)arg0 ;
-(void)addDirtyProperties:(id)arg0 ;
-(void)addEnabledDataclasses:(id)arg0 ;
-(void)addProperties:(id)arg0 ;
-(void)addProvisionedDataclasses:(id)arg0 ;
-(void)clearDataclassProperties;
-(void)clearDirtyAccountProperties;
-(void)clearDirtyDataclassProperties;
-(void)clearDirtyProperties;
-(void)clearEnabledDataclasses;
-(void)clearProperties;
-(void)clearProvisionedDataclasses;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif