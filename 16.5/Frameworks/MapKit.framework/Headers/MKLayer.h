// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKLAYER_H
#define MKLAYER_H

@class CALayer;



@interface MKLayer : CALayer

@property (readonly, nonatomic) CGRect hitBounds; // ivar: _hitBounds
@property (nonatomic) CGPoint hitOffset; // ivar: _hitOffset
@property (nonatomic) CGPoint hitOutset; // ivar: _hitOutset


-(BOOL)containsPoint:(struct CGPoint )arg0 ;
-(void)setBounds:(struct CGRect )arg0 ;


@end


#endif