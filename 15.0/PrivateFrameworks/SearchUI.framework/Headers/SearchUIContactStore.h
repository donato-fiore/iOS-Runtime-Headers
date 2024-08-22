// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SEARCHUICONTACTSTORE_H
#define SEARCHUICONTACTSTORE_H

@class NSCache, CNContactStore, NSString;
@protocol SearchUIBatchedCachePrewarmer, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SearchUIContactStore : NSObject <SearchUIBatchedCachePrewarmer>



@property (retain, nonatomic) NSCache *contactCache; // ivar: _contactCache
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *contactFetchingQueue; // ivar: _contactFetchingQueue
@property (retain, nonatomic) CNContactStore *contactStore; // ivar: _contactStore
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)contactForPhoneNumber:(id)arg0 email:(id)arg1 ;
+(id)placeholderContact;
+(id)resultTableContactDescriptorKeys;
+(id)sharedStore;
+(id)viewControllerDescriptorKeys;
-(id)batchingItemsForRowModel:(id)arg0 ;
-(id)cachedContactForIdentifier:(id)arg0 ;
-(id)cachedContactsForIdentifiers:(id)arg0 withKeyDescriptors:(id)arg1 ;
-(id)contactForIdentifier:(id)arg0 ;
-(id)contactsForIdentifiers:(id)arg0 withKeys:(id)arg1 ;
-(id)init;
-(void)fetchContactForIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)fetchContactsForIdentifiers:(id)arg0 completionHandler:(id)arg1 ;
-(void)fetchContactsForIdentifiers:(id)arg0 withKeyDescriptors:(id)arg1 completionHandler:(id)arg2 ;
-(void)prewarmCacheForBatchedItems:(id)arg0 ;


@end


#endif