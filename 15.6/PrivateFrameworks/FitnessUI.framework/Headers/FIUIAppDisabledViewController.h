// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FIUIAPPDISABLEDVIEWCONTROLLER_H
#define FIUIAPPDISABLEDVIEWCONTROLLER_H

@class UIViewController;


#import "FIUITextView.h"

@interface FIUIAppDisabledViewController : UIViewController {
    FIUITextView *_textView;
}




-(id)initWithAppName:(id)arg0 disabledReason:(NSUInteger)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif