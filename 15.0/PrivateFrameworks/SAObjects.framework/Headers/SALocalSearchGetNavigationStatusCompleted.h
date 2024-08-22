// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SALOCALSEARCHGETNAVIGATIONSTATUSCOMPLETED_H
#define SALOCALSEARCHGETNAVIGATIONSTATUSCOMPLETED_H

@class NSString;
@protocol SAServerBoundCommand, SABackgroundContextObject;


#import "SABaseCommand.h"
#import "SALocalSearchMapItem.h"
#import "SALocalSearchAceNavigationEta.h"
#import "SALocalSearchMapItemList.h"
#import "SALocalSearchRoute.h"

@interface SALocalSearchGetNavigationStatusCompleted : SABaseCommand <SAServerBoundCommand, SABackgroundContextObject>



@property (copy, nonatomic) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) SALocalSearchMapItem *destination;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SALocalSearchAceNavigationEta *nextManeuverEta;
@property (retain, nonatomic) SALocalSearchAceNavigationEta *overallEta;
@property (retain, nonatomic) SALocalSearchMapItemList *predictedDestinations;
@property (copy, nonatomic) NSString *refId;
@property (retain, nonatomic) SALocalSearchRoute *route;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *trafficIncidentAlertType;
@property (copy, nonatomic) NSString *volume;


+(id)getNavigationStatusCompleted;
+(id)getNavigationStatusCompletedWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif