// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EMVIPMANAGER_H
#define EMVIPMANAGER_H

@class EAEmailAddressSet, EFCancelationToken, NSSet, NSString, EFPromise;
@protocol EFFutureDelegate, EFLoggable, EMVIPManagerObserver, EMVIPReader_Private, EMVIPManager;

#import <Foundation/Foundation.h>

#import "EMRemoteConnectionRecoveryAssertion.h"
#import "EMRemoteConnection.h"

@interface EMVIPManager : NSObject <EFFutureDelegate, EFLoggable, EMVIPManagerObserver, EMVIPReader_Private, EMVIPManager>

 {
    os_unfair_lock_s _vipsLock;
    EAEmailAddressSet *_cachedEmailAddresses;
    EFCancelationToken *_observerCancelationToken;
    EMRemoteConnectionRecoveryAssertion *_connectionRecoveryAssertion;
}


@property (readonly, copy, nonatomic) EAEmailAddressSet *allVIPEmailAddresses;
@property (readonly, copy, nonatomic) NSSet *allVIPWaitForResult;
@property (readonly, copy, nonatomic) NSSet *allVIPs;
@property (retain, nonatomic) EMRemoteConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasVIPs;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain) EFPromise *vipsByIdentifierPromise; // ivar: _vipsByIdentifierPromise


+(id)log;
+(id)remoteInterface;
-(BOOL)isVIPAddress:(id)arg0 ;
-(id)_vipsByIdentifier;
-(id)_vipsByIdentifierFuture;
-(id)init;
-(id)initWithRemoteConnection:(id)arg0 ;
-(id)vipWithIdentifier:(id)arg0 ;
-(void)_reset;
-(void)_startObservingVIPChangesIfNecessary;
-(void)dealloc;
-(void)didFinishBlockingMainThreadForFuture:(id)arg0 ;
-(void)didStartBlockingMainThreadForFuture:(id)arg0 ;
-(void)getAllVIPsWithCompletion:(id)arg0 ;
-(void)observer:(id)arg0 gotVIPs:(id)arg1 ;
-(void)observer:(id)arg0 updatedVIPs:(id)arg1 removedVIPs:(id)arg2 ;
-(void)removeVIPsWithEmailAddresses:(id)arg0 ;
-(void)removeVIPsWithIdentifiers:(id)arg0 ;
-(void)saveVIPs:(id)arg0 ;


@end


#endif