// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _INPBCALLRECORDVALUE_H
#define _INPBCALLRECORDVALUE_H

@class PBCodable, NSString, NSArray;
@protocol _INPBCallRecordValue, NSSecureCoding, NSCopying;


#import "_INPBCallMetrics.h"
#import "_INPBContactValue.h"
#import "_INPBDateTime.h"
#import "_INPBInteger.h"

@interface _INPBCallRecordValue : PBCodable <_INPBCallRecordValue, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (nonatomic) int callCapability; // ivar: _callCapability
@property (retain, nonatomic) _INPBCallMetrics *callMetrics; // ivar: _callMetrics
@property (nonatomic) int callType; // ivar: _callType
@property (retain, nonatomic) _INPBContactValue *caller; // ivar: _caller
@property (retain, nonatomic) _INPBDateTime *dateCreated; // ivar: _dateCreated
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasCallCapability;
@property (readonly, nonatomic) BOOL hasCallMetrics;
@property (nonatomic) BOOL hasCallType;
@property (readonly, nonatomic) BOOL hasCaller;
@property (readonly, nonatomic) BOOL hasDateCreated;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (nonatomic) BOOL hasIsCallerIdBlocked;
@property (readonly, nonatomic) BOOL hasNumberOfCalls;
@property (nonatomic) BOOL hasPreferredCallProvider;
@property (readonly, nonatomic) BOOL hasProviderBundleId;
@property (readonly, nonatomic) BOOL hasProviderId;
@property (nonatomic) BOOL hasUnseen;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) BOOL isCallerIdBlocked; // ivar: _isCallerIdBlocked
@property (retain, nonatomic) _INPBInteger *numberOfCalls; // ivar: _numberOfCalls
@property (copy, nonatomic) NSArray *participants; // ivar: _participants
@property (readonly, nonatomic) NSUInteger participantsCount;
@property (nonatomic) int preferredCallProvider; // ivar: _preferredCallProvider
@property (copy, nonatomic) NSString *providerBundleId; // ivar: _providerBundleId
@property (copy, nonatomic) NSString *providerId; // ivar: _providerId
@property (readonly) Class superclass;
@property (nonatomic) BOOL unseen; // ivar: _unseen


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)callCapabilityAsString:(int)arg0 ;
-(id)callTypeAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)participantsAtIndex:(NSUInteger)arg0 ;
-(id)preferredCallProviderAsString:(int)arg0 ;
-(int)StringAsCallCapability:(id)arg0 ;
-(int)StringAsCallType:(id)arg0 ;
-(int)StringAsPreferredCallProvider:(id)arg0 ;
-(void)addParticipants:(id)arg0 ;
-(void)clearParticipants;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif