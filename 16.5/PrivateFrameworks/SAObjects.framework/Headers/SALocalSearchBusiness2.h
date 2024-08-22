// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SALOCALSEARCHBUSINESS2_H
#define SALOCALSEARCHBUSINESS2_H

@class NSURL, NSArray, NSString, NSDate, NSDictionary, NSData;
@protocol SAAceSerializable;


#import "SADomainObject.h"
#import "SALocation.h"
#import "SALocalSearchOperationHours.h"

@interface SALocalSearchBusiness2 : SADomainObject <SAAceSerializable>



@property (retain, nonatomic) SALocation *address;
@property (copy, nonatomic) NSURL *businessUrl;
@property (copy, nonatomic) NSArray *categories;
@property (copy, nonatomic) NSArray *commands;
@property (copy, nonatomic) NSString *currencySymbol;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *descriptionText;
@property (copy, nonatomic) NSString *extSessionGuid;
@property (copy, nonatomic) NSDate *extSessionGuidCreatedTimestamp;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSDictionary *identifierMap;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSArray *offerLists;
@property (retain, nonatomic) SALocalSearchOperationHours *operationHours;
@property (copy, nonatomic) NSString *phoneNumber;
@property (copy, nonatomic) NSArray *photoList;
@property (copy, nonatomic) NSData *placeData2;
@property (copy, nonatomic) NSString *priceRange;
@property (copy, nonatomic) NSArray *reviewList;
@property (readonly) Class superclass;


+(id)business2;
+(id)business2WithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif