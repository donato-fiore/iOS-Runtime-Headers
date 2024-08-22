// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MLMODELCONFIGURATION_H
#define MLMODELCONFIGURATION_H

@class NSString, NSDictionary, NSURL;
@protocol NSCopying, NSSecureCoding, MTLDevice;

#import <Foundation/Foundation.h>


@interface MLModelConfiguration : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) BOOL allowBackgroundGPUCompute;
@property BOOL allowBackgroundGPUComputeSetting; // ivar: _allowBackgroundGPUComputeSetting
@property (nonatomic) BOOL allowFloat16AccumulationOnGPU;
@property BOOL allowLowPrecisionAccumulationOnGPU; // ivar: _allowLowPrecisionAccumulationOnGPU
@property (nonatomic) BOOL allowsInstrumentation; // ivar: _allowsInstrumentation
@property NSInteger computeUnits; // ivar: _computeUnits
@property (nonatomic) BOOL enableTestVectorMode; // ivar: _enableTestVectorMode
@property (copy) NSString *modelDisplayName; // ivar: _modelDisplayName
@property (retain) NSDictionary *parameters; // ivar: _parameters
@property (retain, nonatomic) NSString *parentModelName; // ivar: _parentModelName
@property (retain, nonatomic) NSObject<MTLDevice> *preferredMTLDevice;
@property (retain, nonatomic) NSObject<MTLDevice> *preferredMetalDevice; // ivar: _preferredMetalDevice
@property (nonatomic) NSInteger profilingOptions; // ivar: _profilingOptions
@property (retain) NSURL *rootModelURL; // ivar: _rootModelURL
@property BOOL trainWithMLCompute; // ivar: _trainWithMLCompute
@property (nonatomic) BOOL usePreloadedKey; // ivar: _usePreloadedKey
@property (nonatomic) BOOL useWatchSPIForScribble; // ivar: _useWatchSPIForScribble


+(BOOL)supportsSecureCoding;
+(id)defaultConfiguration;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToModelConfiguration:(id)arg0 ;
-(NSUInteger)hash;
-(id)computeUnitsToString:(NSInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithComputeUnits:(NSInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif