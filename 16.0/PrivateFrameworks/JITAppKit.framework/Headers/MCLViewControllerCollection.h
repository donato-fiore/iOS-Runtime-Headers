// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MCLVIEWCONTROLLERCOLLECTION_H
#define MCLVIEWCONTROLLERCOLLECTION_H

@class UIScrollView, UIStackView, NSLayoutConstraint, NSString, UIViewController, NSArray;
@protocol UIScrollViewDelegate;



@interface MCLViewControllerCollection : UIScrollView <UIScrollViewDelegate>

 {
    UIStackView *_contentView;
    NSLayoutConstraint *_widthConstraint;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) UIViewController *owner; // ivar: _owner
@property (nonatomic) CGFloat spacing;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *views; // ivar: _views


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;


@end


#endif