// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIKBSTACKVIEWCONTROLLER_H
#define UIKBSTACKVIEWCONTROLLER_H



#import "UIViewController.h"
#import "UIStackView.h"

@interface UIKBStackViewController : UIViewController

@property (readonly, nonatomic) UIStackView *stackView;


-(void)addChildViewController:(id)arg0 ;
-(void)loadView;
-(void)removeChildViewController:(id)arg0 ;


@end


#endif