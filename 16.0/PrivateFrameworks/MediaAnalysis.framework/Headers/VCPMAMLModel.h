// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCPMAMLMODEL_H
#define VCPMAMLMODEL_H

@class NSString, MLModel;

#import <Foundation/Foundation.h>


@interface VCPMAMLModel : NSObject

@property (readonly, nonatomic) NSString *inputFeatureName; // ivar: _inputFeatureName
@property (readonly, nonatomic) unsigned int inputPixelFormat; // ivar: _inputPixelFormat
@property (readonly, nonatomic) NSInteger inputSize; // ivar: _inputSize
@property (readonly, nonatomic) MLModel *model; // ivar: _model
@property (readonly, nonatomic) NSString *outputFeatureName; // ivar: _outputFeatureName


+(id)vcp_sharedModelWithModelName:(id)arg0 ;
-(id)init;
-(id)initWithModelName:(id)arg0 ;


@end


#endif