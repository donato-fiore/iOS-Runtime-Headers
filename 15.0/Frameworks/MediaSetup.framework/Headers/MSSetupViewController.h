// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MSSETUPVIEWCONTROLLER_H
#define MSSETUPVIEWCONTROLLER_H

@class UIViewController, NSExtension, _UIRemoteViewController, NSString;
@protocol MSViewServiceHostProtocol, _UIRemoteViewControllerContaining;


#import "_MSRemoteViewController.h"
#import "MSServiceAccount.h"

@interface MSSetupViewController : UIViewController <MSViewServiceHostProtocol, _UIRemoteViewControllerContaining>

 {
    _MSRemoteViewController *_childViewController;
    NSExtension *_extension;
    id *_extensionRequest;
}


@property (readonly, nonatomic) _UIRemoteViewController *_containedRemoteViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) MSServiceAccount *serviceAccount; // ivar: _serviceAccount
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger testFlags; // ivar: _testFlags


-(id)createExtension;
-(id)createExtensionItemWithServiceAccount:(id)arg0 ;
-(id)initWithServiceAccount:(id)arg0 ;
-(id)initWithServiceAccount:(id)arg0 testFlags:(NSUInteger)arg1 ;
-(void)_setChildViewController:(id)arg0 ;
-(void)dealloc;
-(void)extensionHandleConnection:(id)arg0 viewController:(id)arg1 error:(id)arg2 ;
-(void)requestDismiss;


@end


#endif