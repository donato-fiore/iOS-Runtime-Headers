// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MECOMPOSEEXTENSIONSHELPER_H
#define MECOMPOSEEXTENSIONSHELPER_H

@class EFLocked, EFCancelationToken, NSString;
@protocol MEAppExtensionsObserver, MEMailComposeExtensionHostDelegate, MEMailComposeAppExtensionsRequestDispatcher, OS_dispatch_queue, MEMailComposeExtensionDelegate;

#import <Foundation/Foundation.h>

#import "MEComposeSession.h"
#import "MEAppExtensionsController.h"

@interface MEComposeExtensionsHelper : NSObject <MEAppExtensionsObserver, MEMailComposeExtensionHostDelegate, MEMailComposeAppExtensionsRequestDispatcher>

 {
    MEComposeSession *_composeSession;
    MEAppExtensionsController *_extensionsController;
    EFLocked *_remoteExtensions;
    EFCancelationToken *_extensionsObserverCancelable;
    NSObject<OS_dispatch_queue> *_extensionRequestDispatcherQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<MEMailComposeExtensionDelegate> *extensionDelegate; // ivar: _extensionDelegate
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)log;
-(id)initWithComposeSession:(id)arg0 extensionsController:(id)arg1 iconReloader:(id)arg2 ;
-(void)_dispatchMailComposeSessionDidBeginForExtensions:(id)arg0 ;
-(void)appExtensionViewControllerForExtensionIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)dealloc;
-(void)dispatchEmailAddressTokenIconRequestsForMailMessage:(id)arg0 completionHandler:(id)arg1 ;
-(void)extensionsMatched:(id)arg0 ;
-(void)extensionsNoLongerMatching:(id)arg0 ;
-(void)getAdditionalHeadersForMessage:(id)arg0 completionHandler:(id)arg1 ;
-(void)performSendValidationForMessage:(id)arg0 completionHandler:(id)arg1 ;
-(void)regenerateEmailAddressTokenChangesForSession:(id)arg0 forContextUUID:(id)arg1 ;


@end


#endif