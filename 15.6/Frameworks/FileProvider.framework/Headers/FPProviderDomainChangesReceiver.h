// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FPPROVIDERDOMAINCHANGESRECEIVER_H
#define FPPROVIDERDOMAINCHANGESRECEIVER_H

@class NSMutableSet, NSDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "FPPacer.h"

@interface FPProviderDomainChangesReceiver : NSObject {
    NSMutableSet *_changesHandlers;
    NSDictionary *_providerDomainsByID;
    NSObject<OS_dispatch_queue> *_notifyQueue;
    int _notifyToken;
    int _settingsChangedToken;
    FPPacer *_pacer;
}




+(id)sharedChangesReceiver;
-(id)_init;
-(id)addChangesHandler:(id)arg0 ;
-(void)_t_discardCache;
-(void)callChangesHandlersWithProviderDomains:(id)arg0 error:(id)arg1 ;
-(void)providerDomainsHaveChanged:(id)arg0 error:(id)arg1 ;
-(void)removeChangesHandlerToken:(id)arg0 ;
-(void)signalChange;
-(void)updateProviderDomainsWithAttemptCount:(NSUInteger)arg0 ;


@end


#endif