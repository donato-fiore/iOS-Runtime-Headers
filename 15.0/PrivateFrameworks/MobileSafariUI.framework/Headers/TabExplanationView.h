// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TABEXPLANATIONVIEW_H
#define TABEXPLANATIONVIEW_H

@class UIView, UILabel, NSLayoutConstraint, NSArray;



@interface TabExplanationView : UIView {
    UIView *_labelsContainer;
    UILabel *_title;
    UILabel *_message;
    NSLayoutConstraint *_spaceBetweenTitleAndMessageConstraint;
    NSArray *_defaultHorizontalPaddingConstraints;
    NSArray *_accessibilityHorizontalPaddingConstraints;
}


@property (readonly, nonatomic) CGRect labelsContainerFrame;
@property (readonly, nonatomic) NSUInteger variant; // ivar: _variant


-(id)_basicLabel;
-(id)initWithVariant:(NSUInteger)arg0 query:(id)arg1 ;
-(void)_updateLabelBlendMode;
-(void)setQuery:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateConstraints;


@end


#endif