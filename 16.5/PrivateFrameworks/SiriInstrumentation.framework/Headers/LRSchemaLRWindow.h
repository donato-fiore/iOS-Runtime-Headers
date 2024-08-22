// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LRSCHEMALRWINDOW_H
#define LRSCHEMALRWINDOW_H

@class NSArray, NSData;


#import "SISchemaInstrumentationMessage.h"

@interface LRSchemaLRWindow : SISchemaInstrumentationMessage {
    ? _has;
}


@property (copy, nonatomic) NSArray *activeRedactionPolicies; // ivar: _activeRedactionPolicies
@property (nonatomic) NSUInteger endTimeInNs; // ivar: _endTimeInNs
@property (nonatomic) BOOL hasEndTimeInNs;
@property (nonatomic) BOOL hasStartTimeInNs;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) NSUInteger startTimeInNs; // ivar: _startTimeInNs


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(int)activeRedactionPoliciesAtIndex:(NSUInteger)arg0 ;
-(void)addActiveRedactionPolicies:(int)arg0 ;
-(void)clearActiveRedactionPolicies;
-(void)deleteActiveRedactionPolicies;
-(void)deleteEndTimeInNs;
-(void)deleteStartTimeInNs;
-(void)writeTo:(id)arg0 ;


@end


#endif