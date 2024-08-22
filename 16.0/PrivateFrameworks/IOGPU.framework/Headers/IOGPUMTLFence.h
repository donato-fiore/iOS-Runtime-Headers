// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IOGPUMTLFENCE_H
#define IOGPUMTLFENCE_H


#import <Foundation/Foundation.h>


@interface IOGPUMTLFence : NSObject {
    *__IOGPUDevice _deviceRef;
    unsigned int _fenceName;
}




-(id)initWithDevice:(struct __IOGPUDevice *)arg0 ;
-(void)dealloc;


@end


#endif