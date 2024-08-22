// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SEARCHUIREQUESTBUTTON_H
#define SEARCHUIREQUESTBUTTON_H

@class SFCommand, TLKImageView, TLKStackView, TLKStoreButton;


#import "SearchUIAccessoryViewController.h"

@interface SearchUIRequestButton : SearchUIAccessoryViewController

@property (retain, nonatomic) SFCommand *command; // ivar: _command
@property (retain, nonatomic) TLKImageView *imageView; // ivar: _imageView
@property int lastState; // ivar: _lastState
@property (retain, nonatomic) TLKStackView *stackView; // ivar: _stackView
@property (retain, nonatomic) TLKStoreButton *viewButton; // ivar: _viewButton


-(BOOL)shouldTopAlignForAccessibilityContentSizes;
-(id)imageWithSymbolName:(id)arg0 accessibilityDescription:(id)arg1 ;
-(id)setupView;
-(void)_updateButtonState:(int)arg0 ;
-(void)buttonPressed;
-(void)updateButtonState:(BOOL)arg0 withState:(int)arg1 ;


@end


#endif