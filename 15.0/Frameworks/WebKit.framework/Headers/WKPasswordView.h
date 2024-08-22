// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WKPASSWORDVIEW_H
#define WKPASSWORDVIEW_H

@class UIView, NSString;
@protocol UIDocumentPasswordViewDelegate;



@interface WKPasswordView : UIView <UIDocumentPasswordViewDelegate>

 {
    RetainPtr<NSString> _documentName;
    RetainPtr<UIScrollView> _scrollView;
    RetainPtr<UIDocumentPasswordView> _passwordView;
    CGFloat _savedMinimumZoomScale;
    CGFloat _savedMaximumZoomScale;
    CGFloat _savedZoomScale;
    CGSize _savedContentSize;
    RetainPtr<UIColor> _savedBackgroundColor;
}


@property (readonly, nonatomic) NSString *documentName;
@property (copy, nonatomic) id *userDidEnterPassword; // ivar: _userDidEnterPassword


-(id)initWithFrame:(struct CGRect )arg0 documentName:(id)arg1 ;
-(void)_keyboardDidShow:(id)arg0 ;
-(void)dealloc;
-(void)didBeginEditingPassword:(id)arg0 inView:(id)arg1 ;
-(void)didEndEditingPassword:(id)arg0 inView:(id)arg1 ;
-(void)hide;
-(void)layoutSubviews;
-(void)showInScrollView:(id)arg0 ;
-(void)showPasswordFailureAlert;
-(void)userDidEnterPassword:(id)arg0 forPasswordView:(id)arg1 ;


@end


#endif