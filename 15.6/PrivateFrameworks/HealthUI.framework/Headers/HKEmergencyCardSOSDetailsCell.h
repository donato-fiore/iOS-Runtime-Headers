// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKEMERGENCYCARDSOSDETAILSCELL_H
#define HKEMERGENCYCARDSOSDETAILSCELL_H

@class UITableViewCell, NSString, NSAttributedString, UITextView;
@protocol UITextViewDelegate;



@interface HKEmergencyCardSOSDetailsCell : UITableViewCell <UITextViewDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSAttributedString *footerAttributedText; // ivar: _footerAttributedText
@property (retain, nonatomic) UITextView *footerTextView; // ivar: _footerTextView
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)textView:(id)arg0 shouldInteractWithURL:(id)arg1 inRange:(struct _NSRange )arg2 interaction:(NSInteger)arg3 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)_setupConstraints;
-(void)_setupViews;
-(void)_updateText;
-(void)tintColorDidChange;


@end


#endif