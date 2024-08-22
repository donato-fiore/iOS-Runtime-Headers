// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STUSAGEITEM_H
#define STUSAGEITEM_H

@class NSString, UIColor, UIImage, NSNumber, NSDate, STUsageTrustIdentifier;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface STUsageItem : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *budgetItemIdentifier;
@property (copy, nonatomic) NSString *categoryIdentifier; // ivar: _categoryIdentifier
@property (retain, nonatomic) UIColor *color; // ivar: _color
@property (readonly, copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) UIImage *image;
@property (nonatomic) NSUInteger itemType; // ivar: _itemType
@property (copy, nonatomic) NSNumber *maxUsage; // ivar: _maxUsage
@property (copy, nonatomic) NSNumber *minUsage; // ivar: _minUsage
@property (copy, nonatomic) NSDate *startDate; // ivar: _startDate
@property (nonatomic) NSUInteger timePeriod; // ivar: _timePeriod
@property (copy, nonatomic) NSNumber *totalUsage; // ivar: _totalUsage
@property (copy, nonatomic) STUsageTrustIdentifier *trustIdentifier; // ivar: _trustIdentifier
@property (readonly, nonatomic) BOOL usageTrusted;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif