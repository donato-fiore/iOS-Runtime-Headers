// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SALOCALSEARCHBUSINESS_H
#define SALOCALSEARCHBUSINESS_H

@class NSNumber, NSDictionary, NSURL, NSArray, NSString, NSDate;
@protocol SAAceSerializable;


#import "AceObject.h"
#import "SALocalSearchRating.h"

@interface SALocalSearchBusiness : AceObject <SAAceSerializable>



@property (copy, nonatomic) NSNumber *businessId;
@property (copy, nonatomic) NSDictionary *businessIds;
@property (copy, nonatomic) NSURL *businessUrl;
@property (copy, nonatomic) NSArray *categories;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *extSessionGuid;
@property (copy, nonatomic) NSDate *extSessionGuidCreatedTimestamp;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *openingHours;
@property (copy, nonatomic) NSArray *phoneNumbers;
@property (copy, nonatomic) NSURL *photo;
@property (retain, nonatomic) SALocalSearchRating *rating;
@property (copy, nonatomic) NSArray *reviews;
@property (readonly) Class superclass;
@property (nonatomic) NSInteger totalNumberOfReviews;


+(id)business;
+(id)businessWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif