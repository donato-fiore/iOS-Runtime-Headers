// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDCLOUDSYNCCLOUDSTATE_H
#define HDCLOUDSYNCCLOUDSTATE_H

@class NSArray, NSSet, NSDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "HDCloudSyncZone.h"

@interface HDCloudSyncCloudState : NSObject <NSCopying>



@property (readonly, nonatomic) int minimumSupportedProtocolVersion; // ivar: _minimumSupportedProtocolVersion
@property (readonly, nonatomic) HDCloudSyncZone *primaryPushZone; // ivar: _primaryPushZone
@property (readonly, copy, nonatomic) NSArray *pullTargets;
@property (readonly, nonatomic) NSSet *pullZones;
@property (readonly, copy, nonatomic) NSArray *pushTargets;
@property (readonly, nonatomic) NSSet *seizedZones;
@property (readonly, copy, nonatomic) NSArray *targets; // ivar: _targets
@property (readonly, copy, nonatomic) NSDictionary *zonesByIdentifier; // ivar: _zonesByIdentifier


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)cloudStateByAddingZone:(id)arg0 ;
-(id)cloudStateByAddingZones:(id)arg0 ;
-(id)cloudStateByRemovingZones:(id)arg0 ;
-(id)cloudStateByReplacingTargets:(id)arg0 ;
-(id)cloudStateWithTargets:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)detailedDescription;
-(id)init;
-(id)initWithZones:(id)arg0 ;
-(id)initWithZones:(id)arg0 targets:(id)arg1 ;
-(id)initWithZonesByIdentifier:(id)arg0 ;
-(id)initWithZonesByIdentifier:(id)arg0 targets:(id)arg1 ;
-(id)masterZoneForContainerID:(id)arg0 ;
-(id)unifiedSyncZoneForContainerID:(id)arg0 ;
-(id)zoneForRecordID:(id)arg0 containerIdentifier:(id)arg1 ;
-(id)zonesForContainerID:(id)arg0 ;


@end


#endif