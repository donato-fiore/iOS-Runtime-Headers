// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKDASHBOARDFOOTERTEXTVIEW_H
#define PKDASHBOARDFOOTERTEXTVIEW_H

@class UITextView, NSString, UIColor;
@protocol UITextViewDelegate;


#import "PKDashboardCollectionViewCell.h"

@interface PKDashboardFooterTextView : PKDashboardCollectionViewCell <UITextViewDelegate>

 {
    BOOL _isTemplateLayout;
    UITextView *_textView;
}


@property (copy, nonatomic) id *action; // ivar: _action
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *footerText; // ivar: _footerText
@property (readonly) NSUInteger hash;
@property (nonatomic) unsigned int horizontalAlignment; // ivar: _horizontalAlignment
@property (nonatomic) _NSRange linkRange; // ivar: _linkRange
@property (retain, nonatomic) UIColor *linkTextColor; // ivar: _linkTextColor
@property (readonly) Class superclass;
@property (nonatomic) BOOL useLargeBottomInset; // ivar: _useLargeBottomInset


+(CGFloat)defaultHorizontalInset;
+(id)defaultBackgroundColor;
-(BOOL)_isLinkRangeValid;
-(BOOL)textView:(id)arg0 shouldInteractWithURL:(id)arg1 inRange:(struct _NSRange )arg2 interaction:(NSInteger)arg3 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )_layoutWithBounds:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_updateText;
-(void)createSubviews;
-(void)layoutSubviews;
-(void)resetFonts;


@end


#endif