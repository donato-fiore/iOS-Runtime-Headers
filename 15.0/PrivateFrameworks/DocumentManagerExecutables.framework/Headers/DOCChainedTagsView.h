// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DOCCHAINEDTAGSVIEW_H
#define DOCCHAINEDTAGSVIEW_H

@class UIView, NSArray;


#import "DOCTagRenderingRequest.h"

@interface DOCChainedTagsView : UIView

@property (nonatomic) CGPoint alignmentOffset; // ivar: _alignmentOffset
@property (nonatomic) CGFloat knockOutBorderWidth; // ivar: _knockOutBorderWidth
@property (retain, nonatomic) DOCTagRenderingRequest *renderingRequest; // ivar: _renderingRequest
@property (nonatomic) NSUInteger spacing; // ivar: _spacing
@property (nonatomic) CGFloat tagDimension; // ivar: _tagDimension
@property (retain, nonatomic) NSArray *tags; // ivar: _tags


-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct CGSize )systemLayoutSizeFittingSize:(struct CGSize )arg0 ;
-(void)_commonInit;
-(void)_reloadRenderingRequest;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)setknockOutBorderWidth:(CGFloat)arg0 ;
-(void)sizeToFit;


@end


#endif