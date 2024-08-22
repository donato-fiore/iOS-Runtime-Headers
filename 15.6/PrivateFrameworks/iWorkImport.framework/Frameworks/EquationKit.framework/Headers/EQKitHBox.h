// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EQKITHBOX_H
#define EQKITHBOX_H



#import "EQKitCompoundBox.h"

@interface EQKitHBox : EQKitCompoundBox



-(BOOL)appendOpticalAlignToSpec:(*void)arg0 offset:(struct CGPoint )arg1 ;
-(BOOL)p_getTransform:(struct CGAffineTransform *)arg0 fromDescendant:(id)arg1 ;
-(struct CGRect )p_cacheErasableBounds;
-(void)p_cacheDimensionsForHeight:(*CGFloat)arg0 depth:(*CGFloat)arg1 width:(*CGFloat)arg2 ;
-(void)renderIntoContext:(struct CGContext *)arg0 offset:(struct CGPoint )arg1 ;


@end


#endif