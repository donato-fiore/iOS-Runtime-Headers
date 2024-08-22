// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSTRANSITIONCONTAINERVIEWCONTROLLER_H
#define TSTRANSITIONCONTAINERVIEWCONTROLLER_H

@class UIViewController, NSString;



@interface TSTransitionContainerViewController : UIViewController {
    ? identifier;
    ? disableSidebarBarButtonItem;
    ? rootViewController;
    ? backBarButtonItem;
    ? nextDisplayMode;
    ? $__lazy_storage_$_sidebarBarButtonItem;
    ? doneBarButtonItem;
    ? transition;
}


@property (nonatomic, readonly) NSString *description;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithRootViewController:(id)arg0 identifier:(id)arg1 ;


@end


#endif