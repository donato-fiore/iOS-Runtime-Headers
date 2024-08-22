// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ESDACCESSMANAGER_H
#define ESDACCESSMANAGER_H

@class DADisableableObject, NSMutableArray;
@protocol OS_xpc_object;



@interface ESDAccessManager : DADisableableObject

@property (retain, nonatomic) NSMutableArray *clients; // ivar: _clients
@property (retain, nonatomic) NSObject<OS_xpc_object> *exchangeConnection; // ivar: _exchangeConnection
@property (retain, nonatomic) NSObject<OS_xpc_object> *mainConnection; // ivar: _mainConnection


+(id)sharedManager;
-(BOOL)isAccountID:(id)arg0 folderID:(id)arg1 watchedByClientBesides:(id)arg2 ;
-(id)_init;
-(id)init;
-(void)_setupServerConnection;
-(void)addPersistentClientWithAccountID:(id)arg0 clientID:(id)arg1 watchedIDs:(id)arg2 ;
-(void)removeClient:(id)arg0 ;


@end


#endif