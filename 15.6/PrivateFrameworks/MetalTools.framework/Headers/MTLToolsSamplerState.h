// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTLTOOLSSAMPLERSTATE_H
#define MTLTOOLSSAMPLERSTATE_H

@class NSString;
@protocol MTLSamplerState, MTLSamplerStateSPI, MTLDevice;


#import "MTLToolsObject.h"

@interface MTLToolsSamplerState : MTLToolsObject <MTLSamplerState, MTLSamplerStateSPI>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSObject<MTLDevice> *device;
@property (readonly, nonatomic) NSUInteger gpuAddress;
@property (readonly) NSUInteger hash;
@property (readonly) NSString *label;
@property (readonly, nonatomic) NSUInteger pixelFormat;
@property (readonly, nonatomic) NSUInteger resourceIndex;
@property (readonly) Class superclass;
@property (readonly) NSUInteger uniqueIdentifier;


-(id)initWithSamplerState:(id)arg0 descriptor:(id)arg1 device:(id)arg2 ;
-(void)dealloc;


@end


#endif