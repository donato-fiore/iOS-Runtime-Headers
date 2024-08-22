// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LNEMBEDDEDAPPLICATIONCONNECTION_H
#define LNEMBEDDEDAPPLICATIONCONNECTION_H

@class NSMapTable, NSString, FBSOpenApplicationService, PDCPreflightManager, RBSProcessMonitor;
@protocol NSXPCListenerDelegate, RBSAssertionObserving;


#import "LNApplicationConnection.h"

@interface LNEmbeddedApplicationConnection : LNApplicationConnection <NSXPCListenerDelegate, RBSAssertionObserving>



@property (readonly, nonatomic) NSMapTable *assertionsMapTable; // ivar: _assertionsMapTable
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) FBSOpenApplicationService *openApplicationService; // ivar: _openApplicationService
@property (readonly, nonatomic) PDCPreflightManager *preflightManager; // ivar: _preflightManager
@property (readonly, nonatomic) RBSProcessMonitor *processMonitor; // ivar: _processMonitor
@property (readonly) Class superclass;


+(id)optionsForAction:(id)arg0 interactionMode:(NSInteger)arg1 source:(unsigned short)arg2 ;
+(id)sharedOpenApplicationOperationQueue;
-(BOOL)isSupportedInCarPlay;
-(BOOL)refreshWithOptions:(id)arg0 ;
-(id)dashboardApplicationServiceWithConnectionOptions:(id)arg0 error:(*id)arg1 ;
-(id)defaultOptions;
-(id)initWithBundleIdentifier:(id)arg0 appBundleIdentifier:(id)arg1 error:(*id)arg2 ;
-(void)_invalidateAllAssertions;
-(void)acquireAssertionsForConnectionOperation:(id)arg0 ;
-(void)assertion:(id)arg0 didInvalidateWithError:(id)arg1 ;
-(void)cancelTimeoutForOperationWithIdentifier:(id)arg0 ;
-(void)connectWithOptions:(id)arg0 ;
-(void)connectionOperation:(id)arg0 didFinishWithError:(id)arg1 ;
-(void)connectionOperationWillStart:(id)arg0 ;
-(void)dealloc;
-(void)enqueueOpenApplicationOperation:(id)arg0 ;
-(void)extendTimeoutForOperationWithIdentifier:(id)arg0 ;
-(void)invalidateAssertionsForConnectionOperation:(id)arg0 ;
-(void)openApplicationWithOptions:(id)arg0 connectionAction:(id)arg1 completionHandler:(id)arg2 ;
-(void)resumeOpenApplicationOperationQueue;


@end


#endif