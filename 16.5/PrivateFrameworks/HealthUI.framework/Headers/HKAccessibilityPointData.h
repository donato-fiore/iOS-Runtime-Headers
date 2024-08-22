// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKACCESSIBILITYPOINTDATA_H
#define HKACCESSIBILITYPOINTDATA_H

@class NSDate, NSString, NSArray;

#import <Foundation/Foundation.h>


@interface HKAccessibilityPointData : NSObject

@property (readonly, nonatomic) NSDate *horizontalDate; // ivar: _horizontalDate
@property (readonly, nonatomic) CGFloat horizontalScreenCoordinate; // ivar: _horizontalScreenCoordinate
@property (readonly, nonatomic) NSString *horizontalTimeCoordinate; // ivar: _horizontalTimeCoordinate
@property (readonly, nonatomic) NSArray *values; // ivar: _values


-(id)description;
-(id)initWithHorizontalScreenCoordinate:(CGFloat)arg0 horizontalTimeCoordinate:(id)arg1 horizontalDate:(id)arg2 values:(id)arg3 ;


@end


#endif