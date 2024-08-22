// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UISPLITVIEWCONTROLLERDISPLAYMODEBARBUTTONITEM_H
#define UISPLITVIEWCONTROLLERDISPLAYMODEBARBUTTONITEM_H

@protocol UISplitViewControllerImpl;


#import "UIBarButtonItem.h"

@interface UISplitViewControllerDisplayModeBarButtonItem : UIBarButtonItem

@property (readonly, nonatomic, getter=_hasBeenUsed) BOOL hasBeenUsed; // ivar: _hasBeenUsed
@property (weak, nonatomic, getter=_impl, setter=_setImpl:) NSObject<UISplitViewControllerImpl> *impl; // ivar: _impl


-(SEL)action;
-(id)target;
-(void)_setOwningNavigationItem:(id)arg0 ;
-(void)_wasUsed;


@end


#endif