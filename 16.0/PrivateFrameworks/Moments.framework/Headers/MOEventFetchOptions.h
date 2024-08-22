// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MOEVENTFETCHOPTIONS_H
#define MOEVENTFETCHOPTIONS_H

@class NSDateInterval, NSNumber;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MOEventFetchOptions : NSObject <NSSecureCoding>



@property (readonly, nonatomic) BOOL ascending; // ivar: _ascending
@property (readonly, nonatomic) NSUInteger category; // ivar: _category
@property (copy, nonatomic) NSDateInterval *dateInterval; // ivar: _dateInterval
@property (readonly, nonatomic) NSNumber *limit; // ivar: _limit


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToFetchOptions:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDateInterval:(id)arg0 ascending:(BOOL)arg1 category:(NSUInteger)arg2 limit:(id)arg3 ;
-(id)initWithDateInterval:(id)arg0 ascending:(BOOL)arg1 limit:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif