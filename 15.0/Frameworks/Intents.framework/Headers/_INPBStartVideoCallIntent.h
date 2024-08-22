// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _INPBSTARTVIDEOCALLINTENT_H
#define _INPBSTARTVIDEOCALLINTENT_H

@class PBCodable, NSArray, NSString;
@protocol _INPBStartVideoCallIntent, NSSecureCoding, NSCopying;


#import "_INPBIntentMetadata.h"

@interface _INPBStartVideoCallIntent : PBCodable <_INPBStartVideoCallIntent, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (nonatomic) int audioRoute; // ivar: _audioRoute
@property (copy, nonatomic) NSArray *contacts; // ivar: _contacts
@property (readonly, nonatomic) NSUInteger contactsCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasAudioRoute;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata; // ivar: _intentMetadata
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *targetContacts; // ivar: _targetContacts
@property (readonly, nonatomic) NSUInteger targetContactsCount;


+(BOOL)supportsSecureCoding;
+(Class)contactType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)audioRouteAsString:(int)arg0 ;
-(id)contactAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)targetContactsAtIndex:(NSUInteger)arg0 ;
-(int)StringAsAudioRoute:(id)arg0 ;
-(void)addContact:(id)arg0 ;
-(void)addTargetContacts:(id)arg0 ;
-(void)clearContacts;
-(void)clearTargetContacts;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif