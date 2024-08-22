// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EMBEDDER_H
#define EMBEDDER_H

@class SNLPEmbedder;

#import <Foundation/Foundation.h>

#import "CDMEmbeddingConfigItem.h"

@interface Embedder : NSObject

@property (readonly, nonatomic) CDMEmbeddingConfigItem *embeddingConfigItem; // ivar: _embeddingConfigItem
@property (readonly, nonatomic) SNLPEmbedder *snlpEmbedder; // ivar: _snlpEmbedder


-(id)initWithSnlpEmbedder:(id)arg0 andEmbeddingConfigItem:(id)arg1 ;


@end


#endif