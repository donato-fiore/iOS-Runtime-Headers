// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKCONTACTRESOLVER_H
#define PKCONTACTRESOLVER_H

@class NSCache, CNContactStore, NSHashTable, NSArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PKContactResolver : NSObject {
    NSObject<OS_dispatch_queue> *_replyQueue;
    NSObject<OS_dispatch_queue> *_workQueue;
    os_unfair_lock_s _delegatesLock;
}


@property (retain, nonatomic) NSCache *altDSIDToContactCache; // ivar: _altDSIDToContactCache
@property (retain, nonatomic) CNContactStore *contactStore; // ivar: _contactStore
@property (retain, nonatomic) NSHashTable *delegates; // ivar: _delegates
@property (retain, nonatomic) NSCache *handleToContactCache; // ivar: _handleToContactCache
@property (readonly, nonatomic) NSArray *keysToFetch; // ivar: _keysToFetch


+(id)contactForFamilyMember:(id)arg0 nameComponents:(id)arg1 imageData:(id)arg2 ;
+(id)defaultContactResolver;
-(BOOL)hasCachedResultForAccountUser:(id)arg0 ;
-(BOOL)hasCachedResultForHandle:(id)arg0 ;
-(id)_predicateForHandle:(id)arg0 ;
-(id)contactForAccountUser:(id)arg0 ;
-(id)contactForHandle:(id)arg0 ;
-(id)contactForIdentifier:(id)arg0 ;
-(id)initWithContactStore:(id)arg0 keysToFetch:(id)arg1 ;
-(void)_accessDelegatesWithHandler:(id)arg0 ;
-(void)_handleContactStoreDidChangeNotification:(id)arg0 ;
-(void)addDelegate:(id)arg0 ;
-(void)contactForAccountUser:(id)arg0 withCompletion:(id)arg1 ;
-(void)contactForHandle:(id)arg0 withCompletion:(id)arg1 ;
-(void)contactForHandles:(id)arg0 withCompletion:(id)arg1 ;
-(void)invalidateCache;
-(void)removeDelegate:(id)arg0 ;


@end


#endif