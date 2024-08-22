// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SALOCALSEARCHMAPITEM_H
#define SALOCALSEARCHMAPITEM_H

@class NSArray, NSString, NSNumber, NSDate, NSData;
@protocol SAAceSerializable;


#import "SADomainObject.h"
#import "SADistance.h"
#import "SALocation.h"

@interface SALocalSearchMapItem : SADomainObject

@property (copy, nonatomic) NSArray *attributions;
@property (retain, nonatomic) NSObject<SAAceSerializable> *detail;
@property (copy, nonatomic) NSString *detailType;
@property (copy, nonatomic) NSString *directionRole;
@property (retain, nonatomic) SADistance *distance;
@property (copy, nonatomic) NSNumber *distanceInMiles;
@property (copy, nonatomic) NSString *extSessionGuid;
@property (copy, nonatomic) NSDate *extSessionGuidCreatedTimestamp;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSNumber *localSearchProviderId;
@property (retain, nonatomic) SALocation *location;
@property (copy, nonatomic) NSData *placeData;
@property (copy, nonatomic) NSData *placeData2;
@property (copy, nonatomic) NSNumber *placeId;
@property (copy, nonatomic) NSData *resultDetourInfoData;
@property (copy, nonatomic) NSString *spokenAddress;
@property (copy, nonatomic) NSString *spokenName;
@property (copy, nonatomic) NSString *suggestionsEntryType;


+(id)mapItem;
+(id)mapItemWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif