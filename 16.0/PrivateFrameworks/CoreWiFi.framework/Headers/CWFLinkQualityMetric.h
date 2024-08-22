// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CWFLINKQUALITYMETRIC_H
#define CWFLINKQUALITYMETRIC_H

@class NSString, NSData, NSDate;
@protocol CWFJSONEncodable, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CWFLinkQualityMetric : NSObject <CWFJSONEncodable, NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSUInteger CCA;
@property (readonly, nonatomic) NSInteger RSSI;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSData *linkQualityMetricData; // ivar: _linkQualityMetricData
@property (readonly, nonatomic) NSInteger noise;
@property (readonly, nonatomic) CGFloat rxRate;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat txRate;
@property (copy, nonatomic) NSDate *updatedAt; // ivar: _updatedAt


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToLinkQualityMetric:(id)arg0 ;
-(id)JSONCompatibleKeyValueMap;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif