// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SALOCALSEARCHROUTE_H
#define SALOCALSEARCHROUTE_H

@class NSString, NSData, NSArray;
@protocol SABackgroundContextObject;


#import "AceObject.h"

@interface SALocalSearchRoute : AceObject <SABackgroundContextObject>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSData *etaFilter;
@property (copy, nonatomic) NSData *evChargingMetadata;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSData *originalWaypointRoute;
@property (copy, nonatomic) NSData *routeAsZilchBinary;
@property (copy, nonatomic) NSData *routeId;
@property (copy, nonatomic) NSArray *routeIncidentOffsets;
@property (copy, nonatomic) NSArray *routeIncidents;
@property (copy, nonatomic) NSData *routeTrafficIncident;
@property (copy, nonatomic) NSData *sessionState;
@property (readonly) Class superclass;


+(id)route;
+(id)routeWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif