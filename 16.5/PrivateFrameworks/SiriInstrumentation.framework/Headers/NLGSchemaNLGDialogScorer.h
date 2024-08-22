// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NLGSCHEMANLGDIALOGSCORER_H
#define NLGSCHEMANLGDIALOGSCORER_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface NLGSchemaNLGDialogScorer : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) int dialogScorerType; // ivar: _dialogScorerType
@property (nonatomic) BOOL hasDialogScorerType;
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteDialogScorerType;
-(void)writeTo:(id)arg0 ;


@end


#endif