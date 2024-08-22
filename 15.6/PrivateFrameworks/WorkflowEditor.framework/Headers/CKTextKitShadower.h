// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKTEXTKITSHADOWER_H
#define CKTEXTKITSHADOWER_H

@class UIColor;

#import <Foundation/Foundation.h>


@interface CKTextKitShadower : NSObject {
    UIEdgeInsets _calculatedShadowPadding;
}


@property (readonly, nonatomic) UIColor *shadowColor; // ivar: _shadowColor
@property (readonly, nonatomic) CGSize shadowOffset; // ivar: _shadowOffset
@property (readonly, nonatomic) CGFloat shadowOpacity; // ivar: _shadowOpacity
@property (readonly, nonatomic) CGFloat shadowRadius; // ivar: _shadowRadius


-(BOOL)_shouldDrawShadow;
-(id)initWithShadowOffset:(struct CGSize )arg0 shadowColor:(id)arg1 shadowOpacity:(CGFloat)arg2 shadowRadius:(CGFloat)arg3 ;
-(struct CGPoint )offsetPointWithExternalPoint:(struct CGPoint )arg0 ;
-(struct CGPoint )offsetPointWithInternalPoint:(struct CGPoint )arg0 ;
-(struct CGRect )insetRectWithConstrainedRect:(struct CGRect )arg0 ;
-(struct CGRect )offsetRectWithInternalRect:(struct CGRect )arg0 ;
-(struct CGRect )outsetRectWithInsetRect:(struct CGRect )arg0 ;
-(struct CGSize )insetSizeWithConstrainedSize:(struct CGSize )arg0 ;
-(struct CGSize )outsetSizeWithInsetSize:(struct CGSize )arg0 ;
-(struct UIEdgeInsets )shadowPadding;
-(void)setShadowInContext:(struct CGContext *)arg0 ;


@end


#endif