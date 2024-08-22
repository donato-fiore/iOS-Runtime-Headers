// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NUJSRAWIMAGEPROPERTIES_H
#define NUJSRAWIMAGEPROPERTIES_H

@class NSString;
@protocol NUJSRAWImagePropertiesExport, NURAWImageProperties;


#import "NUJSProxy.h"
#import "NUJSRAWNoiseReductionProperties.h"

@interface NUJSRAWImageProperties : NUJSProxy <NUJSRAWImagePropertiesExport>



@property (readonly) NSString *decoderVersion;
@property (readonly) NUJSRAWNoiseReductionProperties *noiseReductionProperties;
@property (readonly) NSObject<NURAWImageProperties> *rawImageProperties;
@property (readonly) CGFloat temperature;
@property (readonly) CGFloat tint;


-(id)initWithRAWImageProperties:(id)arg0 context:(id)arg1 ;
-(id)initWithRepresentedObject:(id)arg0 context:(id)arg1 ;


@end


#endif