// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCPMAMLFEATUREPROVIDER_H
#define VCPMAMLFEATUREPROVIDER_H

@class NSString, NSSet;
@protocol MLFeatureProvider;

#import <Foundation/Foundation.h>


@interface VCPMAMLFeatureProvider : NSObject <MLFeatureProvider>

 {
    NSString *_featureName;
    *__CVBuffer _buffer;
}


@property (readonly, nonatomic) NSSet *featureNames;


+(id)featureProviderWithCVPixelBuffer:(struct __CVBuffer *)arg0 andFeatureName:(id)arg1 ;
-(id)featureValueForName:(id)arg0 ;
-(id)init;
-(id)initWithCVPixelBuffer:(struct __CVBuffer *)arg0 andFeatureName:(id)arg1 ;
-(void)dealloc;


@end


#endif