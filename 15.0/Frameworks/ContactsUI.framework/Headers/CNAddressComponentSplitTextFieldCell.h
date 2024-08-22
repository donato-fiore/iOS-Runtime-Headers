// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNADDRESSCOMPONENTSPLITTEXTFIELDCELL_H
#define CNADDRESSCOMPONENTSPLITTEXTFIELDCELL_H

@class NSString, UITextField;
@protocol NUIContainerViewDelegate;


#import "CNAddressComponentTextFieldCell.h"
#import "CNRepeatingGradientSeparatorView.h"

@interface CNAddressComponentSplitTextFieldCell : CNAddressComponentTextFieldCell <NUIContainerViewDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CNRepeatingGradientSeparatorView *separator; // ivar: _separator
@property (readonly) Class superclass;
@property (retain, nonatomic) UITextField *textFieldLeft; // ivar: _textFieldLeft
@property (retain, nonatomic) UITextField *textFieldRight; // ivar: _textFieldRight


+(Class)containerViewClass;
+(id)cellIdentifier;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(id)newSeparatorView;
-(id)textAttributes;
-(id)textFields;
-(struct CGRect )containerView:(id)arg0 layoutFrameForArrangedSubview:(id)arg1 withProposedFrame:(struct CGRect )arg2 ;
-(void)setTextAttributes:(id)arg0 ;
-(void)setupTextFields;


@end


#endif