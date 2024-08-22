// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EQKITVSHIFT_H
#define EQKITVSHIFT_H



#import "EQKitBox.h"

@interface EQKitVShift : EQKitBox

@property (readonly, nonatomic) EQKitBox *box; // ivar: mBox
@property (readonly, nonatomic) CGFloat offset; // ivar: mOffset


-(BOOL)appendOpticalAlignToSpec:(*void)arg0 offset:(struct CGPoint )arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)p_getTransform:(struct CGAffineTransform *)arg0 fromDescendant:(id)arg1 ;
-(CGFloat)depth;
-(CGFloat)height;
-(CGFloat)width;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithBox:(id)arg0 offset:(CGFloat)arg1 ;
-(struct CGRect )erasableBounds;
-(void)dealloc;
-(void)renderIntoContext:(struct CGContext *)arg0 offset:(struct CGPoint )arg1 ;


@end


#endif