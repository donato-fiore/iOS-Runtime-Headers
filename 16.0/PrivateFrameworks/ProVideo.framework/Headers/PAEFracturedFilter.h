// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PAEFRACTUREDFILTER_H
#define PAEFRACTUREDFILTER_H

@class NSLock;


#import "PAEFilterDefaultBase.h"

@interface PAEFracturedFilter : PAEFilterDefaultBase {
    *FracturedParams _fxParams;
    vector<FracturedUtils::FracturedFXPoolItem *, std::allocator<FracturedUtils::FracturedFXPoolItem *>> _fxPool;
    NSLock *_fxPoolLock;
}




-(BOOL)addParameters;
-(BOOL)canThrowRenderOutput:(id)arg0 withInput:(id)arg1 withInfo:(struct ? )arg2 ;
-(BOOL)getOutputWidth:(*NSUInteger)arg0 height:(*NSUInteger)arg1 withInput:(struct ? )arg2 withInfo:(struct ? )arg3 ;
-(BOOL)variesByDuration;
-(BOOL)variesOverTime;
-(id)initWithAPIManager:(id)arg0 ;
-(id)properties;
-(void)dealloc;
-(void)onVTBUserInteractionEventNotification:(id)arg0 ;


@end


#endif