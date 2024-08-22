// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SNUIACTIVITYITEMMETRICSREQUEST_H
#define SNUIACTIVITYITEMMETRICSREQUEST_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SNUISizeDimensionRequest.h"
#import "_TtC17SessionUIServices26ActivityItemMetricsRequest.h"

@interface SNUIActivityItemMetricsRequest : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (copy, nonatomic) SNUISizeDimensionRequest *heightRequest;
@property (copy, nonatomic) _TtC17SessionUIServices26ActivityItemMetricsRequest *itemMetricsRequest; // ivar: _itemMetricsRequest
@property (copy, nonatomic) SNUISizeDimensionRequest *widthRequest;


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