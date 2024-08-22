// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UPPLEMBEDDINGTENSOR_H
#define UPPLEMBEDDINGTENSOR_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface UPPLEmbeddingTensor : NSObject

@property (readonly, nonatomic) NSString *embedderId; // ivar: _embedderId
@property (readonly, nonatomic) NSUInteger embeddingDim; // ivar: _embeddingDim
@property (readonly, nonatomic) NSUInteger numLayers; // ivar: _numLayers
@property (readonly, nonatomic) NSUInteger numTokens; // ivar: _numTokens
@property (readonly, nonatomic) NSArray *values; // ivar: _values


-(id)dictionaryRepresentation;
-(id)initWithValues:(id)arg0 withNumTokens:(NSUInteger)arg1 withNumLayers:(NSUInteger)arg2 withEmbeddingDim:(NSUInteger)arg3 withEmbedderId:(id)arg4 ;


@end


#endif