// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SGQUICKRESPONSESTRANSFORMERINSTANCE_H
#define SGQUICKRESPONSESTRANSFORMERINSTANCE_H

@protocol PMLTransformerProtocol;

#import <Foundation/Foundation.h>

#import "SGQuickResponsesConfig.h"
#import "SGModelSampler.h"
#import "SGModelSource.h"

@interface SGQuickResponsesTransformerInstance : NSObject

@property (readonly, nonatomic) SGQuickResponsesConfig *config; // ivar: _config
@property (readonly, nonatomic) NSObject<PMLTransformerProtocol> *featurizer; // ivar: _featurizer
@property (readonly, nonatomic) NSObject<PMLTransformerProtocol> *labeler; // ivar: _labeler
@property (readonly, nonatomic) SGModelSampler *sampler; // ivar: _sampler
@property (readonly, nonatomic) SGModelSource *source; // ivar: _source


-(id)initWithConfig:(id)arg0 featurizer:(id)arg1 source:(id)arg2 labeler:(id)arg3 sampler:(id)arg4 ;


@end


#endif