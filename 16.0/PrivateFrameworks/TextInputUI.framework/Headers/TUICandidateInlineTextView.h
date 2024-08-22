// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TUICANDIDATEINLINETEXTVIEW_H
#define TUICANDIDATEINLINETEXTVIEW_H

@class UIView, UILabel, NSString;
@protocol TUICandidateViewStyle;



@interface TUICandidateInlineTextView : UIView

@property (retain, nonatomic) UILabel *label; // ivar: _label
@property (retain, nonatomic) NSObject<TUICandidateViewStyle> *style; // ivar: _style
@property (copy, nonatomic) NSString *text; // ivar: _text


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)commonInit;
-(void)updateLabels;


@end


#endif