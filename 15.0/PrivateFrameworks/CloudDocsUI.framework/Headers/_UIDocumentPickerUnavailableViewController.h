// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIDOCUMENTPICKERUNAVAILABLEVIEWCONTROLLER_H
#define _UIDOCUMENTPICKERUNAVAILABLEVIEWCONTROLLER_H

@class UIViewController, UIButton, NSURL, NSLayoutConstraint, UIImageView, UILabel;



@interface _UIDocumentPickerUnavailableViewController : UIViewController

@property (retain, nonatomic) UIButton *button; // ivar: _button
@property (retain, nonatomic) NSURL *buttonURL; // ivar: _buttonURL
@property (retain, nonatomic) NSLayoutConstraint *imageToTitleConstraint; // ivar: _imageToTitleConstraint
@property (retain, nonatomic) UIImageView *leadImageView; // ivar: _leadImageView
@property (retain, nonatomic) UILabel *textLabel; // ivar: _textLabel
@property (retain, nonatomic) UILabel *textLabel2; // ivar: _textLabel2
@property (retain, nonatomic) NSLayoutConstraint *textToButtonConstraint; // ivar: _textToButtonConstraint
@property (retain, nonatomic) NSLayoutConstraint *textToTextConstraint; // ivar: _textToTextConstraint
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (retain, nonatomic) NSLayoutConstraint *titleToTextConstraint; // ivar: _titleToTextConstraint
@property (retain, nonatomic) NSLayoutConstraint *topConstraint; // ivar: _topConstraint


-(id)_buttonBackgroundImageForState:(NSUInteger)arg0 traits:(id)arg1 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)_buttonPressed:(id)arg0 ;
-(void)_fontSizeDidChange:(id)arg0 ;
-(void)dealloc;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif