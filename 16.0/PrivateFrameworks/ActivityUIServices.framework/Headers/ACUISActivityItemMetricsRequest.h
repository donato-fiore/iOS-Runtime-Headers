// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ACUISACTIVITYITEMMETRICSREQUEST_H
#define ACUISACTIVITYITEMMETRICSREQUEST_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "ACUISSizeDimensionRequest.h"
#import "_TtC18ActivityUIServices26ActivityItemMetricsRequest.h"

@interface ACUISActivityItemMetricsRequest : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (copy, nonatomic) ACUISSizeDimensionRequest *heightRequest;
@property (copy, nonatomic) _TtC18ActivityUIServices26ActivityItemMetricsRequest *itemMetricsRequest; // ivar: _itemMetricsRequest
@property (copy, nonatomic) ACUISSizeDimensionRequest *widthRequest;


+(BOOL)supportsSecureCoding;
-(id)_activityItemMetricsRequest;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithItemMetrics:(id)arg0 ;
-(id)initWithWidth:(id)arg0 height:(id)arg1 cornerRadius:(CGFloat)arg2 ;
-(struct CGSize )initialSize;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif