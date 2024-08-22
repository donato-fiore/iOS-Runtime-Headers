// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SIRIUIREUSABLEHEADERVIEW_H
#define SIRIUIREUSABLEHEADERVIEW_H

@class UICollectionReusableView, UILabel, UIImageView, NSString, UIButton, UIColor;
@protocol SiriUIReusableView, SiriUISizableHeaderView;


#import "SiriUISnippetViewController.h"

@interface SiriUIReusableHeaderView : UICollectionReusableView <SiriUIReusableView, SiriUISizableHeaderView>

 {
    UILabel *_headerLabel;
    UIEdgeInsets _contentInsets;
    UIImageView *_chevronView;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIButton *headerAreaButton; // ivar: _headerAreaButton
@property (weak, nonatomic) SiriUISnippetViewController *snippetViewController; // ivar: _snippetViewController
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *titleText; // ivar: _titleText
@property (copy, nonatomic) UIColor *titleTextColor; // ivar: _titleTextColor


+(CGFloat)defaultHeight;
+(id)elementKind;
+(id)reuseIdentifier;
-(CGFloat)desiredHeightForWidth:(CGFloat)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_configureHeaderLabelForBounds:(struct CGRect )arg0 ;
-(void)layoutSubviews;


@end


#endif