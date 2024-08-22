// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LNEMBEDDEDAPPLICATIONCONNECTION_H
#define LNEMBEDDEDAPPLICATIONCONNECTION_H

@class NSMapTable, NSString, RBSProcessMonitor;
@protocol NSXPCListenerDelegate, RBSAssertionObserving;


#import "LNApplicationConnection.h"
#import "LNWatchdogTimer.h"

@interface LNEmbeddedApplicationConnection : LNApplicationConnection <NSXPCListenerDelegate, RBSAssertionObserving>



@property (readonly, nonatomic) NSMapTable *assertionsMapTable; // ivar: _assertionsMapTable
@property (readonly, nonatomic) LNWatchdogTimer *connectionTimer; // ivar: _connectionTimer
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) RBSProcessMonitor *processMonitor; // ivar: _processMonitor
@property (readonly) Class superclass;


+(id)optionsForAction:(id)arg0 interactionMode:(NSInteger)arg1 ;
-(id)defaultOptions;
-(id)initWithBundleIdentifier:(id)arg0 metadataVersion:(NSInteger)arg1 error:(*id)arg2 ;
-(void)acquireAssertionsForConnectionOperation:(id)arg0 ;
-(void)assertion:(id)arg0 didInvalidateWithError:(id)arg1 ;
-(void)cancelTimeoutForOperationWithIdentifier:(id)arg0 ;
-(void)connectWithOptions:(id)arg0 ;
-(void)connectionOperation:(id)arg0 didFinishWithError:(id)arg1 ;
-(void)connectionOperationWillStart:(id)arg0 ;
-(void)dealloc;
-(void)extendTimeoutForOperationWithIdentifier:(id)arg0 ;
-(void)invalidateAssertionsForConnectionOperation:(id)arg0 ;
-(void)openApplicationWithOptions:(id)arg0 connectionAction:(id)arg1 completionHandler:(id)arg2 ;
-(void)refreshWithOptions:(id)arg0 ;


@end


#endif