// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PARENGAGEDRESULT_H
#define PARENGAGEDRESULT_H

@class NSData, NSDate, NSString;
@protocol NSSecureCoding, SFEngagedResult;

#import <Foundation/Foundation.h>


@interface PAREngagedResult : NSObject <NSSecureCoding, SFEngagedResult>



@property (copy, nonatomic) NSData *encodedNormalizedTopic; // ivar: _encodedNormalizedTopic
@property (copy, nonatomic) NSDate *engagementTime; // ivar: _engagementTime
@property (nonatomic) CGFloat freshnessScore; // ivar: _freshnessScore
@property (nonatomic) CGFloat score; // ivar: _score
@property (copy, nonatomic) NSString *searchString; // ivar: _searchString
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (nonatomic) int type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif