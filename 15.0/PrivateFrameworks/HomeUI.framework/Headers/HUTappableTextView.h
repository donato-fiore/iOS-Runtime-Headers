// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUTAPPABLETEXTVIEW_H
#define HUTAPPABLETEXTVIEW_H

@class UITextView, NSString, UITapGestureRecognizer;
@protocol UIGestureRecognizerDelegate, HUTappableTextViewDelegate;



@interface HUTappableTextView : UITextView <UIGestureRecognizerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly) Class superclass;
@property (retain, nonatomic) UITapGestureRecognizer *tapRecognizer; // ivar: _tapRecognizer
@property (weak, nonatomic) NSObject<HUTappableTextViewDelegate> *tappableTextViewDelegate; // ivar: _tappableTextViewDelegate


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_handleTap:(id)arg0 ;
-(void)configureTapRecognizer;


@end


#endif