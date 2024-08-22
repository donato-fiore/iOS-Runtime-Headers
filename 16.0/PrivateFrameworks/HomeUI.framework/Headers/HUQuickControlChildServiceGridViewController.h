// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUQUICKCONTROLCHILDSERVICEGRIDVIEWCONTROLLER_H
#define HUQUICKCONTROLCHILDSERVICEGRIDVIEWCONTROLLER_H

@class HFChildServiceControlItem;


#import "HUQuickControlViewController.h"
#import "HUQuickControlCollectionViewController.h"

@interface HUQuickControlChildServiceGridViewController : HUQuickControlViewController

@property (readonly, nonatomic) HUQuickControlCollectionViewController *collectionViewController; // ivar: _collectionViewController
@property (readonly, nonatomic) HFChildServiceControlItem *controlItem;


-(BOOL)_canShowWhileLocked;
-(id)childQuickControlContentViewControllers;
-(id)hu_preloadContent;
-(id)initWithChildServiceControlItem:(id)arg0 home:(id)arg1 itemUpdater:(id)arg2 controlOrientation:(NSUInteger)arg3 preferredControl:(NSUInteger)arg4 ;
-(id)initWithControlItems:(id)arg0 home:(id)arg1 itemUpdater:(id)arg2 controlOrientation:(NSUInteger)arg3 preferredControl:(NSUInteger)arg4 ;
-(void)_subclass_configureQuickControlViewController:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif