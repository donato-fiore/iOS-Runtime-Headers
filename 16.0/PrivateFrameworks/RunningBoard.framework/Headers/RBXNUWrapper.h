// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RBXNUWRAPPER_H
#define RBXNUWRAPPER_H


#import <Foundation/Foundation.h>


@interface RBXNUWrapper : NSObject {
    *__IOGPUDevice _gpuDevice;
}




+(id)sharedWrapper;
-(id)init;
-(void)setGPURole:(unsigned char)arg0 forPid:(int)arg1 ;


@end


#endif