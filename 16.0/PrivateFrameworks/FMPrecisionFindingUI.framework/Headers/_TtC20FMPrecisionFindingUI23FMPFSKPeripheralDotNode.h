// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC20FMPRECISIONFINDINGUI23FMPFSKPERIPHERALDOTNODE_H
#define _TTC20FMPRECISIONFINDINGUI23FMPFSKPERIPHERALDOTNODE_H

@class TtC20FMPrecisionFindingUI10FMPFSKNode, NSString;



@interface _TtC20FMPrecisionFindingUI23FMPFSKPeripheralDotNode : TtC20FMPrecisionFindingUI10FMPFSKNode {
    ? experienceType;
    ? style;
    ? dotDiameter;
    ? pixelsPerInch;
    ? subScale;
    ? gimbalNode;
    ? diskNode;
    ? dotNode;
    ? dotCGPathNode;
    ? btRangingNode;
    ? interativeRadiusBeaconNode;
    ? isPlayingInitialPulse;
    ? hasPlayedInitialPulse;
    ? perimeterRotateOnceAction;
    ? diskRadiusSpring;
    ? dotScaleSpring;
    ? angleSpring;
    ? opacitySpring;
    ? brightnessSpring;
    ? xOffsetSpring;
    ? yOffsetSpring;
    ? headingSpring;
    ? radiusFactorSpring;
    ? renderingColor;
    ? shouldApplyDiskRadius;
    ? diskRadius;
    ? presentedDiskRadius;
    ? shouldApplyDotScale;
    ? dotScale;
    ? presentedDotScale;
    ? shouldApplyAngle;
    ? angle;
    ? presentedAngle;
    ? shouldApplyOpacity;
    ? opacity;
    ? presentedOpacity;
    ? shouldApplyBrightness;
    ? brightness;
    ? presentedBrightness;
    ? shouldApplyOffset;
    ? offset;
    ? presentedOffset;
    ? presentedAbsoluteHeading;
    ? interactiveAngleFactor;
    ? shouldApplyRadiusFactor;
    ? radiusFactor;
    ? presentedRadiusFactor;
}


@property (nonatomic, readonly) NSString *description;


-(id)init;
-(id)initWithCoder:(id)arg0 ;


@end


#endif