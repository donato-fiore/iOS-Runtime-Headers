// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _INPBSTARTCALLINTENT_H
#define _INPBSTARTCALLINTENT_H

@class PBCodable, NSArray, NSString;
@protocol _INPBStartCallIntent, NSSecureCoding, NSCopying;


#import "_INPBCallRecordFilter.h"
#import "_INPBCallRecordValue.h"
#import "_INPBIntentMetadata.h"

@interface _INPBStartCallIntent : PBCodable <_INPBStartCallIntent, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (nonatomic) int audioRoute; // ivar: _audioRoute
@property (nonatomic) int callCapability; // ivar: _callCapability
@property (copy, nonatomic) NSArray *callGroups; // ivar: _callGroups
@property (readonly, nonatomic) NSUInteger callGroupsCount;
@property (retain, nonatomic) _INPBCallRecordFilter *callRecordFilter; // ivar: _callRecordFilter
@property (retain, nonatomic) _INPBCallRecordValue *callRecordToCallBack; // ivar: _callRecordToCallBack
@property (copy, nonatomic) NSArray *contacts; // ivar: _contacts
@property (readonly, nonatomic) NSUInteger contactsCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int destinationType; // ivar: _destinationType
@property (nonatomic) BOOL hasAudioRoute;
@property (nonatomic) BOOL hasCallCapability;
@property (readonly, nonatomic) BOOL hasCallRecordFilter;
@property (readonly, nonatomic) BOOL hasCallRecordToCallBack;
@property (nonatomic) BOOL hasDestinationType;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (nonatomic) BOOL hasIsGroupCall;
@property (readonly, nonatomic) BOOL hasNotificationThreadIdentifier;
@property (nonatomic) BOOL hasPreferredCallProvider;
@property (nonatomic) BOOL hasRecordTypeForRedialing;
@property (nonatomic) BOOL hasTtyType;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata; // ivar: _intentMetadata
@property (nonatomic) BOOL isGroupCall; // ivar: _isGroupCall
@property (copy, nonatomic) NSString *notificationThreadIdentifier; // ivar: _notificationThreadIdentifier
@property (nonatomic) int preferredCallProvider; // ivar: _preferredCallProvider
@property (nonatomic) int recordTypeForRedialing; // ivar: _recordTypeForRedialing
@property (readonly) Class superclass;
@property (nonatomic) int ttyType; // ivar: _ttyType


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)audioRouteAsString:(int)arg0 ;
-(id)callCapabilityAsString:(int)arg0 ;
-(id)callGroupsAtIndex:(NSUInteger)arg0 ;
-(id)contactsAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)destinationTypeAsString:(int)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)preferredCallProviderAsString:(int)arg0 ;
-(id)recordTypeForRedialingAsString:(int)arg0 ;
-(id)ttyTypeAsString:(int)arg0 ;
-(int)StringAsAudioRoute:(id)arg0 ;
-(int)StringAsCallCapability:(id)arg0 ;
-(int)StringAsDestinationType:(id)arg0 ;
-(int)StringAsPreferredCallProvider:(id)arg0 ;
-(int)StringAsRecordTypeForRedialing:(id)arg0 ;
-(int)StringAsTTYType:(id)arg0 ;
-(void)addCallGroups:(id)arg0 ;
-(void)addContacts:(id)arg0 ;
-(void)clearCallGroups;
-(void)clearContacts;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif