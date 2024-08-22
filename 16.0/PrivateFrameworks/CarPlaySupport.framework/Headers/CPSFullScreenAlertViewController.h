// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPSFULLSCREENALERTVIEWCONTROLLER_H
#define CPSFULLSCREENALERTVIEWCONTROLLER_H

@class CPAlertTemplate, NSArray, NSString;
@protocol CPSButtonDelegate;


#import "CPSBaseTemplateViewController.h"

@interface CPSFullScreenAlertViewController : CPSBaseTemplateViewController <CPSButtonDelegate>



@property (readonly, nonatomic) CPAlertTemplate *alert;
@property (retain, nonatomic) NSArray *alertButtons; // ivar: _alertButtons
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_titleFont;
-(id)initWithAlert:(id)arg0 alertDelegate:(id)arg1 templateEnvironment:(id)arg2 ;
-(id)preferredFocusEnvironments;
-(void)_viewDidLoad;
-(void)didSelectButton:(id)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif