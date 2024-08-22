// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MTLSAMPLERSTATE_H
#define _MTLSAMPLERSTATE_H

@class NSString;
@protocol MTLSamplerStateSPI, MTLDevice;

#import <Foundation/Foundation.h>


@interface _MTLSamplerState : NSObject <MTLSamplerStateSPI>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSObject<MTLDevice> *device; // ivar: _device
@property (readonly, nonatomic) NSUInteger gpuAddress; // ivar: _gpuAddress
@property (readonly) NSUInteger hash;
@property (readonly) NSString *label; // ivar: _label
@property (readonly, nonatomic) NSUInteger pixelFormat; // ivar: _pixelFormat
@property (readonly, nonatomic) NSUInteger resourceIndex; // ivar: _resourceIndex
@property (readonly) Class superclass;
@property (readonly) NSUInteger uniqueIdentifier;


-(id)formattedDescription:(NSUInteger)arg0 ;
-(id)initWithDevice:(id)arg0 samplerDescriptor:(id)arg1 ;
-(void)dealloc;


@end


#endif