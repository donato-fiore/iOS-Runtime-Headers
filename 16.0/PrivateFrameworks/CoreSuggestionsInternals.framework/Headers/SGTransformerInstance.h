// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SGTRANSFORMERINSTANCE_H
#define SGTRANSFORMERINSTANCE_H

@class PMLSessionDescriptor;
@protocol PMLTransformerProtocol;

#import <Foundation/Foundation.h>


@interface SGTransformerInstance : NSObject

@property (retain, nonatomic) Class modelClass; // ivar: _modelClass
@property (retain, nonatomic) PMLSessionDescriptor *sessionDescriptor; // ivar: _sessionDescriptor
@property (retain, nonatomic) NSObject<PMLTransformerProtocol> *transformer; // ivar: _transformer


+(id)defaultSessionDescriptorForModelId:(id)arg0 featureVersion:(id)arg1 language:(id)arg2 windowAndNgrams:(id)arg3 ;
+(id)defaultWindowAndNgrams;
-(id)initWithTransformer:(id)arg0 sessionDescriptor:(id)arg1 modelClass:(Class)arg2 ;
-(id)trainingFeaturesOf:(id)arg0 ;


@end


#endif