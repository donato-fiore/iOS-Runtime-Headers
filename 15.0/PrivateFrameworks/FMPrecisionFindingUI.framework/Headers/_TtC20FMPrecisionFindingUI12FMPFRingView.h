// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC20FMPRECISIONFINDINGUI12FMPFRINGVIEW_H
#define _TTC20FMPRECISIONFINDINGUI12FMPFRINGVIEW_H

@class UIView, NSString;



@interface _TtC20FMPrecisionFindingUI12FMPFRingView : UIView {
    ? style;
    ? sceneSize;
    ? verticalOffset;
    ? diskRadius;
    ? additionalRadiusScale;
    ? startAngle;
    ? endAngle;
    ? startAngleSpring;
    ? endAngleSpring;
    ? additionalRadiusScaleSpring;
    ? opacitySpring;
}


@property (nonatomic, readonly) NSString *description;


+(Class)layerClass;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)dealloc;
-(void)drawRect:(struct CGRect )arg0 ;


@end


#endif