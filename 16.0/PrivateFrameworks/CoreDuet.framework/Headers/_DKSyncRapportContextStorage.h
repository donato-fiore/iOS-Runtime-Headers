// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _DKSYNCRAPPORTCONTEXTSTORAGE_H
#define _DKSYNCRAPPORTCONTEXTSTORAGE_H

@class DKSyncRapportStorage;
@protocol _DKSyncRemoteContextStorage, _DKSyncRemoteContextStorageDelegate;



@interface _DKSyncRapportContextStorage : DKSyncRapportStorage <_DKSyncRemoteContextStorage>



@property (retain, nonatomic) NSObject<_DKSyncRemoteContextStorageDelegate> *delegate; // ivar: _delegate


+(id)sharedInstance;
-(void)fetchContextValuesFromPeer:(id)arg0 forKeyPaths:(id)arg1 highPriority:(BOOL)arg2 completion:(id)arg3 ;
-(void)registerRequestIDsWithClient:(id)arg0 ;
-(void)sendContextValuesToPeer:(id)arg0 registrationIdentifier:(id)arg1 archivedObjects:(id)arg2 highPriority:(BOOL)arg3 completion:(id)arg4 ;
-(void)subscribeToContextValueChangeNotificationsFromPeer:(id)arg0 registrationIdentifier:(id)arg1 predicate:(id)arg2 highPriority:(BOOL)arg3 completion:(id)arg4 ;
-(void)unsubscribeFromContextValueChangeNotificationsFromPeer:(id)arg0 registrationIdentifier:(id)arg1 predicate:(id)arg2 highPriority:(BOOL)arg3 completion:(id)arg4 ;


@end


#endif