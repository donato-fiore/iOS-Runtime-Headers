// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VSSUBSCRIPTIONPROPERTYLISTSTORE_H
#define VSSUBSCRIPTIONPROPERTYLISTSTORE_H

@class NSAtomicStore;



@interface VSSubscriptionPropertyListStore : NSAtomicStore



+(BOOL)setMetadata:(id)arg0 forPersistentStoreWithURL:(id)arg1 error:(*id)arg2 ;
+(id)metadataForPersistentStoreWithURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)load:(*id)arg0 ;
-(BOOL)save:(*id)arg0 ;
-(id)initWithPersistentStoreCoordinator:(id)arg0 configurationName:(id)arg1 URL:(id)arg2 options:(id)arg3 ;
-(id)newCacheNodeForManagedObject:(id)arg0 ;
-(id)newReferenceObjectForManagedObject:(id)arg0 ;
-(id)type;
-(void)updateCacheNode:(id)arg0 fromManagedObject:(id)arg1 ;


@end


#endif