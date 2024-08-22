// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef COMESHNODE_H
#define COMESHNODE_H

@class NSUUID, NSString, RPCompanionLinkClient, NSMutableDictionary, COClusterMemberRoleSnapshot;
@protocol NSCopying, COMeshNodeDelegate;

#import <Foundation/Foundation.h>

#import "CODiscoveryRecord.h"
#import "COMeshLocalNode.h"
#import "COConstituent.h"

@interface COMeshNode : NSObject <NSCopying>

 {
    os_unfair_lock_s _lock;
}


@property (readonly, nonatomic) NSUUID *HomeKitIdentifier;
@property (readonly, nonatomic) NSString *IDSIdentifier; // ivar: _IDSIdentifier
@property (nonatomic) CGFloat averageRequestTime; // ivar: _averageRequestTime
@property (readonly, nonatomic) RPCompanionLinkClient *client; // ivar: _client
@property (nonatomic) NSUInteger connectionType; // ivar: _connectionType
@property (readonly, copy, nonatomic) NSMutableDictionary *counters; // ivar: _counters
@property (weak, nonatomic) NSObject<COMeshNodeDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) CODiscoveryRecord *discoveryRecord; // ivar: _discoveryRecord
@property (nonatomic) NSUInteger discoveryType; // ivar: _discoveryType
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (nonatomic) BOOL linkActivated; // ivar: _linkActivated
@property (retain, nonatomic) COClusterMemberRoleSnapshot *memberSnapshot; // ivar: _memberSnapshot
@property (copy, nonatomic) NSString *meshName; // ivar: _meshName
@property (nonatomic) BOOL nodeActivated; // ivar: _nodeActivated
@property (weak, nonatomic) COMeshLocalNode *parent; // ivar: _parent
@property (copy, nonatomic) id *recorder; // ivar: _recorder
@property (retain, nonatomic) COConstituent *remote; // ivar: _remote
@property (nonatomic) NSUInteger requestCount; // ivar: _requestCount
@property (readonly, nonatomic) COConstituent *source; // ivar: _source


+(void)_commandPayloadFromRapportRepresentation:(id)arg0 result:(id)arg1 ;
-(BOOL)_validateSource:(id)arg0 ;
-(NSUInteger)hash;
-(id)_commandPayloadFromRapportRepresentation:(id)arg0 ;
-(id)_eventIDForClass:(Class)arg0 ;
-(id)_serializedDataForCommand:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCompanionLinkClient:(id)arg0 source:(id)arg1 ;
-(void)_handleActivation:(id)arg0 ;
-(void)_handleDisconnect;
-(void)_handleRPErrorFlagsUpdate;
-(void)_handleRPIsUsingOnDemandConnection;
-(void)_handleRPStateUpdate;
// -(void)_handleResponseToRequest:(id)arg0 rapportRepresentation:(id)arg1 options:(id)arg2 error:(id)arg3 responseCallback:(id)arg4 at:(unk)arg5  ;
-(void)_validateDiscoveryRecord;
-(void)_withLock:(id)arg0 ;
-(void)activate;
-(void)invalidate;
-(void)sendMeshCommand:(id)arg0 ;
-(void)sendMeshRequest:(id)arg0 ;
-(void)sendMeshRequest:(id)arg0 responseCallback:(id)arg1 ;


@end


#endif