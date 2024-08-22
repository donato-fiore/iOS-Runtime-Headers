// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MUSTACKVIEW_H
#define MUSTACKVIEW_H

@class UIView, UIStackView, NSArray;



@interface MUStackView : UIView {
    UIStackView *_stackView;
}


@property (nonatomic) NSInteger alignment;
@property (readonly, copy, nonatomic) NSArray *arrangedSubviews;
@property (nonatomic) NSInteger axis;
@property (nonatomic) UIEdgeInsets contentEdgeInsets;
@property (nonatomic) NSInteger distribution;
@property (nonatomic) CGFloat spacing;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )systemLayoutSizeFittingSize:(struct CGSize )arg0 ;
-(struct CGSize )systemLayoutSizeFittingSize:(struct CGSize )arg0 withHorizontalFittingPriority:(float)arg1 verticalFittingPriority:(float)arg2 ;
-(void)_setupStackView;
-(void)addArrangedSubview:(id)arg0 ;
-(void)addArrangedSubview:(id)arg0 withCustomSpacing:(CGFloat)arg1 ;
-(void)insertArrangedSubview:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)invalidateIntrinsicContentSize;
-(void)removeArrangedSubview:(id)arg0 ;
-(void)setCustomSpacing:(CGFloat)arg0 afterView:(id)arg1 ;


@end


#endif