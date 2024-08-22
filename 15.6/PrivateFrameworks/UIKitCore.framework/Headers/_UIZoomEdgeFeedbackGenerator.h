// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIZOOMEDGEFEEDBACKGENERATOR_H
#define _UIZOOMEDGEFEEDBACKGENERATOR_H

@class UIEdgeFeedbackGenerator;



@interface _UIZoomEdgeFeedbackGenerator : UIEdgeFeedbackGenerator

@property (nonatomic) CGFloat maximumTemporaryZoomScale; // ivar: _maximumTemporaryZoomScale
@property (nonatomic) CGFloat maximumZoomScale; // ivar: _maximumZoomScale
@property (nonatomic) CGFloat minimumTemporaryZoomScale; // ivar: _minimumTemporaryZoomScale
@property (nonatomic) CGFloat minimumZoomScale; // ivar: _minimumZoomScale


-(id)init;
-(id)initWithCoordinateSpace:(id)arg0 ;
-(void)_updateMaximumValue;
-(void)_zoomScaleUpdated:(CGFloat)arg0 withVelocity:(CGFloat)arg1 ;
-(void)zoomScaleUpdated:(CGFloat)arg0 ;


@end


#endif