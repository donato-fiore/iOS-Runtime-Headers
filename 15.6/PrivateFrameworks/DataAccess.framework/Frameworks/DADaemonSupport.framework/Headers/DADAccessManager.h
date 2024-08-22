// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DADACCESSMANAGER_H
#define DADACCESSMANAGER_H

@class DADisableableObject, NSMutableArray;
@protocol OS_xpc_object;



@interface DADAccessManager : DADisableableObject

@property (retain, nonatomic) NSMutableArray *clients; // ivar: _clients
@property (retain, nonatomic) NSObject<OS_xpc_object> *mainConnection; // ivar: _mainConnection


+(id)sharedManager;
-(BOOL)isAccountID:(id)arg0 folderID:(id)arg1 watchedByClientBesides:(id)arg2 ;
-(id)_init;
-(id)init;
-(id)stateString;
-(void)_setupServerConnection;
-(void)addPersistentClientWithAccountID:(id)arg0 clientID:(id)arg1 watchedIDs:(id)arg2 ;
-(void)dealloc;
-(void)removeClient:(id)arg0 ;


@end


#endif