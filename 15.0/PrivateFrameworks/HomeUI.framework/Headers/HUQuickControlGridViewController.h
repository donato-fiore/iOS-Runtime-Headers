// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUQUICKCONTROLGRIDVIEWCONTROLLER_H
#define HUQUICKCONTROLGRIDVIEWCONTROLLER_H



#import "HUQuickControlViewController.h"
#import "HUQuickControlCollectionViewController.h"

@interface HUQuickControlGridViewController : HUQuickControlViewController

@property (readonly, nonatomic) HUQuickControlCollectionViewController *collectionViewController; // ivar: _collectionViewController


+(id)controlItemPredicate;
-(BOOL)_canShowWhileLocked;
-(id)childQuickControlContentViewControllers;
-(id)hu_preloadContent;
-(id)initWithControlItems:(id)arg0 home:(id)arg1 itemUpdater:(id)arg2 controlOrientation:(NSUInteger)arg3 preferredControl:(NSUInteger)arg4 ;
-(void)_subclass_configureQuickControlViewController:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif