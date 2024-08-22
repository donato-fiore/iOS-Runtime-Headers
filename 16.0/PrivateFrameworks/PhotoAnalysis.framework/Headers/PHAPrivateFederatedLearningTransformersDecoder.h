// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHAPRIVATEFEDERATEDLEARNINGTRANSFORMERSDECODER_H
#define PHAPRIVATEFEDERATEDLEARNINGTRANSFORMERSDECODER_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface PHAPrivateFederatedLearningTransformersDecoder : NSObject

@property (readonly, nonatomic) NSDictionary *transformerNameToClass; // ivar: _transformerNameToClass


-(BOOL)_generateError:(*id)arg0 errorCode:(NSInteger)arg1 errorMessage:(id)arg2 ;
-(id)init;
-(id)instanceForTransformerConfig:(id)arg0 error:(*id)arg1 ;
-(id)instancesForTransformerConfigList:(id)arg0 error:(*id)arg1 ;
-(id)transformersForFeatureExtractorsFromDictionary:(id)arg0 error:(*id)arg1 ;


@end


#endif