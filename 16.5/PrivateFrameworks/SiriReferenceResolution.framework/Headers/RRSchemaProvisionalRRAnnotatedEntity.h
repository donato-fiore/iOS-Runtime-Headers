// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RRSCHEMAPROVISIONALRRANNOTATEDENTITY_H
#define RRSCHEMAPROVISIONALRRANNOTATEDENTITY_H

@class SISchemaInstrumentationMessage, NSArray, NSData, NSString, USOSchemaUSOGraph;


#import "RRSchemaProvisionalRRGroupIdentifier.h"

@interface RRSchemaProvisionalRRAnnotatedEntity : SISchemaInstrumentationMessage {
    ? _has;
}


@property (copy, nonatomic) NSArray *annotations; // ivar: _annotations
@property (retain, nonatomic) RRSchemaProvisionalRRGroupIdentifier *group; // ivar: _group
@property (nonatomic) BOOL hasGroup; // ivar: _hasGroup
@property (nonatomic) BOOL hasHasReference;
@property (nonatomic) BOOL hasReference; // ivar: _hasReference
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
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)addAnnotations:(id)arg0 ;
-(void)clearAnnotations;
-(void)writeTo:(id)arg0 ;


@end


#endif