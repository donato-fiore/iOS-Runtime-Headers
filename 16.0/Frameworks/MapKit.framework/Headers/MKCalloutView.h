// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MKCALLOUTVIEW_H
#define MKCALLOUTVIEW_H

@class UIView;
@protocol _MKMotionEffectDelegate;


#import "MKAnnotationView.h"

@interface MKCalloutView : UIView <_MKMotionEffectDelegate>



@property (readonly, nonatomic) NSInteger anchorPosition;
@property (readonly, weak, nonatomic) MKAnnotationView *annotationView; // ivar: _annotationView
@property (readonly, nonatomic) BOOL hasPendingVisibility;
@property (nonatomic) BOOL parallaxEnabled; // ivar: _parallaxEnabled
@property (readonly, nonatomic, getter=isVisible) BOOL visible;


-(id)initWithAnnotationView:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)dismissAnimated:(BOOL)arg0 completionBlock:(id)arg1 ;
-(void)motionEffectDidUpdate:(id)arg0 ;
-(void)showAnimated:(BOOL)arg0 completionBlock:(id)arg1 ;


@end


#endif