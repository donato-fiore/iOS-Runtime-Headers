// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSMEMORYOBJECTSTORE_H
#define NSMEMORYOBJECTSTORE_H



#import "NSMappedObjectStore.h"

@interface NSMemoryObjectStore : NSMappedObjectStore



+(BOOL)setMetadata:(id)arg0 forPersistentStoreWithURL:(id)arg1 error:(*id)arg2 ;
+(BOOL)setMetadata:(id)arg0 forPersistentStoreWithURL:(id)arg1 options:(id)arg2 error:(*id)arg3 ;
+(id)metadataForPersistentStoreWithURL:(id)arg0 error:(*id)arg1 ;
+(id)metadataForPersistentStoreWithURL:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)initWithPersistentStoreCoordinator:(id)arg0 configurationName:(id)arg1 URL:(id)arg2 options:(id)arg3 ;
-(id)type;
-(void)_preflightCrossCheck;
-(void)saveDocumentToPath:(id)arg0 ;


@end


#endif