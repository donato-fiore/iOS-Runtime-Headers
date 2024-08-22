// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SALOCALSEARCHSHOWMAPPOINTS_H
#define SALOCALSEARCHSHOWMAPPOINTS_H

@class NSDate, NSString, NSNumber;


#import "SADomainCommand.h"
#import "SALocalSearchCarRouteOptions.h"
#import "SALocalSearchMapItem.h"
#import "SALocalSearchMapItemList.h"

@interface SALocalSearchShowMapPoints : SADomainCommand

@property (copy, nonatomic) NSDate *arrivalDate;
@property (retain, nonatomic) SALocalSearchCarRouteOptions *carRouteOptions;
@property (nonatomic) BOOL chainResultSet;
@property (copy, nonatomic) NSDate *departureDate;
@property (copy, nonatomic) NSString *directionsType;
@property (retain, nonatomic) SALocalSearchMapItem *itemDestination;
@property (retain, nonatomic) SALocalSearchMapItem *itemSource;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *preferredDirectionsMode;
@property (copy, nonatomic) NSNumber *regionOfInterestRadiusInMiles;
@property (nonatomic) BOOL searchAlongRoute;
@property (retain, nonatomic) SALocalSearchMapItemList *searchItems;
@property (nonatomic) BOOL showDirections;
@property (nonatomic) BOOL showTraffic;
@property (nonatomic) BOOL suppressNavigation;


+(id)showMapPoints;
+(id)showMapPointsWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif