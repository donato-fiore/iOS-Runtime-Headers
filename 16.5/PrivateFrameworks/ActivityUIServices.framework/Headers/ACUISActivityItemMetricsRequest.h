// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ACUISACTIVITYITEMMETRICSREQUEST_H
#define ACUISACTIVITYITEMMETRICSREQUEST_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "_TtC18ActivityUIServices26ActivityItemMetricsRequest.h"
#import "ACUISEdgeInsets.h"
#import "ACUISSizeDimensionRequest.h"

@interface ACUISActivityItemMetricsRequest : NSObject <NSCopying, NSSecureCoding>

 {
    _TtC18ActivityUIServices26ActivityItemMetricsRequest *_itemMetricsRequest;
}


@property (nonatomic) CGFloat clipMargin;
@property (nonatomic) CGFloat cornerRadius;
@property (nonatomic) ACUISEdgeInsets *edgeInsets;
@property (copy, nonatomic) ACUISSizeDimensionRequest *heightRequest;
@property (copy, nonatomic) ACUISSizeDimensionRequest *widthRequest;


+(BOOL)supportsSecureCoding;
+(id)new;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_activityItemMetricsRequest;
-(id)_initWithItemMetrics:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithWidth:(id)arg0 height:(id)arg1 cornerRadius:(CGFloat)arg2 ;
-(id)initWithWidth:(id)arg0 height:(id)arg1 cornerRadius:(CGFloat)arg2 edgeInsets:(id)arg3 ;
-(id)initWithWidth:(id)arg0 height:(id)arg1 cornerRadius:(CGFloat)arg2 edgeInsets:(id)arg3 clipMargin:(CGFloat)arg4 ;
-(struct CGSize )initialSize;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif