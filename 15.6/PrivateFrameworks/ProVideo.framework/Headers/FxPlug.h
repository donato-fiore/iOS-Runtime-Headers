// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FXPLUG_H
#define FXPLUG_H

@protocol FxPinCreation, FxStreamProviding;

#import <Foundation/Foundation.h>


@interface FxPlug : NSObject <FxPinCreation, FxStreamProviding>

 {
    *FxPlugPriv _priv;
}




+(id)fxPlugWithDescriptor:(id)arg0 andHost:(id)arg1 ;
+(id)pinInPinList:(id)arg0 withUUID:(id)arg1 ;
+(unsigned int)leastCommonMultipleOfA:(unsigned int)arg0 andB:(unsigned int)arg1 ;
-(BOOL)isContextTypeSupported:(int)arg0 bySample:(id)arg1 ;
-(BOOL)isSamplePredetermined:(id)arg0 ;
-(BOOL)isStreamPremultiplied:(id)arg0 ;
-(BOOL)renderImageOutputAtTime:(CGFloat)arg0 withOptions:(id)arg1 inFxContext:(id)arg2 inRegionOfInterest:(id)arg3 ;
-(CGFloat)durationForStream:(id)arg0 ;
-(CGFloat)frameDurationForStream:(id)arg0 ;
-(CGFloat)pixelAspectForStream:(id)arg0 ;
-(CGFloat)startTimeForStream:(id)arg0 ;
-(Class)canvasControlClass;
-(NSUInteger)fieldOrderForSample:(id)arg0 ;
-(id)createInputPinArray;
-(id)createOutputPinArray;
-(id)descriptor;
-(id)domainOfDefinitionForSample:(id)arg0 ;
-(id)evaluateSample:(id)arg0 withOptions:(id)arg1 ;
-(id)filterImageInputPin;
-(id)host;
-(id)imageOutputPin;
-(id)initWithDescriptor:(id)arg0 andHost:(id)arg1 ;
-(id)inputPinWithUUID:(id)arg0 ;
-(id)inputPins;
-(id)outputPinWithUUID:(id)arg0 ;
-(id)outputPins;
-(id)requiredSamplesForSample:(id)arg0 ;
-(id)transitionImageAInputPin;
-(id)transitionImageBInputPin;
-(unsigned int)timeScaleForStream:(id)arg0 ;
-(void)dealloc;
-(void)setCanvasControlClass:(Class)arg0 ;
-(void)valueChangedForPin:(id)arg0 ;


@end


#endif