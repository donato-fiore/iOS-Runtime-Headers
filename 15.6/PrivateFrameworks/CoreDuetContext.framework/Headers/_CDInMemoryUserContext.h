// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CDINMEMORYUSERCONTEXT_H
#define _CDINMEMORYUSERCONTEXT_H

@class NSMutableDictionary, NSString, NSMutableArray;
@protocol _CDUserContext, _CDContextInternal, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_CDInMemoryContext.h"

@interface _CDInMemoryUserContext : NSObject <_CDUserContext, _CDContextInternal>



@property (retain, nonatomic) NSMutableDictionary *contexts; // ivar: _contexts
@property (retain, nonatomic) NSString *localDeviceID; // ivar: _localDeviceID
@property (retain, nonatomic) NSMutableArray *pendingAllDeviceRegistrations; // ivar: _pendingAllDeviceRegistrations
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue; // ivar: _syncQueue
@property (retain, nonatomic) _CDInMemoryContext *userContext; // ivar: _userContext


-(BOOL)addObjects:(id)arg0 andRemoveObjects:(id)arg1 fromArrayAtKeyPath:(id)arg2 ;
-(BOOL)addObjects:(id)arg0 toArrayAtKeyPath:(id)arg1 ;
-(BOOL)evaluatePredicate:(id)arg0 ;
-(BOOL)hasKnowledgeOfContextualKeyPath:(id)arg0 ;
-(BOOL)hasMultiDeviceRegistrations;
-(BOOL)removeObjects:(id)arg0 fromArrayAtKeyPath:(id)arg1 ;
-(BOOL)setObject:(id)arg0 forContextualKeyPath:(id)arg1 ;
-(BOOL)setObject:(id)arg0 forKeyedSubscript:(id)arg1 ;
-(BOOL)unsafe_hasMultiDeviceRegistrations;
-(id)addObjects:(id)arg0 andRemoveObjects:(id)arg1 fromArrayAtKeyPath:(id)arg2 valueDidChange:(*BOOL)arg3 ;
-(id)allDeviceIDs;
-(id)allDevices;
-(id)contextForDeviceWithDeviceID:(id)arg0 ;
-(id)contextForKeyPath:(id)arg0 ;
-(id)description;
-(id)deviceWithDeviceID:(id)arg0 fromDevices:(id)arg1 ;
-(id)init;
-(id)lastModifiedDateForContextualKeyPath:(id)arg0 ;
-(id)localContext;
-(id)namedDeviceIDsFromPredicate:(id)arg0 ;
-(id)objectForContextualKeyPath:(id)arg0 ;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(id)propertiesForContextualKeyPath:(id)arg0 ;
-(id)remoteDeviceIDs;
-(id)removeObjectsMatchingPredicate:(id)arg0 fromArrayAtKeyPath:(id)arg1 ;
-(id)removeObjectsMatchingPredicate:(id)arg0 fromArrayAtKeyPath:(id)arg1 removedObjects:(*id)arg2 ;
-(id)setObject:(id)arg0 returningMetadataForContextualKeyPath:(id)arg1 ;
-(id)unsafe_contextForDeviceWithDeviceID:(id)arg0 ;
-(id)unsafe_multiDeviceRegistrations;
-(id)unsafe_multiDeviceRegistrationsByDeviceID;
-(id)unsafe_remoteDeviceIDs;
-(id)unsafe_remoteDeviceIDsForRemoteUserContextProxySourceDeviceUUID:(id)arg0 ;
-(id)unsafe_remoteDevices;
-(id)unsafe_remoteDevicesByDeviceIDForRemoteUserContextProxySourceDeviceUUID:(id)arg0 ;
-(id)unsafe_remoteDevicesForRemoteUserContextProxySourceDeviceUUID:(id)arg0 ;
-(id)unsafe_remoteUserContextProxySourceDeviceUUIDs;
-(id)valuesForKeyPaths:(id)arg0 ;
-(id)valuesForKeyPaths:(id)arg0 inContextsMatchingPredicate:(id)arg1 ;
-(void)activateDevices:(id)arg0 remoteUserContextProxySourceDeviceUUID:(id)arg1 ;
-(void)deactivateDevices:(id)arg0 remoteUserContextProxySourceDeviceUUID:(id)arg1 ;
-(void)deregisterCallback:(id)arg0 ;
-(void)registerCallback:(id)arg0 ;
-(void)setContextValue:(id)arg0 forContextualKeyPath:(id)arg1 ;


@end


#endif