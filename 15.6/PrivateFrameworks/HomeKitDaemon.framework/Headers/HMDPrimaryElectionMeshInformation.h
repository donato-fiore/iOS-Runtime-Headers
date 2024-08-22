// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDPRIMARYELECTIONMESHINFORMATION_H
#define HMDPRIMARYELECTIONMESHINFORMATION_H


#import <Foundation/Foundation.h>

#import "HMDResidentDevice.h"

@interface HMDPrimaryElectionMeshInformation : NSObject

@property (readonly, nonatomic) HMDResidentDevice *leader; // ivar: _leader
@property (readonly, nonatomic) HMDResidentDevice *primary; // ivar: _primary
@property (readonly, nonatomic) NSUInteger reachableIPAccessories; // ivar: _reachableIPAccessories
@property (readonly, nonatomic) NSUInteger residentsInMesh; // ivar: _residentsInMesh
@property (readonly, nonatomic) HMDResidentDevice *responder; // ivar: _responder


+(id)meshInformationFromMessagePayload:(id)arg0 home:(id)arg1 ;
+(id)meshInformationWithMeshController:(id)arg0 home:(id)arg1 ;
-(id)description;
-(id)initWithResponder:(id)arg0 leader:(id)arg1 primary:(id)arg2 reachableIPAccessories:(NSUInteger)arg3 residentsInMesh:(NSUInteger)arg4 ;
-(id)toMessagePayload;


@end


#endif