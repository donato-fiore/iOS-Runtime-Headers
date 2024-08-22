// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ANCSCHEMAANCUSERRESPONSEEVALUATED_H
#define ANCSCHEMAANCUSERRESPONSEEVALUATED_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface ANCSchemaANCUserResponseEvaluated : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasUserResponseCategory;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int userResponseCategory; // ivar: _userResponseCategory


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteUserResponseCategory;
-(void)writeTo:(id)arg0 ;


@end


#endif