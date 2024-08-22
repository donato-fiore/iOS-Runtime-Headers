// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BSSMO_H
#define BSSMO_H

@class NSManagedObject, NSUUID, NSString, NSSet, NSDate;

#import <Foundation/Foundation.h>

#import "BlacklistMO.h"
#import "NetworkMO.h"

@interface BSSMO : NSManagedObject

@property (copy, nonatomic) NSUUID *apPhysicalScopeId;
@property (copy, nonatomic) NSUUID *apid;
@property (nonatomic) short autoLeaveRssi;
@property (nonatomic) BOOL beaconMetricSubmitted;
@property (retain, nonatomic) BlacklistMO *blacklist;
@property (copy, nonatomic) NSString *bssid;
@property (nonatomic) short channel;
@property (nonatomic) short disBcnLossCount;
@property (nonatomic) short disTrgDisCount;
@property (nonatomic) short disUsrForcedInWeakRssiCount;
@property (retain, nonatomic) NSSet *geoTag;
@property (copy, nonatomic) NSUUID *idUsedInMetric;
@property (nonatomic) BOOL isEdgeForJoin;
@property (nonatomic) BOOL isEdgeForLeave;
@property (nonatomic) BOOL isTCPGood;
@property (retain, nonatomic) NSSet *joins;
@property (copy, nonatomic) NSDate *lastSeen;
@property (retain, nonatomic) NSSet *leaves;
@property (nonatomic) BOOL manualJoinAfterAutoLeave;
@property (retain, nonatomic) NSObject *neighborBSSIDs;
@property (retain, nonatomic) NSObject *neighborChannels;
@property (retain, nonatomic) NetworkMO *network;
@property (retain, nonatomic) NSObject *parsedBeacon;
@property (nonatomic) int phyMode;
@property (nonatomic) short roamTriggerRssi;
@property (retain, nonatomic) NSSet *roamsFrom;
@property (retain, nonatomic) NSSet *roamsTo;
@property (retain, nonatomic) NSSet *scanResult;
@property (retain, nonatomic) NSSet *scansFrom;
@property (retain, nonatomic) NSObject *unparsedBeacon;


+(BOOL)coalesceBssidsIntoDeployment:(id)arg0 moc:(id)arg1 ;
+(BOOL)setBssManagedObjectPropertyValueForKey:(id)arg0 forKey:(id)arg1 withValue:(id)arg2 ;
+(NSUInteger)numBssInBand:(id)arg0 bandIs24:(BOOL)arg1 moc:(id)arg2 ;
+(id)allBssidsForSsid:(id)arg0 moc:(id)arg1 ;
+(id)allSsidsForBssid:(id)arg0 moc:(id)arg1 ;
+(id)bssManagedObjectPropertyValue:(id)arg0 forKey:(id)arg1 ;
+(id)copyBssidsForDeployment:(id)arg0 deploymentUuid:(id)arg1 moc:(id)arg2 ;
+(id)copyDeploymentUuidsForSsid:(id)arg0 moc:(id)arg1 ;
+(id)entityName;
+(id)fetchRequest;
+(id)generateInstance:(id)arg0 ssid:(id)arg1 created:(*BOOL)arg2 moc:(id)arg3 ;
+(id)getDeploymentUuidForBssids:(id)arg0 moc:(id)arg1 ;
+(id)getInstance:(id)arg0 ssid:(id)arg1 moc:(id)arg2 ;


@end


#endif