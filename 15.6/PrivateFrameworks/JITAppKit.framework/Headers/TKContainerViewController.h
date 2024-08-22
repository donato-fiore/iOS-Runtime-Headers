// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TKCONTAINERVIEWCONTROLLER_H
#define TKCONTAINERVIEWCONTROLLER_H

@class UIViewController, UINavigationItem;


#import "TKKeyPathObserver.h"

@interface TKContainerViewController : UIViewController {
    TKKeyPathObserver *_observer;
    UINavigationItem *_childNavigationItem;
    BOOL _appearing;
}


@property (retain, nonatomic) UIViewController *childViewController; // ivar: _childViewController


-(NSUInteger)edgesForExtendedLayout;
-(void)dealloc;
-(void)observeChild;
-(void)updateInternals:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif