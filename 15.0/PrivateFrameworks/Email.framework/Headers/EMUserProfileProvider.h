// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EMUSERPROFILEPROVIDER_H
#define EMUSERPROFILEPROVIDER_H

@class NSSet, NSDictionary, CNContactStore, NSString, NSMutableArray;
@protocol EMUserProfileProvider, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface EMUserProfileProvider : NSObject <EMUserProfileProvider>

 {
    os_unfair_lock_s _cacheLock;
    NSObject<OS_dispatch_queue> *_cacheQueue;
    int _outstandingCacheRefreshes;
}


@property (readonly, copy) NSSet *accountsEmailAddresses;
@property (readonly, copy) NSSet *allEmailAddresses;
@property (retain, nonatomic) NSDictionary *cache; // ivar: _cache
@property (readonly, copy) NSSet *contactEmailAddresses;
@property (retain, nonatomic) CNContactStore *contactStore; // ivar: _contactStore
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMutableArray *knownToBeMyEmail; // ivar: _knownToBeMyEmail
@property (readonly, nonatomic) NSMutableArray *knownToNotBeMyEmail; // ivar: _knownToNotBeMyEmail
@property (readonly) Class superclass;


+(BOOL)doesAddressList:(id)arg0 containAddressInSet:(id)arg1 ;
-(BOOL)_isMyEmailAddressContainedInAddressStrings:(id)arg0 ;
-(BOOL)isMyEmailAddressContainedInAddressList:(id)arg0 ;
-(id)contact;
-(id)contactWithKeysToFetch:(id)arg0 ;
-(id)init;
-(void)_accountsChanged:(id)arg0 ;
-(void)_contactsChanged:(id)arg0 ;
-(void)refreshCachedValues;
-(void)waitForOutstandingCacheRefreshes;


@end


#endif