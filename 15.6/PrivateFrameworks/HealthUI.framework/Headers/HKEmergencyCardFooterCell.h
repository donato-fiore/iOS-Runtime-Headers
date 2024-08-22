// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKEMERGENCYCARDFOOTERCELL_H
#define HKEMERGENCYCARDFOOTERCELL_H

@class UITableViewCell, NSString, UITextView, NSAttributedString;
@protocol UITextViewDelegate;



@interface HKEmergencyCardFooterCell : UITableViewCell <UITextViewDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UITextView *footerTextView; // ivar: _footerTextView
@property (retain, nonatomic) NSAttributedString *footerTextViewString; // ivar: _footerTextViewString
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)textView:(id)arg0 shouldInteractWithURL:(id)arg1 inRange:(struct _NSRange )arg2 interaction:(NSInteger)arg3 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)_updateTextColor;
-(void)setFooterText:(id)arg0 ;
-(void)setTextViewDelegate:(id)arg0 ;
-(void)setupConstraints;
-(void)setupViews;
-(void)tintColorDidChange;


@end


#endif