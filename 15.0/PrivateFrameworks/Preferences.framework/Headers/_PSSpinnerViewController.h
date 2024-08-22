// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PSSPINNERVIEWCONTROLLER_H
#define _PSSPINNERVIEWCONTROLLER_H

@class UIActivityIndicatorView;


#import "PSViewController.h"

@interface _PSSpinnerViewController : PSViewController {
    UIActivityIndicatorView *_spinner;
}




-(void)loadView;
-(void)updateViewConstraints;


@end


#endif