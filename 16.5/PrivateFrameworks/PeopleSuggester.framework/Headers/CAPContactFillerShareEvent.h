// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAPCONTACTFILLERSHAREEVENT_H
#define CAPCONTACTFILLERSHAREEVENT_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;


#import "CAPContactFillerUserEvent.h"

@interface CAPContactFillerShareEvent : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *contactEvents; // ivar: _contactEvents
@property (retain, nonatomic) CAPContactFillerUserEvent *userEvent; // ivar: _userEvent


+(Class)contactEventType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)contactEventAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addContactEvent:(id)arg0 ;
-(void)clearContactEvents;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif