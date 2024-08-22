// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EMFOLLOWUP_H
#define EMFOLLOWUP_H

@class NSDate, NSString, EFPair;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface EMFollowUp : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) BOOL isActive;
@property (readonly, nonatomic) NSString *jsonStringForModelEvaluationForSuggestions; // ivar: _jsonStringForModelEvaluationForSuggestions
@property (readonly, nonatomic) EFPair *pair; // ivar: _pair
@property (readonly, nonatomic) NSDate *startDate;


+(BOOL)supportsSecureCoding;
-(BOOL)containsDate:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStartDate:(id)arg0 endDate:(id)arg1 jsonStringForModelEvaluationForSuggestions:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif