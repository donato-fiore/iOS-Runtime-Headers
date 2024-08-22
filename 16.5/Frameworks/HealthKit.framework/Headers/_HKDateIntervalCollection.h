// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _HKDATEINTERVALCOLLECTION_H
#define _HKDATEINTERVALCOLLECTION_H

@class NSDate, NSDateComponents;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _HKDateIntervalCollection : NSObject <NSCopying, NSSecureCoding>

 {
    CGFloat _approximateIntervalDuration;
}


@property (readonly, copy, nonatomic) NSDate *anchorDate; // ivar: _anchorDate
@property (readonly, copy, nonatomic) NSDateComponents *intervalComponents; // ivar: _intervalComponents


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dateIntervalAtIndex:(NSInteger)arg0 ;
-(id)dateIntervalContainingDate:(id)arg0 index:(*NSInteger)arg1 ;
-(id)dateIntervalForIntervalsContainingInterval:(id)arg0 ;
-(id)initWithAnchorDate:(id)arg0 intervalComponents:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif