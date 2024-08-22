// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PAEPOKE_H
#define PAEPOKE_H



#import "PAEFilterDefaultBase.h"

@interface PAEPoke : PAEFilterDefaultBase



-(BOOL)addParameters;
-(BOOL)canThrowRenderOutput:(id)arg0 withInput:(id)arg1 withInfo:(struct ? )arg2 ;
-(BOOL)frameSetup:(struct ? )arg0 inputInfo:(struct ? )arg1 hardware:(*BOOL)arg2 software:(*BOOL)arg3 ;
-(id)initWithAPIManager:(id)arg0 ;
-(id)properties;
-(void)handleUIEventWithPosition:(struct CGPoint )arg0 velocity:(struct CGPoint )arg1 scale:(CGFloat)arg2 scaleVelocity:(CGFloat)arg3 rotation:(CGFloat)arg4 rotationVelocity:(CGFloat)arg5 ;


@end


#endif