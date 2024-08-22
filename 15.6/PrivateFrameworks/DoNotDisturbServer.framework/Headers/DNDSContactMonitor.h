// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DNDSCONTACTMONITOR_H
#define DNDSCONTACTMONITOR_H

@class CNContactStore, NSHashTable, NSString;
@protocol DNDSContactMonitoring, DNDSContactProviding, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface DNDSContactMonitor : NSObject <DNDSContactMonitoring>

 {
    CNContactStore *_contactStore;
    NSHashTable *_listeners;
    id<DNDSContactProviding> *_contactProvider;
    os_unfair_lock_s _lock;
    NSObject<OS_dispatch_queue> *_fetchQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_fetchContactHistoryWithToken:(id)arg0 monitoredContacts:(id)arg1 handler:(id)arg2 ;
-(id)_contactsWithCNContacts:(id)arg0 ;
-(id)_lock_listenersByContactHistoryToken;
-(id)_lock_monitoredContactsByContactHistoryToken;
-(id)initWithContactStore:(id)arg0 contactProvider:(id)arg1 ;
-(void)_contactStoreChanged:(id)arg0 ;
-(void)_fetchContactsForMonitoredContacts:(id)arg0 handler:(id)arg1 ;
-(void)_fetchUpdatesWithContactHistoryToken:(id)arg0 monitoredContacts:(id)arg1 handler:(id)arg2 ;
-(void)_queue_fetchUpdatesWithContactHistoryToken:(id)arg0 monitoredContacts:(id)arg1 handler:(id)arg2 ;
-(void)_updateContactsWithIdentifiers;
-(void)_updateContactsWithoutIdentifiers;
-(void)addListener:(id)arg0 ;
-(void)removeListener:(id)arg0 ;


@end


#endif