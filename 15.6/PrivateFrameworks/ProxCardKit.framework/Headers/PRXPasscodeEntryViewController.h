// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PRXPASSCODEENTRYVIEWCONTROLLER_H
#define PRXPASSCODEENTRYVIEWCONTROLLER_H

@class UIImage;
@protocol PRXPasscodeEntryViewDelegate;


#import "PRXCardContentViewController.h"
#import "PRXImageView.h"
#import "PRXPasscodeEntryView.h"

@interface PRXPasscodeEntryViewController : PRXCardContentViewController <PRXPasscodeEntryViewDelegate>



@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (readonly, nonatomic) PRXImageView *imageView; // ivar: _imageView
@property (nonatomic) NSInteger numberOfDigits; // ivar: _numberOfDigits
@property (readonly, nonatomic) PRXPasscodeEntryView *passcodeEntryView; // ivar: _passcodeEntryView
@property (copy, nonatomic) id *textChangeHandler; // ivar: _textChangeHandler
@property (copy, nonatomic) id *textEntryCompletionHandler; // ivar: _textEntryCompletionHandler
@property (nonatomic) BOOL useMonospacedFont; // ivar: _useMonospacedFont


-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)_scrollToWells;
-(void)_textDidChange:(id)arg0 ;
-(void)_updatePasscodeEntryView;
-(void)didCompleteTextEntry:(id)arg0 ;
-(void)passcodeEntryViewDidBecomeFirstResponder:(id)arg0 ;
-(void)textDidChange:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif