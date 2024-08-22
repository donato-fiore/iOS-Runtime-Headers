// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RRSCHEMARRANNOTATEDENTITY_H
#define RRSCHEMARRANNOTATEDENTITY_H

@class NSArray, NSData, NSString;


#import "SISchemaInstrumentationMessage.h"
#import "RRSchemaRRGroupIdentifier.h"
#import "USOSchemaUSOGraph.h"

@interface RRSchemaRRAnnotatedEntity : SISchemaInstrumentationMessage {
    ? _has;
}


@property (copy, nonatomic) NSArray *annotations; // ivar: _annotations
@property (retain, nonatomic) RRSchemaRRGroupIdentifier *group; // ivar: _group
@property (nonatomic) BOOL hasGroup; // ivar: _hasGroup
@property (nonatomic) BOOL hasSaliencyComputedAtTimestampInSeconds;
@property (nonatomic) BOOL hasSaliencyScore;
@property (nonatomic) BOOL hasSwiftClassName; // ivar: _hasSwiftClassName
@property (nonatomic) BOOL hasUsoGraph; // ivar: _hasUsoGraph
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) NSUInteger saliencyComputedAtTimestampInSeconds; // ivar: _saliencyComputedAtTimestampInSeconds
@property (nonatomic) float saliencyScore; // ivar: _saliencyScore
@property (copy, nonatomic) NSString *swiftClassName; // ivar: _swiftClassName
@property (retain, nonatomic) USOSchemaUSOGraph *usoGraph; // ivar: _usoGraph


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)annotationsAtIndex:(NSUInteger)arg0 ;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)addAnnotations:(id)arg0 ;
-(void)clearAnnotations;
-(void)deleteAnnotations;
-(void)deleteGroup;
-(void)deleteSaliencyComputedAtTimestampInSeconds;
-(void)deleteSaliencyScore;
-(void)deleteSwiftClassName;
-(void)deleteUsoGraph;
-(void)writeTo:(id)arg0 ;


@end


#endif