// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef COMESHNODE_H
#define COMESHNODE_H

@class NSUUID, NSString, RPCompanionLinkClient, NSMutableDictionary;
@protocol NSCopying, COMeshNodeDelegate;

#import <Foundation/Foundation.h>

#import "COMeshLocalNode.h"
#import "COConstituent.h"

@interface COMeshNode : NSObject <NSCopying>



@property (readonly, nonatomic) NSUUID *HomeKitIdentifier;
@property (readonly, nonatomic) NSString *IDSIdentifier;
@property (nonatomic) CGFloat averageRequestTime; // ivar: _averageRequestTime
@property (readonly, nonatomic) RPCompanionLinkClient *client; // ivar: _client
@property (readonly, copy, nonatomic) NSMutableDictionary *counters; // ivar: _counters
@property (weak, nonatomic) NSObject<COMeshNodeDelegate> *delegate; // ivar: _delegate
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (copy, nonatomic) NSString *meshName; // ivar: _meshName
@property (weak, nonatomic) COMeshLocalNode *parent; // ivar: _parent
@property (copy, nonatomic) id *recorder; // ivar: _recorder
@property (retain, nonatomic) COConstituent *remote; // ivar: _remote
@property (nonatomic) NSUInteger requestCount; // ivar: _requestCount
@property (readonly, nonatomic) COConstituent *source; // ivar: _source


-(NSUInteger)hash;
-(id)_commandPayloadFromRapportRepresentation:(id)arg0 ;
-(id)_eventIDForClass:(Class)arg0 ;
-(id)_serializedDataForCommand:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCompanionLinkClient:(id)arg0 source:(id)arg1 ;
// -(void)_handleResponseToRequest:(id)arg0 rapportRepresentation:(id)arg1 error:(id)arg2 responseCallback:(id)arg3 at:(unk)arg4  ;
-(void)activate;
-(void)invalidate;
-(void)sendMeshCommand:(id)arg0 ;
-(void)sendMeshRequest:(id)arg0 ;
-(void)sendMeshRequest:(id)arg0 responseCallback:(id)arg1 ;


@end


#endif