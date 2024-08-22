// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PSUICARRIERITEMSNOTLOADEDVIEW_H
#define PSUICARRIERITEMSNOTLOADEDVIEW_H

@class UIView, NSString, UILayoutGuide, UITextView, UIButton, UIActivityIndicatorView, UILabel;
@protocol UITextViewDelegate, PSHeaderFooterView;



@interface PSUICarrierItemsNotLoadedView : UIView <UITextViewDelegate, PSHeaderFooterView>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UILayoutGuide *layoutGuide; // ivar: _layoutGuide
@property (retain, nonatomic) UITextView *linkTextView; // ivar: _linkTextView
@property (retain, nonatomic) UIButton *retryButton; // ivar: _retryButton
@property (retain, nonatomic) UIActivityIndicatorView *spinner; // ivar: _spinner
@property (readonly) Class superclass;
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(BOOL)textView:(id)arg0 shouldInteractWithURL:(id)arg1 inRange:(struct _NSRange )arg2 interaction:(NSInteger)arg3 ;
-(CGFloat)preferredHeightForWidth:(CGFloat)arg0 inTableView:(id)arg1 ;
-(id)initWithSpecifier:(id)arg0 ;
-(void)setLinkText:(id)arg0 url:(id)arg1 ;


@end


#endif