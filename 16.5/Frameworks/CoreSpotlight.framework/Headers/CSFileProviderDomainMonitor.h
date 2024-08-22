// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSFILEPROVIDERDOMAINMONITOR_H
#define CSFILEPROVIDERDOMAINMONITOR_H

@class NSDictionary, NSMutableOrderedSet, NSURL;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CSFileProviderDomainMonitor : NSObject {
    NSDictionary *_activeDomains;
    _opaque_pthread_rwlock_t _activeDomainsLock;
    NSMutableOrderedSet *_removedDomains;
    _opaque_pthread_rwlock_t _removedDomainsLock;
}


@property (copy) id *domainCleaner; // ivar: _domainCleaner
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *domainDeleteQueue; // ivar: _domainDeleteQueue
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *domainUpdateQueue; // ivar: _domainUpdateQueue
@property (retain, nonatomic) id *fileProviderDelegate; // ivar: _fileProviderDelegate
@property (readonly) NSURL *fileProviderDomainURL;


+(id)sharedInstance;
-(NSUInteger)loadSavedDomains:(id)arg0 ;
-(id)getProviderIDForBundle:(id)arg0 ;
-(id)init;
-(id)removedDomainFilterQueries;
-(void)dealloc;
-(void)saveAllDomains:(id)arg0 ;
-(void)startMonitoring;
-(void)updateActiveDomains:(id)arg0 ;
-(void)updateActiveDomainsWithProviderDomainsByID:(id)arg0 ;
-(void)updateRemovedDomains:(id)arg0 ;


@end


#endif