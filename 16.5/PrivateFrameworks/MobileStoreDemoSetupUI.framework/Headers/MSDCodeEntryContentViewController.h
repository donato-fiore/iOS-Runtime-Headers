// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSDCODEENTRYCONTENTVIEWCONTROLLER_H
#define MSDCODEENTRYCONTENTVIEWCONTROLLER_H

@class UIViewController, NSArray, NSString, UILabel;
@protocol MSDCodeEntryViewDelegate, MSDCodeEntryContentViewControllerDelegate;


#import "MSDCodeEntryView.h"

@interface MSDCodeEntryContentViewController : UIViewController <MSDCodeEntryViewDelegate>



@property (retain, nonatomic) NSArray *activeConstraints; // ivar: _activeConstraints
@property (retain, nonatomic) MSDCodeEntryView *codeEntryView; // ivar: _codeEntryView
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSObject<MSDCodeEntryContentViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *errorMessage; // ivar: _errorMessage
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UILabel *messageLabel; // ivar: _messageLabel
@property (retain, nonatomic) UILabel *promptLabel; // ivar: _promptLabel
@property (readonly) Class superclass;
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (retain, nonatomic) NSString *verificationCode; // ivar: _verificationCode


-(id)initWithTitle:(id)arg0 message:(id)arg1 verificationCode:(id)arg2 verificationErrorMesssage:(id)arg3 andDelegate:(id)arg4 ;
-(void)didEnterCode:(id)arg0 forEntry:(id)arg1 ;
-(void)updateViewConstraints;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif