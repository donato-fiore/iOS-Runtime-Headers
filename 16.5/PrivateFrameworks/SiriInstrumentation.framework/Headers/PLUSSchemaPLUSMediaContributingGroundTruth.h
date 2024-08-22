// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLUSSCHEMAPLUSMEDIACONTRIBUTINGGROUNDTRUTH_H
#define PLUSSCHEMAPLUSMEDIACONTRIBUTINGGROUNDTRUTH_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface PLUSSchemaPLUSMediaContributingGroundTruth : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) int entityFeedbackType; // ivar: _entityFeedbackType
@property (nonatomic) BOOL hasEntityFeedbackType;
@property (nonatomic) BOOL hasSource;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int source; // ivar: _source


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteEntityFeedbackType;
-(void)deleteSource;
-(void)writeTo:(id)arg0 ;


@end


#endif