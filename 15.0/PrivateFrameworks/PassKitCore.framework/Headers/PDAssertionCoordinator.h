// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PDASSERTIONCOORDINATOR_H
#define PDASSERTIONCOORDINATOR_H

@class NSMutableDictionary, NSMutableArray, NSString;
@protocol PDAssertionRequestDelegate, PDAssertionCoordinatorExportedInterface, OS_dispatch_queue, PDAssertionCoordinatorDelegate;


#import "PDXPCService.h"
#import "PKEntitlementWhitelist.h"

@interface PDAssertionCoordinator : PDXPCService <PDAssertionRequestDelegate, PDAssertionCoordinatorExportedInterface>

 {
    NSMutableDictionary *_assertionsByType;
    NSObject<OS_dispatch_queue> *_coordinatorSerialQueue;
    PKEntitlementWhitelist *_whitelist;
    NSInteger _suppressionPermissionState;
    NSMutableArray *_pendingAssertionRequests;
}


@property (retain, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PDAssertionCoordinatorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isForegroundApplication; // ivar: _isForegroundApplication
@property (readonly) Class superclass;


+(id)suppressionApplicationRegistry;
-(BOOL)hasAssertionsOfType:(NSUInteger)arg0 ;
-(id)assertionsOfType:(NSUInteger)arg0 ;
-(id)initWithConnection:(id)arg0 ;
-(void)_acquireAssertion:(id)arg0 handler:(id)arg1 ;
-(void)_acquireContactlessInterfaceSuppressionAssertion:(id)arg0 handler:(id)arg1 ;
-(void)_addRequestForAssertion:(id)arg0 handler:(id)arg1 ;
-(void)_cancelPendingAssertionRequest:(id)arg0 ;
-(void)_processPendingAssertionRequests;
-(void)_showAlertForContactlessInterfaceSuppression;
-(void)acquireAssertionOfType:(NSUInteger)arg0 withIdentifier:(id)arg1 reason:(id)arg2 handler:(id)arg3 ;
-(void)assertionOfType:(NSUInteger)arg0 withIdentifier:(id)arg1 isValid:(id)arg2 ;
-(void)assertionOfType:(NSUInteger)arg0 withIdentifier:(id)arg1 shouldInvalidateWhenBackgrounded:(BOOL)arg2 ;
-(void)assertionRequestDidTimeout:(id)arg0 ;
-(void)cancelPendingAssertionRequests;
-(void)invalidateAllAssertions;
-(void)invalidateAssertionOfType:(NSUInteger)arg0 withIdentifier:(id)arg1 handler:(id)arg2 ;
-(void)invalidateAssertionsForBackgroundApplicationState;
-(void)processPendingAssertionRequests;


@end


#endif