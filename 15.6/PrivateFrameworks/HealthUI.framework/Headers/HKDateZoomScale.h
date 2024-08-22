// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKDATEZOOMSCALE_H
#define HKDATEZOOMSCALE_H

@class NSCalendar, NSString;
@protocol HKZoomScale;

#import <Foundation/Foundation.h>

#import "HKValueRange.h"

@interface HKDateZoomScale : NSObject <HKZoomScale>

 {
    CGFloat _previousZoomScale;
    NSInteger _previousZoom;
    HKValueRange *_unitZoomScaleValueRange;
}


@property (retain, nonatomic) NSCalendar *currentCalendar; // ivar: _currentCalendar
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)zoomScaleForRange:(struct HKRange )arg0 ;
-(NSInteger)zoomForZoomScale:(CGFloat)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCurrentCalendar:(id)arg0 ;
-(id)maxDate;
-(id)minDate;
-(id)unitZoomScaleValueRange;
-(void)setUnitZoomScaleValueRangeForTimeInterval:(CGFloat)arg0 ;


@end


#endif