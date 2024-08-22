// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUSTROKEEDGESIMAGEMODIFIER_H
#define SUSTROKEEDGESIMAGEMODIFIER_H

@class UIColor;


#import "SUImageModifier.h"

@interface SUStrokeEdgesImageModifier : SUImageModifier

@property (nonatomic) UIEdgeInsets edgeInsets; // ivar: _edgeInsets
@property (nonatomic) BOOL fitToImage; // ivar: _fitToImage
@property (retain, nonatomic) UIColor *strokeColor; // ivar: _strokeColor
@property (nonatomic) BOOL strokeCurrentPath; // ivar: _strokeCurrentPath


-(BOOL)isEqual:(id)arg0 ;
-(void)dealloc;
-(void)drawAfterImageForContext:(struct CGContext *)arg0 imageFrame:(struct CGRect )arg1 finalSize:(struct CGSize )arg2 ;


@end


#endif