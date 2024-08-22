// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TPPEER_H
#define TPPEER_H

@class NSString, NSSet;

#import <Foundation/Foundation.h>

#import "TPPeerDynamicInfo.h"
#import "TPPeerPermanentInfo.h"
#import "TPPeerStableInfo.h"

@interface TPPeer : NSObject

@property (readonly, nonatomic) TPPeerDynamicInfo *dynamicInfo; // ivar: _dynamicInfo
@property (readonly, nonatomic) NSString *peerID;
@property (readonly, nonatomic) TPPeerPermanentInfo *permanentInfo; // ivar: _permanentInfo
@property (readonly, nonatomic) TPPeerStableInfo *stableInfo; // ivar: _stableInfo
@property (readonly, nonatomic) NSSet *trustedPeerIDs;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithPermanentInfo:(id)arg0 ;
-(id)initWithPermanentInfo:(id)arg0 stableInfo:(id)arg1 dynamicInfo:(id)arg2 ;
-(id)peerWithUpdatedDynamicInfo:(id)arg0 error:(*id)arg1 ;
-(id)peerWithUpdatedStableInfo:(id)arg0 error:(*id)arg1 ;


@end


#endif