// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WDCONTACTCONSOLIDATIONLEARNMOREVIEWCONTROLLER_H
#define WDCONTACTCONSOLIDATIONLEARNMOREVIEWCONTROLLER_H

@class HKViewController, UITextView;



@interface WDContactConsolidationLearnMoreViewController : HKViewController

@property (copy, nonatomic) id *dismissHandler; // ivar: _dismissHandler
@property (retain, nonatomic) UITextView *textView; // ivar: _textView


-(void)createDismissButton;
-(void)createTextView;
-(void)dismissButtonPressed:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif