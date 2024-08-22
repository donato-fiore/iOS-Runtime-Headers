// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKMCRECENTBASALBODYTEMPERATURE_H
#define HKMCRECENTBASALBODYTEMPERATURE_H

@class HKQuantity, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HKMCRecentBasalBodyTemperature : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) HKQuantity *lowerQuantile; // ivar: _lowerQuantile
@property (readonly, copy, nonatomic) HKQuantity *median; // ivar: _median
@property (readonly, copy, nonatomic) HKQuantity *mostRecent; // ivar: _mostRecent
@property (readonly, copy, nonatomic) NSString *shortDescription;
@property (readonly, copy, nonatomic) HKQuantity *upperQuantile; // ivar: _upperQuantile


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMostRecent:(id)arg0 upperQuantile:(id)arg1 median:(id)arg2 lowerQuantile:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif