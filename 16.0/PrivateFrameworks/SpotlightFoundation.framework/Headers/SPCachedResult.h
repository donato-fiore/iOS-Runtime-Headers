// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SPCACHEDRESULT_H
#define SPCACHEDRESULT_H

@class NSData, NSDate, NSString;
@protocol SFEngagedResult;

#import <Foundation/Foundation.h>


@interface SPCachedResult : NSObject <SFEngagedResult>



@property (copy, nonatomic) NSData *encodedNormalizedTopic; // ivar: _encodedNormalizedTopic
@property (readonly, copy, nonatomic) NSDate *engagementTime; // ivar: _engagementTime
@property (readonly, nonatomic) CGFloat freshnessScore; // ivar: _freshnessScore
@property (readonly, nonatomic) CGFloat score; // ivar: _score
@property (readonly, copy, nonatomic) NSString *searchString; // ivar: _searchString
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) int type; // ivar: _type


-(id)initWithContactName:(id)arg0 contactIdentifier:(id)arg1 score:(id)arg2 searchString:(id)arg3 ;
-(id)initWithEngagedResult:(id)arg0 ;
-(id)initWithPersonName:(id)arg0 personQueryIdentifier:(id)arg1 score:(id)arg2 searchString:(id)arg3 ;
-(id)initWithResult:(id)arg0 identifier:(id)arg1 bundleIdentifier:(id)arg2 protectionClass:(id)arg3 searchString:(id)arg4 ;
-(id)initWithResult:(id)arg0 topic:(id)arg1 title:(id)arg2 searchString:(id)arg3 ;
-(id)initWithTitle:(id)arg0 type:(int)arg1 score:(id)arg2 searchString:(id)arg3 ;
-(id)recentTopic;
-(id)searchResult;


@end


#endif