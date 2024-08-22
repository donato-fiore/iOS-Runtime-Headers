// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKEXTENSIONMANAGER_H
#define GKEXTENSIONMANAGER_H

@class NSString;
@protocol GKExtensionHostViewControllerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "GKExtensionHostViewController.h"

@interface GKExtensionManager : NSObject <GKExtensionHostViewControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) GKExtensionHostViewController *extensionHostViewController; // ivar: _extensionHostViewController
@property (copy, nonatomic) NSString *extensionIdentifier; // ivar: _extensionIdentifier
@property (nonatomic) NSInteger extensionLoadState; // ivar: _extensionLoadState
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *stateQueue; // ivar: _stateQueue
@property (readonly) Class superclass;


-(BOOL)needToLoadExtension;
-(id)initWithExtensionBundleIdentifer:(id)arg0 host:(id)arg1 ;
-(id)tournamentExtensionViewController;
-(void)extensionDidTerminateWithError:(id)arg0 ;
-(void)instantiateViewControllerWithHost:(id)arg0 handler:(id)arg1 ;


@end


#endif