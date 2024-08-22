// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLUSSCHEMAPLUSRECTIFIPATTERNSEQUENCEGENERATED_H
#define PLUSSCHEMAPLUSRECTIFIPATTERNSEQUENCEGENERATED_H

@class NSArray, NSData;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaUUID.h"

@interface PLUSSchemaPLUSRECTIFIPatternSequenceGenerated : SISchemaInstrumentationMessage {
    ? _has;
}


@property (copy, nonatomic) NSArray *constraints; // ivar: _constraints
@property (nonatomic) BOOL hasNumberOfRequestsReviewed;
@property (nonatomic) BOOL hasNumberOfUniqueRequestsReviewed;
@property (nonatomic) BOOL hasOriginalRequestId; // ivar: _hasOriginalRequestId
@property (nonatomic) BOOL hasPatternId; // ivar: _hasPatternId
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) unsigned int numberOfRequestsReviewed; // ivar: _numberOfRequestsReviewed
@property (nonatomic) unsigned int numberOfUniqueRequestsReviewed; // ivar: _numberOfUniqueRequestsReviewed
@property (retain, nonatomic) SISchemaUUID *originalRequestId; // ivar: _originalRequestId
@property (retain, nonatomic) SISchemaUUID *patternId; // ivar: _patternId
@property (copy, nonatomic) NSArray *sequences; // ivar: _sequences


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)sequenceCount;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)constraintsAtIndex:(NSUInteger)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)sequenceAtIndex:(NSUInteger)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)addConstraints:(id)arg0 ;
-(void)addSequence:(id)arg0 ;
-(void)clearConstraints;
-(void)clearSequence;
-(void)deleteConstraints;
-(void)deleteNumberOfRequestsReviewed;
-(void)deleteNumberOfUniqueRequestsReviewed;
-(void)deleteOriginalRequestId;
-(void)deletePatternId;
-(void)deleteSequence;
-(void)writeTo:(id)arg0 ;


@end


#endif