// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SALOCALSEARCHREVIEWLIST_H
#define SALOCALSEARCHREVIEWLIST_H

@class NSString, NSURL, NSArray, NSNumber;
@protocol SAAceSerializable;


#import "AceObject.h"
#import "SALocalSearchRating.h"

@interface SALocalSearchReviewList : AceObject <SAAceSerializable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSURL *providerId;
@property (copy, nonatomic) NSString *providerId2;
@property (retain, nonatomic) SALocalSearchRating *rating;
@property (copy, nonatomic) NSArray *selectReviews;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSNumber *totalReviewCount;


+(id)reviewList;
+(id)reviewListWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif