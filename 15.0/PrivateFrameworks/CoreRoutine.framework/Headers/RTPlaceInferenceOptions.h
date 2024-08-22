// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RTPLACEINFERENCEOPTIONS_H
#define RTPLACEINFERENCEOPTIONS_H

@class NSArray, NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "RTLocation.h"

@interface RTPlaceInferenceOptions : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSArray *accessPoints; // ivar: _accessPoints
@property (readonly, nonatomic) CGFloat distance; // ivar: _distance
@property (readonly, nonatomic) NSDate *endDate; // ivar: _endDate
@property (readonly, nonatomic) NSUInteger fidelityPolicy; // ivar: _fidelityPolicy
@property (readonly, nonatomic) NSInteger limit; // ivar: _limit
@property (readonly, nonatomic) RTLocation *location; // ivar: _location
@property (readonly, nonatomic) NSArray *locations; // ivar: _locations
@property (readonly, nonatomic) NSDate *startDate; // ivar: _startDate
@property (readonly, nonatomic) BOOL useBackground; // ivar: _useBackground


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFidelityPolicy:(NSUInteger)arg0 locations:(id)arg1 accessPoints:(id)arg2 ;
-(id)initWithFidelityPolicy:(NSUInteger)arg0 locations:(id)arg1 accessPoints:(id)arg2 distance:(CGFloat)arg3 location:(id)arg4 startDate:(id)arg5 endDate:(id)arg6 limit:(NSInteger)arg7 useBackground:(BOOL)arg8 ;
-(id)initWithinDistance:(CGFloat)arg0 location:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif