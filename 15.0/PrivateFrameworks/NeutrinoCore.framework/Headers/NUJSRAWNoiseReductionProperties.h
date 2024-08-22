// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NUJSRAWNOISEREDUCTIONPROPERTIES_H
#define NUJSRAWNOISEREDUCTIONPROPERTIES_H

@protocol NUJSRAWNoiseReductionImagePropertiesExport, NURAWNoiseReductionProperties;


#import "NUJSProxy.h"

@interface NUJSRAWNoiseReductionProperties : NUJSProxy <NUJSRAWNoiseReductionImagePropertiesExport>



@property (readonly) CGFloat color;
@property (readonly) CGFloat luminance;
@property (readonly) NSObject<NURAWNoiseReductionProperties> *rawNoiseReductionProperties;


-(id)initWithRAWNoiseReductionProperties:(id)arg0 context:(id)arg1 ;
-(id)initWithRepresentedObject:(id)arg0 context:(id)arg1 ;


@end


#endif