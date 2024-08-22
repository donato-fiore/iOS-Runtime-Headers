// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNCONTAINERCACHE_H
#define CNCONTAINERCACHE_H

@class ACAccountStore, CNCache;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CNContactStore.h"
#import "CNContainer.h"

@interface CNContainerCache : NSObject

@property (retain, nonatomic) ACAccountStore *accountStore; // ivar: _accountStore
@property (retain, nonatomic) CNCache *cachedAccounts; // ivar: _cachedAccounts
@property (weak, nonatomic) CNContactStore *contactStore; // ivar: _contactStore
@property (retain, nonatomic) CNContainer *primaryiCloudContainer; // ivar: _primaryiCloudContainer
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)os_log;
-(id)accountForContainer:(id)arg0 ;
-(id)cnAccountForContainer:(id)arg0 ;
-(id)initWithContactStore:(id)arg0 ;
-(id)onWorkQueue_findPrimaryiCloudContainer;
-(void)dealloc;
-(void)resetAccountCache;


@end


#endif