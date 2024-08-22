// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VSONSCREENCODEVIEW_H
#define VSONSCREENCODEVIEW_H

@class UIView, UIStackView, NSString, UIImageView;
@protocol VSOnscreenCodeViewDelegate;


#import "VSOnscreenCodeContentView.h"

@interface VSOnscreenCodeView : UIView <VSOnscreenCodeViewDelegate>



@property (retain, nonatomic) UIStackView *contentStack; // ivar: _contentStack
@property (retain, nonatomic) VSOnscreenCodeContentView *contentView; // ivar: _contentView
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<VSOnscreenCodeViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *logoAccessibilityLabel; // ivar: _logoAccessibilityLabel
@property (retain, nonatomic) UIImageView *logoImageView; // ivar: _logoImageView
@property (retain, nonatomic) UIView *logoWrapperView; // ivar: _logoWrapperView
@property (nonatomic) BOOL showButtonLockup; // ivar: _showButtonLockup
@property (readonly) Class superclass;


-(id)initWithButtonLockup:(BOOL)arg0 ;
-(struct CGSize )preferredImageSize;
-(void)buttonLockupPressed;
-(void)setupLayout;
-(void)setupViews;
-(void)updateUIWithViewModel:(id)arg0 ;


@end


#endif