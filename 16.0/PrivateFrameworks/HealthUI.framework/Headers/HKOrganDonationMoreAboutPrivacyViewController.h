// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKORGANDONATIONMOREABOUTPRIVACYVIEWCONTROLLER_H
#define HKORGANDONATIONMOREABOUTPRIVACYVIEWCONTROLLER_H

@class UITextView;


#import "HKViewController.h"

@interface HKOrganDonationMoreAboutPrivacyViewController : HKViewController

@property (retain, nonatomic) UITextView *textView; // ivar: _textView


-(void)_updateForCurrentSizeCategory;
-(void)doneButtonTapped:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif