// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UPPLNERREQUEST_H
#define UPPLNERREQUEST_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "UPPLEmbeddingTensor.h"
#import "UPPLTokenization.h"

@interface UPPLNerRequest : NSObject

@property (readonly, nonatomic) UPPLEmbeddingTensor *embeddings; // ivar: _embeddings
@property (readonly, nonatomic) NSArray *matchedSpans; // ivar: _matchedSpans
@property (readonly, nonatomic) UPPLTokenization *tokenizedUtterance; // ivar: _tokenizedUtterance


-(id)dictionaryRepresentation;
-(id)initWithTokenizedUtterance:(id)arg0 embeddings:(id)arg1 matchedSpans:(id)arg2 ;


@end


#endif