// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GRRSCHEMAGRRFEATUREEXTRACTED_H
#define GRRSCHEMAGRRFEATUREEXTRACTED_H

@class NSArray, NSData;


#import "SISchemaInstrumentationMessage.h"
#import "GRRSchemaGRRSource.h"

@interface GRRSchemaGRRFeatureExtracted : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *featureNames; // ivar: _featureNames
@property (copy, nonatomic) NSArray *features; // ivar: _features
@property (nonatomic) BOOL hasSource; // ivar: _hasSource
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) GRRSchemaGRRSource *source; // ivar: _source


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)featureNamesAtIndex:(NSUInteger)arg0 ;
-(id)featuresAtIndex:(NSUInteger)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)addFeatureNames:(id)arg0 ;
-(void)addFeatures:(id)arg0 ;
-(void)clearFeatureNames;
-(void)clearFeatures;
-(void)writeTo:(id)arg0 ;


@end


#endif