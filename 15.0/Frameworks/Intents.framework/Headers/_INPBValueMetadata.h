// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _INPBVALUEMETADATA_H
#define _INPBVALUEMETADATA_H

@class PBCodable, NSString;
@protocol _INPBValueMetadata, NSSecureCoding, NSCopying;


#import "_INPBConfidenceScore.h"

@interface _INPBValueMetadata : PBCodable <_INPBValueMetadata, NSSecureCoding, NSCopying>

 {
    ? _requiredEntitlements;
    ? _has;
}


@property (copy, nonatomic) NSString *canonicalValue; // ivar: _canonicalValue
@property (retain, nonatomic) _INPBConfidenceScore *confidenceScore; // ivar: _confidenceScore
@property (nonatomic) BOOL confirmed; // ivar: _confirmed
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasCanonicalValue;
@property (readonly, nonatomic) BOOL hasConfidenceScore;
@property (nonatomic) BOOL hasConfirmed;
@property (readonly, nonatomic) BOOL hasInput;
@property (readonly, nonatomic) BOOL hasSource;
@property (readonly, nonatomic) BOOL hasSourceAppBundleIdentifier;
@property (readonly, nonatomic) BOOL hasUuid;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *input; // ivar: _input
@property (readonly, nonatomic) *int requiredEntitlements;
@property (readonly, nonatomic) NSUInteger requiredEntitlementsCount;
@property (copy, nonatomic) NSString *source; // ivar: _source
@property (copy, nonatomic) NSString *sourceAppBundleIdentifier; // ivar: _sourceAppBundleIdentifier
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *uuid; // ivar: _uuid


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)requiredEntitlementsAsString:(int)arg0 ;
-(int)StringAsRequiredEntitlements:(id)arg0 ;
-(int)requiredEntitlementAtIndex:(NSUInteger)arg0 ;
-(void)addRequiredEntitlement:(int)arg0 ;
-(void)clearRequiredEntitlements;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif