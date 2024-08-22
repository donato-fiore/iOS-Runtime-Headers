// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDCODABLEONBOARDINGCOMPLETION_H
#define HDCODABLEONBOARDINGCOMPLETION_H

@class PBCodable, NSString, NSData;
@protocol NSCopying;



@interface HDCodableOnboardingCompletion : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) CGFloat completionDate; // ivar: _completionDate
@property (retain, nonatomic) NSString *countryCode; // ivar: _countryCode
@property (nonatomic) NSInteger countryCodeProvenance; // ivar: _countryCodeProvenance
@property (nonatomic) BOOL deleted; // ivar: _deleted
@property (retain, nonatomic) NSString *featureIdentifier; // ivar: _featureIdentifier
@property (nonatomic) BOOL hasCompletionDate;
@property (readonly, nonatomic) BOOL hasCountryCode;
@property (nonatomic) BOOL hasCountryCodeProvenance;
@property (nonatomic) BOOL hasDeleted;
@property (readonly, nonatomic) BOOL hasFeatureIdentifier;
@property (nonatomic) BOOL hasModificationDate;
@property (readonly, nonatomic) BOOL hasUuid;
@property (nonatomic) BOOL hasVersion;
@property (nonatomic) CGFloat modificationDate; // ivar: _modificationDate
@property (retain, nonatomic) NSData *uuid; // ivar: _uuid
@property (nonatomic) NSInteger version; // ivar: _version


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isValidWithError:(*id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)decodedCompletionDate;
-(id)decodedModificationDate;
-(id)decodedUUID;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif