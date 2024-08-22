// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKCOMPOSERECIPIENTVIEW_H
#define CKCOMPOSERECIPIENTVIEW_H

@class CNComposeRecipientTextView, UIView;
@protocol CKComposeRecipientViewDelegate;



@interface CKComposeRecipientView : CNComposeRecipientTextView

@property (retain, nonatomic) UIView *backgroundPlatterView; // ivar: _backgroundPlatterView
@property (weak, nonatomic) NSObject<CKComposeRecipientViewDelegate> *layoutDelegate; // ivar: layoutDelegate
@property (nonatomic) BOOL showsBackgroundPlatterView; // ivar: _showsBackgroundPlatterView


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct UIEdgeInsets )layoutMargins;
-(struct UIEdgeInsets )safeAreaInsets;
-(void)_updateBackgroundPlatterViewIfNecessary;
-(void)atomTextViewDidBecomeFirstResponder:(id)arg0 ;
-(void)layoutSubviews;
-(void)reset;
-(void)setFrame:(struct CGRect )arg0 ;


@end


#endif