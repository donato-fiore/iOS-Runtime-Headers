// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CIMETALCONVERTER_H
#define CIMETALCONVERTER_H

@protocol MTLDevice, MTLFunction;

#import <Foundation/Foundation.h>


@interface CIMetalConverter : NSObject {
    id<MTLDevice> *_device;
    id<MTLFunction> *_convertToTexture;
    id<MTLFunction> *_convertToBuffer;
}




-(id)initWithDevice:(id)arg0 kernelName:(id)arg1 ;
-(void)dealloc;
-(void)encodeToCommandBuffer:(id)arg0 sourceBuffer:(id)arg1 sourceRowBytes:(NSUInteger)arg2 destinationBuffer:(id)arg3 destinationRowBytes:(NSUInteger)arg4 destinationSize:(struct ? )arg5 ;
-(void)encodeToCommandBuffer:(id)arg0 sourceBuffer:(id)arg1 sourceRowBytes:(NSUInteger)arg2 destinationTexture:(id)arg3 ;


@end


#endif