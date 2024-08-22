// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PARENGAGEDSUGGESTION_H
#define PARENGAGEDSUGGESTION_H

@class NSDate, NSData, NSString;
@protocol NSSecureCoding, SFEngagedSuggestion;

#import <Foundation/Foundation.h>


@interface PAREngagedSuggestion : NSObject <NSSecureCoding, SFEngagedSuggestion>



@property (copy, nonatomic) NSDate *engagementTime; // ivar: _engagementTime
@property (nonatomic) CGFloat freshnessScore; // ivar: _freshnessScore
@property (copy, nonatomic) NSData *localData; // ivar: _localData
@property (nonatomic) CGFloat score; // ivar: _score
@property (copy, nonatomic) NSString *searchString; // ivar: _searchString
@property (copy, nonatomic) NSString *suggestion; // ivar: _suggestion
@property (nonatomic) int type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif