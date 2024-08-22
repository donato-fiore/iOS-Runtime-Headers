// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _INPBCALLRECORDFILTER_H
#define _INPBCALLRECORDFILTER_H

@class PBCodable, NSString, NSArray;
@protocol _INPBCallRecordFilter, NSSecureCoding, NSCopying;



@interface _INPBCallRecordFilter : PBCodable <_INPBCallRecordFilter, NSSecureCoding, NSCopying>

 {
    ? _callTypes;
    ? _has;
}


@property (nonatomic) int callCapability; // ivar: _callCapability
@property (readonly, nonatomic) *int callTypes;
@property (readonly, nonatomic) NSUInteger callTypesCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasCallCapability;
@property (nonatomic) BOOL hasPreferredCallProvider;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *participants; // ivar: _participants
@property (readonly, nonatomic) NSUInteger participantsCount;
@property (nonatomic) int preferredCallProvider; // ivar: _preferredCallProvider
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)callCapabilityAsString:(int)arg0 ;
-(id)callTypesAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)participantsAtIndex:(NSUInteger)arg0 ;
-(id)preferredCallProviderAsString:(int)arg0 ;
-(int)StringAsCallCapability:(id)arg0 ;
-(int)StringAsCallTypes:(id)arg0 ;
-(int)StringAsPreferredCallProvider:(id)arg0 ;
-(int)callTypesAtIndex:(NSUInteger)arg0 ;
-(void)addCallTypes:(int)arg0 ;
-(void)addParticipants:(id)arg0 ;
-(void)clearCallTypes;
-(void)clearParticipants;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif