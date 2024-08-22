// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EDABSOLUTEANCHOR_H
#define EDABSOLUTEANCHOR_H



#import "EDAnchor.h"

@interface EDAbsoluteAnchor : EDAnchor {
    CGPoint mPosition;
    CGSize mSize;
}




-(struct CGPoint )position;
-(struct CGRect )bounds;
-(struct CGSize )size;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setPosition:(struct CGPoint )arg0 ;
-(void)setSize:(struct CGSize )arg0 ;


@end


#endif