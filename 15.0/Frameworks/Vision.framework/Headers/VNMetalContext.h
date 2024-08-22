// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VNMETALCONTEXT_H
#define VNMETALCONTEXT_H

@class NSDictionary;
@protocol MTLDevice;

#import <Foundation/Foundation.h>


@interface VNMetalContext : NSObject

@property (readonly) NSObject<MTLDevice> *metalDevice; // ivar: _metalDevice
@property (readonly) BOOL useGPU; // ivar: _useGPU
@property (readonly) NSDictionary *wisdomParams; // ivar: _wisdomParams


-(id)initWithMetalDevice:(id)arg0 ;


@end


#endif