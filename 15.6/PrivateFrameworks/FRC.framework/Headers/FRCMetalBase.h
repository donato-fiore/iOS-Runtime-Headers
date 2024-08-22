// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FRCMETALBASE_H
#define FRCMETALBASE_H

@protocol MTLLibrary, MTLDevice, MTLCommandQueue;

#import <Foundation/Foundation.h>


@interface FRCMetalBase : NSObject {
    id<MTLLibrary> *_mtlLibrary;
    id<MTLDevice> *_device;
    id<MTLCommandQueue> *_commandQueue;
}




-(id)createKernel:(id)arg0 ;
-(id)createKernel:(id)arg0 constantValues:(id)arg1 ;
-(id)init;
-(id)initWithDevice:(id)arg0 commmandQueue:(id)arg1 ;


@end


#endif