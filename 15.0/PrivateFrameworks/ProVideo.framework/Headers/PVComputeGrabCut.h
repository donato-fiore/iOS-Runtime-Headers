// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PVCOMPUTEGRABCUT_H
#define PVCOMPUTEGRABCUT_H


#import <Foundation/Foundation.h>


@interface PVComputeGrabCut : NSObject {
    *HFGrabCutInterface _module;
}




-(BOOL)processImage:(id)arg0 trimap:(id)arg1 roi:(struct CGRect )arg2 clusters:(int)arg3 gamma:(float)arg4 iterations:(int)arg5 mask:(id)arg6 ;
-(id)init;
-(void)dealloc;
-(void)reset;


@end


#endif