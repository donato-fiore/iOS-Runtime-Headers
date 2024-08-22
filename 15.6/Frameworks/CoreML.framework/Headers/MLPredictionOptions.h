// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MLPREDICTIONOPTIONS_H
#define MLPREDICTIONOPTIONS_H

@class NSDictionary;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MLPredictionOptions : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) BOOL _enablePixelBufferDirectBinding;
@property (copy, nonatomic) NSDictionary *automaticOutputBackingMode; // ivar: _automaticOutputBackingMode
@property NSUInteger classifyTopK; // ivar: _classifyTopK
@property (nonatomic) BOOL enablePixelBufferDirectBinding; // ivar: _enablePixelBufferDirectBinding
@property NSUInteger maxComputationBatchSize; // ivar: _maxComputationBatchSize
@property (copy, nonatomic) NSDictionary *outputBackings; // ivar: _outputBackings
@property (readonly, nonatomic) BOOL predictionUsesCPU;
@property (nonatomic) BOOL usesCPUOnly; // ivar: _usesCPUOnly


+(BOOL)supportsSecureCoding;
+(id)defaultOptions;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUsesCPUOnly:(BOOL)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif