// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC7SWIFTUI39NOTIFYINGMULTICOLUMNSPLITVIEWCONTROLLER_H
#define _TTC7SWIFTUI39NOTIFYINGMULTICOLUMNSPLITVIEWCONTROLLER_H

@class UISplitViewController, UIViewController;



@interface _TtC7SwiftUI39NotifyingMulticolumnSplitViewController : UISplitViewController

@property (nonatomic, readonly) UIViewController *childViewControllerForStatusBarHidden;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithStyle:(NSInteger)arg0 ;
-(id)makeDetailNavigationControllerWithRoot:(id)arg0 ;
-(void)showDetailViewController:(id)arg0 sender:(id)arg1 ;


@end


#endif