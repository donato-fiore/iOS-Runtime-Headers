// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QLSERVICEVIEWCONTROLLER_H
#define QLSERVICEVIEWCONTROLLER_H

@class UIViewController, NSUUID;



@interface QLServiceViewController : UIViewController {
    BOOL _isAccessoryView;
}


@property (readonly, weak) UIViewController *mainViewController; // ivar: _mainViewController
@property (readonly) NSUUID *uuid; // ivar: _uuid


+(id)_getServiceWithUUID:(id)arg0 ;
+(id)_serviceViewControllers;
-(id)init;
-(void)_registerServiceViewController;
-(void)configureAsAccessoryViewContainerForPreviewCollection:(id)arg0 ;
-(void)invalidateService;
-(void)preparePreviewCollectionForInvalidationWithCompletionHandler:(id)arg0 ;


@end


#endif