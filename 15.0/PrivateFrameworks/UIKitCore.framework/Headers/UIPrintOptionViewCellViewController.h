// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIPRINTOPTIONVIEWCELLVIEWCONTROLLER_H
#define UIPRINTOPTIONVIEWCELLVIEWCONTROLLER_H

@protocol UIPrintOptionViewDelegate;


#import "UIViewController.h"

@interface UIPrintOptionViewCellViewController : UIViewController

@property (weak, nonatomic) NSObject<UIPrintOptionViewDelegate> *viewDelegate; // ivar: _viewDelegate


-(void)viewDidAppear:(BOOL)arg0 ;


@end


#endif