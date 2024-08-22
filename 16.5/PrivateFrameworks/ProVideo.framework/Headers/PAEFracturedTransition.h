// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PAEFRACTUREDTRANSITION_H
#define PAEFRACTUREDTRANSITION_H

@class NSLock;


#import "PAETransitionDefaultBase.h"

@interface PAEFracturedTransition : PAETransitionDefaultBase {
    *FracturedParams _fxParams;
    vector<FracturedUtils::FracturedFXPoolItem *, std::allocator<FracturedUtils::FracturedFXPoolItem *>> _fxPool;
    NSLock *_fxPoolLock;
}




-(BOOL)addParameters;
-(BOOL)canThrowRenderOutput:(id)arg0 withInputA:(id)arg1 withInputB:(id)arg2 withTimeFraction:(float)arg3 withInfo:(struct ? )arg4 ;
-(BOOL)frameSetup:(struct ? )arg0 inputInfoA:(struct ? )arg1 inputInfoB:(struct ? )arg2 timeFraction:(float)arg3 hardware:(*BOOL)arg4 software:(*BOOL)arg5 ;
-(id)initWithAPIManager:(id)arg0 ;
-(id)properties;
-(void)dealloc;


@end


#endif