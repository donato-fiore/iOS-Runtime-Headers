// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _INPBSEARCHCALLHISTORYINTENT_H
#define _INPBSEARCHCALLHISTORYINTENT_H

@class PBCodable, NSString;
@protocol _INPBSearchCallHistoryIntent, NSSecureCoding, NSCopying;


#import "_INPBDateTimeRange.h"
#import "_INPBIntentMetadata.h"
#import "_INPBContact.h"

@interface _INPBSearchCallHistoryIntent : PBCodable <_INPBSearchCallHistoryIntent, NSSecureCoding, NSCopying>

 {
    ? _callCapabilities;
    ? _callTypes;
    ? _capabilities;
    ? _has;
}


@property (readonly, nonatomic) *int callCapabilities;
@property (readonly, nonatomic) NSUInteger callCapabilitiesCount;
@property (nonatomic) int callType; // ivar: _callType
@property (readonly, nonatomic) *int callTypes;
@property (readonly, nonatomic) NSUInteger callTypesCount;
@property (readonly, nonatomic) *int capabilities;
@property (readonly, nonatomic) NSUInteger capabilitiesCount;
@property (retain, nonatomic) _INPBDateTimeRange *dateCreated; // ivar: _dateCreated
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasCallType;
@property (readonly, nonatomic) BOOL hasDateCreated;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (nonatomic) BOOL hasPreferredCallProvider;
@property (readonly, nonatomic) BOOL hasRecipient;
@property (readonly, nonatomic) BOOL hasTargetContact;
@property (nonatomic) BOOL hasUnseen;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata; // ivar: _intentMetadata
@property (nonatomic) int preferredCallProvider; // ivar: _preferredCallProvider
@property (retain, nonatomic) _INPBContact *recipient; // ivar: _recipient
@property (readonly) Class superclass;
@property (retain, nonatomic) _INPBContact *targetContact; // ivar: _targetContact
@property (nonatomic) BOOL unseen; // ivar: _unseen


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)callCapabilitiesAsString:(int)arg0 ;
-(id)callTypeAsString:(int)arg0 ;
-(id)callTypesAsString:(int)arg0 ;
-(id)capabilitiesAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)preferredCallProviderAsString:(int)arg0 ;
-(int)StringAsCallCapabilities:(id)arg0 ;
-(int)StringAsCallType:(id)arg0 ;
-(int)StringAsCallTypes:(id)arg0 ;
-(int)StringAsCapabilities:(id)arg0 ;
-(int)StringAsPreferredCallProvider:(id)arg0 ;
-(int)callCapabilitiesAtIndex:(NSUInteger)arg0 ;
-(int)callTypesAtIndex:(NSUInteger)arg0 ;
-(int)capabilitiesAtIndex:(NSUInteger)arg0 ;
-(void)addCallCapabilities:(int)arg0 ;
-(void)addCallTypes:(int)arg0 ;
-(void)addCapabilities:(int)arg0 ;
-(void)clearCallCapabilities;
-(void)clearCallTypes;
-(void)clearCapabilities;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif