// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ORCHSCHEMAORCHSERVERFALLBACKINITIATED_H
#define ORCHSCHEMAORCHSERVERFALLBACKINITIATED_H

@class NSData, NSArray;


#import "SISchemaInstrumentationMessage.h"

@interface ORCHSchemaORCHServerFallbackInitiated : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) int fallbackReason; // ivar: _fallbackReason
@property (nonatomic) BOOL hasFallbackReason;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSArray *missingAssets; // ivar: _missingAssets


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)missingAssetCount;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(int)missingAssetAtIndex:(NSUInteger)arg0 ;
-(void)addMissingAsset:(int)arg0 ;
-(void)clearMissingAsset;
-(void)writeTo:(id)arg0 ;


@end


#endif