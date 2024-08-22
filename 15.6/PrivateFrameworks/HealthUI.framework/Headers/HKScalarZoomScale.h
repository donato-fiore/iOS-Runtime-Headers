// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKSCALARZOOMSCALE_H
#define HKSCALARZOOMSCALE_H

@class NSString;
@protocol HKZoomScale;

#import <Foundation/Foundation.h>


@interface HKScalarZoomScale : NSObject <HKZoomScale>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(CGFloat)zoomScaleForRange:(struct HKRange )arg0 ;
-(NSInteger)zoomForZoomScale:(CGFloat)arg0 ;
-(id)unitZoomScaleValueRange;
-(void)setUnitZoomScaleValueRangeForTimeInterval:(CGFloat)arg0 ;


@end


#endif