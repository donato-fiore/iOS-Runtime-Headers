// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXMLAYOUTITEM_H
#define AXMLAYOUTITEM_H


#import <Foundation/Foundation.h>


@interface AXMLayoutItem : NSObject

@property (readonly, nonatomic) CGFloat bottom;
@property (readonly, nonatomic) CGRect frame;
@property (readonly, nonatomic) CGFloat height;
@property (readonly, nonatomic) CGFloat left;
@property (readonly, nonatomic) CGRect normalizedFrame;
@property (readonly, nonatomic) CGFloat right;
@property (readonly, nonatomic) CGFloat top;
@property (readonly, nonatomic) CGFloat width;


+(struct CGRect )boundingFrameForItems:(id)arg0 ;
+(struct CGRect )normalizedBoundingFrameForItem:(id)arg0 ;
+(struct CGRect )normalizedBoundingFrameForItems:(id)arg0 ;
-(BOOL)metric:(NSInteger)arg0 inProximityOfMetric:(NSInteger)arg1 item:(id)arg2 threshold:(CGFloat)arg3 ;
-(CGFloat)_floatValueForMetric:(NSInteger)arg0 ;
-(NSInteger)_metricTypeForMetric:(NSInteger)arg0 ;
-(id)description;
-(struct CGRect )_rectValueForMetric:(NSInteger)arg0 ;


@end


#endif