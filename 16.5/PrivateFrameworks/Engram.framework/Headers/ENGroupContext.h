// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ENGROUPCONTEXT_H
#define ENGROUPCONTEXT_H

@class NSArray, NSMutableArray;
@protocol ENGroupContextDataSource, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "ENAccountIdentity.h"

@interface ENGroupContext : NSObject

@property (retain, nonatomic) ENAccountIdentity *accountIdentity; // ivar: _accountIdentity
@property (readonly, nonatomic) NSArray *allMiddlewares; // ivar: _allMiddlewares
@property (retain, nonatomic) NSObject<ENGroupContextDataSource> *dataSource; // ivar: _dataSource
@property (retain, nonatomic) NSMutableArray *middlewares; // ivar: _middlewares
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


+(id)_errorWithNotFoundItems:(id)arg0 ;
+(id)_missingItemsInNotFoundError:(id)arg0 remainingErrors:(*id)arg1 ;
-(id)_middlwareConformingToProtocol:(id)arg0 ;
-(id)_qCacheMiddlewares;
-(id)_qCacheMiddlewaresContainedInCost:(NSInteger)arg0 ;
-(id)_qObserverMiddlewares;
-(id)initWithAccountIdentity:(id)arg0 dataSource:(id)arg1 queue:(id)arg2 ;
-(void)_cacheGroup:(id)arg0 completion:(id)arg1 ;
-(void)_didCacheGroup:(id)arg0 completion:(id)arg1 ;
-(void)_didCreateGroup:(id)arg0 completion:(id)arg1 ;
-(void)_didReceiveDecryptionFailureForGroup:(id)arg0 completion:(id)arg1 ;
-(void)_didReceiveRegistrationIdentityUpdateWithCompletion:(id)arg0 ;
-(void)_didUpdateGroup:(id)arg0 withNewGroup:(id)arg1 completion:(id)arg2 ;
-(void)_dropLocalCache:(id)arg0 ;
-(void)_dropLocalCacheForGroupID:(id)arg0 compeltion:(id)arg1 ;
-(void)_fetchAllLocalKnownGroups:(id)arg0 ;
-(void)_fetchGroupWithGroupID:(id)arg0 skipCache:(BOOL)arg1 completion:(id)arg2 ;
-(void)_groupFromPublicDataRepresentation:(id)arg0 completion:(id)arg1 ;
-(void)_noteDecryptionFailureForGroup:(id)arg0 completion:(id)arg1 ;
-(void)_noteRegistrationIdentityUpdate;
-(void)_participantsForCypher:(id)arg0 completion:(id)arg1 ;
-(void)_publicDataRepresentationForGroup:(id)arg0 completion:(id)arg1 ;
-(void)_qCacheGroup:(id)arg0 toMiddlewares:(id)arg1 completion:(id)arg2 ;
-(void)_qDidCacheGroup:(id)arg0 ;
-(void)_qDidCreateGroup:(id)arg0 ;
-(void)_qDidReceiveDecryptionFailureForGroup:(id)arg0 ;
-(void)_qDidReceiveRegistrationIdentityUpdate;
-(void)_qDidUpdateGroup:(id)arg0 withGroup:(id)arg1 ;
-(void)_qFetchCachedGroupWithGroupID:(id)arg0 completion:(id)arg1 ;
-(void)_qFetchDataSourceGroupWithGroupID:(id)arg0 completion:(id)arg1 ;
-(void)_qUpsertGroupWithParticipants:(id)arg0 previousGroup:(id)arg1 sharedApplicationData:(id)arg2 completion:(id)arg3 ;
-(void)_validateCachedGroup:(id)arg0 isParentOfGroup:(id)arg1 completion:(id)arg2 ;
-(void)appendMiddleware:(id)arg0 ;
-(void)cacheIncomingGroup:(id)arg0 completion:(id)arg1 ;
-(void)createGroupWithParticipants:(id)arg0 sharedApplicationData:(id)arg1 completion:(id)arg2 ;
-(void)fetchGroupWithGroupID:(id)arg0 completion:(id)arg1 ;
-(void)fetchLatestGroupWithStableID:(id)arg0 completion:(id)arg1 ;
-(void)removeMiddleware:(id)arg0 ;
-(void)updateGroup:(id)arg0 withParticipants:(id)arg1 sharedApplicationData:(id)arg2 completion:(id)arg3 ;


@end


#endif