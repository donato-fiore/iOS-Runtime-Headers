// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PAEMIRROR_H
#define PAEMIRROR_H



#import "PAEFilterDefaultBase.h"

@interface PAEMirror : PAEFilterDefaultBase



-(BOOL)addParameters;
-(BOOL)canThrowRenderOutput:(id)arg0 withInput:(id)arg1 withInfo:(struct ? )arg2 ;
-(BOOL)frameSetup:(struct ? )arg0 inputInfo:(struct ? )arg1 hardware:(*BOOL)arg2 software:(*BOOL)arg3 ;
-(id)initWithAPIManager:(id)arg0 ;
-(id)properties;
-(void)getEdgeMode:(*unsigned int)arg0 withInfo:(struct ? )arg1 ;
-(void)handleUIEventWithPosition:(struct CGPoint )arg0 velocity:(struct CGPoint )arg1 scale:(CGFloat)arg2 scaleVelocity:(CGFloat)arg3 rotation:(CGFloat)arg4 rotationVelocity:(CGFloat)arg5 ;


@end


#endif