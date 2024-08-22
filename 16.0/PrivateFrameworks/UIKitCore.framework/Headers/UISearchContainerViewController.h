// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UISEARCHCONTAINERVIEWCONTROLLER_H
#define UISEARCHCONTAINERVIEWCONTROLLER_H



#import "UIViewController.h"
#import "UISearchController.h"

@interface UISearchContainerViewController : UIViewController

@property (retain, nonatomic) UISearchController *searchController; // ivar: _searchController


-(BOOL)_transitionsChildViewControllers;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSearchController:(id)arg0 ;
-(void)_prepareForContainerTransition:(id)arg0 ;
-(void)_presentSearchControllerIfNecessary;
-(void)commonInit;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setTabBarObservedScrollView:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif