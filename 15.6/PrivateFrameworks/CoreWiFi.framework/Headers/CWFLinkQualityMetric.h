// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CWFLINKQUALITYMETRIC_H
#define CWFLINKQUALITYMETRIC_H

@class NSData, NSDate;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CWFLinkQualityMetric : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) float CCA;
@property (readonly, nonatomic) NSInteger RSSI;
@property (copy, nonatomic) NSData *linkQualityMetricData; // ivar: _linkQualityMetricData
@property (readonly, nonatomic) NSInteger noise;
@property (readonly, nonatomic) CGFloat rxRate;
@property (readonly, nonatomic) CGFloat txRate;
@property (copy, nonatomic) NSDate *updatedAt; // ivar: _updatedAt


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToLinkQualityMetric:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif