// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPCONTENTTASTECONTROLLER_H
#define MPCONTENTTASTECONTROLLER_H

@class NSMutableDictionary, ICUserIdentity;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MPContentTasteController : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableDictionary *_pendingUpdateRecordByPlaylistGlobalID;
    NSMutableDictionary *_pendingUpdateRecordByStoreAdamID;
}


@property (readonly, nonatomic) ICUserIdentity *userIdentity; // ivar: _userIdentity


+(id)_tasteControllerWithUserIdentity:(id)arg0 isSingleton:(BOOL)arg1 createIfRequired:(BOOL)arg2 ;
+(id)controllerWithUserIdentity:(id)arg0 ;
+(id)controllers;
+(id)globalSerialQueue;
+(id)sharedController;
+(void)_postNotificationName:(id)arg0 controller:(id)arg1 ;
+(void)_postNotificationName:(id)arg0 controller:(id)arg1 userInfo:(id)arg2 ;
-(NSInteger)tasteTypeForMediaEntity:(id)arg0 ;
-(NSInteger)tasteTypeForModel:(id)arg0 ;
-(NSInteger)tasteTypeForPlaylistGlobalID:(id)arg0 ;
-(NSInteger)tasteTypeForStoreAdamID:(NSInteger)arg0 ;
-(id)_ML3QueryWithEntityClass:(Class)arg0 predicate:(id)arg1 options:(NSInteger)arg2 ;
-(id)_addPendingUpdateRecord:(id)arg0 withKey:(id)arg1 inDictionary:(id)arg2 ;
-(id)_addPendingUpdateRecordForPlaylistGlobalID:(id)arg0 contentTasteType:(NSInteger)arg1 ;
-(id)_addPendingUpdateRecordForStoreAdamID:(NSInteger)arg0 contentTasteType:(NSInteger)arg1 ;
-(id)_initWithUserIdentity:(id)arg0 ;
-(id)_libraryEntityForModel:(id)arg0 ;
-(id)_libraryEntityWithStoreID:(NSInteger)arg0 contentType:(NSInteger)arg1 ;
-(id)_libraryPlaylistWithGlobalID:(id)arg0 ;
-(id)_mediaLibrary;
-(id)_pendingUpdateRecordForKey:(id)arg0 inDictionary:(id)arg1 ;
-(id)_pendingUpdateRecordForPlaylistGlobalID:(id)arg0 ;
-(id)_pendingUpdateRecordForStoreAdamID:(NSInteger)arg0 ;
-(id)init;
-(void)_deviceMediaLibraryDidChangeNotification:(id)arg0 ;
-(void)_libraryPathDidChangeForTasteController:(id)arg0 ;
-(void)_removePendingUpdateRecordForPlaylistGlobalID:(id)arg0 token:(id)arg1 ;
-(void)_removePendingUpdateRecordForStoreAdamID:(NSInteger)arg0 token:(id)arg1 ;
-(void)setTasteType:(NSInteger)arg0 forMediaEntity:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)setTasteType:(NSInteger)arg0 forModel:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)setTasteType:(NSInteger)arg0 forPlaylistGlobalID:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)setTasteType:(NSInteger)arg0 forStoreAdamID:(NSInteger)arg1 withContentType:(NSInteger)arg2 completionHandler:(id)arg3 ;


@end


#endif