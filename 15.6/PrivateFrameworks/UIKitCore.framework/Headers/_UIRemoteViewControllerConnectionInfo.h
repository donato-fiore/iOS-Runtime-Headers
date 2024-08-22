// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIREMOTEVIEWCONTROLLERCONNECTIONINFO_H
#define _UIREMOTEVIEWCONTROLLERCONNECTIONINFO_H

@class BSMachPortSendRight, NSArray;

#import <Foundation/Foundation.h>

#import "_UIHostedWindowHostingHandle.h"
#import "_UIViewServiceInterface.h"

@interface _UIRemoteViewControllerConnectionInfo : NSObject

@property (retain) _UIHostedWindowHostingHandle *hostedWindowHostingHandle; // ivar: _hostedWindowHostingHandle
@property (retain) _UIViewServiceInterface *interface; // ivar: _interface
@property NSInteger preferredStatusBarStyle; // ivar: _preferredStatusBarStyle
@property int preferredStatusBarVisibility; // ivar: _preferredStatusBarVisibility
@property (retain) _UIHostedWindowHostingHandle *remoteKeyboardsWindowHostingHandle; // ivar: _remoteKeyboardsWindowHostingHandle
@property (retain) BSMachPortSendRight *serviceAccessibilityServerPortWrapper; // ivar: _serviceAccessibilityServerPortWrapper
@property (retain) id *serviceViewControllerControlMessageProxy; // ivar: _serviceViewControllerControlMessageProxy
@property (retain) id *serviceViewControllerProxy; // ivar: _serviceViewControllerProxy
@property (retain) NSArray *serviceViewControllerSupportedInterfaceOrientations; // ivar: _serviceViewControllerSupportedInterfaceOrientations
@property (retain) id *textEffectsOperatorProxy; // ivar: _textEffectsOperatorProxy
@property (retain) _UIHostedWindowHostingHandle *textEffectsWindowAboveStatusBarHostingHandle; // ivar: _textEffectsWindowAboveStatusBarHostingHandle
@property (retain) _UIHostedWindowHostingHandle *textEffectsWindowHostingHandle; // ivar: _textEffectsWindowHostingHandle
@property (retain) id *viewControllerOperatorProxy; // ivar: _viewControllerOperatorProxy




@end


#endif