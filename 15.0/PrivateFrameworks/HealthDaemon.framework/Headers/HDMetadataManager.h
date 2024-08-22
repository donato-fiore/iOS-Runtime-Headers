// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDMETADATAMANAGER_H
#define HDMETADATAMANAGER_H


#import <Foundation/Foundation.h>

#import "HDProfile.h"
#import "HDDatabaseValueCache.h"

@interface HDMetadataManager : NSObject {
    HDProfile *_profile;
    HDDatabaseValueCache *_keyEntityCache;
    HDDatabaseValueCache *_keyCache;
}




-(BOOL)insertMetadata:(id)arg0 forObjectID:(id)arg1 sourceID:(id)arg2 externalSyncObjectCode:(NSInteger)arg3 objectDeleted:(BOOL)arg4 error:(*id)arg5 ;
-(BOOL)insertMetadata:(id)arg0 forObjectID:(id)arg1 sourceID:(id)arg2 externalSyncObjectCode:(NSInteger)arg3 objectDeleted:(BOOL)arg4 transaction:(id)arg5 error:(*id)arg6 ;
-(id)initWithProfile:(id)arg0 ;
// -(id)metadataForObjectID:(NSInteger)arg0 baseMetadata:(id)arg1 keyFilter:(id)arg2 statement:(unk)arg3 error:(id)arg4  ;
-(id)predicateWithMetadataKey:(id)arg0 allowedValues:(id)arg1 ;
-(id)predicateWithMetadataKey:(id)arg0 exists:(BOOL)arg1 ;
-(id)predicateWithMetadataKey:(id)arg0 value:(id)arg1 operatorType:(NSUInteger)arg2 ;
// -(id)unitTest_metadataForObjectID:(NSInteger)arg0 keyFilter:(id)arg1 error:(unk)arg2  ;
-(id)unitTest_rawMetadataForObject:(id)arg0 error:(*id)arg1 ;


@end


#endif