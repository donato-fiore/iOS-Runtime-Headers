// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _INPBSTARTAUDIOCALLINTENT_H
#define _INPBSTARTAUDIOCALLINTENT_H

@class PBCodable, NSArray, NSString;
@protocol _INPBStartAudioCallIntent, NSSecureCoding, NSCopying;


#import "_INPBIntentMetadata.h"

@interface _INPBStartAudioCallIntent : PBCodable <_INPBStartAudioCallIntent, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (nonatomic) int audioRoute; // ivar: _audioRoute
@property (copy, nonatomic) NSArray *contacts; // ivar: _contacts
@property (readonly, nonatomic) NSUInteger contactsCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int destinationType; // ivar: _destinationType
@property (nonatomic) BOOL hasAudioRoute;
@property (nonatomic) BOOL hasDestinationType;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (nonatomic) BOOL hasPreferredCallProvider;
@property (nonatomic) BOOL hasRecordTypeForRedialing;
@property (nonatomic) BOOL hasTtyType;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata; // ivar: _intentMetadata
@property (nonatomic) int preferredCallProvider; // ivar: _preferredCallProvider
@property (nonatomic) int recordTypeForRedialing; // ivar: _recordTypeForRedialing
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *targetContacts; // ivar: _targetContacts
@property (readonly, nonatomic) NSUInteger targetContactsCount;
@property (nonatomic) int ttyType; // ivar: _ttyType


+(BOOL)supportsSecureCoding;
+(Class)contactType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)audioRouteAsString:(int)arg0 ;
-(id)contactAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)destinationTypeAsString:(int)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)preferredCallProviderAsString:(int)arg0 ;
-(id)recordTypeForRedialingAsString:(int)arg0 ;
-(id)targetContactsAtIndex:(NSUInteger)arg0 ;
-(id)ttyTypeAsString:(int)arg0 ;
-(int)StringAsAudioRoute:(id)arg0 ;
-(int)StringAsDestinationType:(id)arg0 ;
-(int)StringAsPreferredCallProvider:(id)arg0 ;
-(int)StringAsRecordTypeForRedialing:(id)arg0 ;
-(int)StringAsTTYType:(id)arg0 ;
-(void)addContact:(id)arg0 ;
-(void)addTargetContacts:(id)arg0 ;
-(void)clearContacts;
-(void)clearTargetContacts;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif