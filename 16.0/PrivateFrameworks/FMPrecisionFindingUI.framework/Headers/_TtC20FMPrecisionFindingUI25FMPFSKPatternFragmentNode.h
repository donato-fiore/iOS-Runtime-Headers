// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC20FMPRECISIONFINDINGUI25FMPFSKPATTERNFRAGMENTNODE_H
#define _TTC20FMPRECISIONFINDINGUI25FMPFSKPATTERNFRAGMENTNODE_H

@class TtC20FMPrecisionFindingUI15FMPFSKShapeNode, NSString;



@interface _TtC20FMPrecisionFindingUI25FMPFSKPatternFragmentNode : TtC20FMPrecisionFindingUI15FMPFSKShapeNode {
    ? experienceType;
    ? style;
    ? gimbalNode;
    ? dotNode;
    ? minScaleFactor;
    ? maxScaleFactor;
    ? explodedDiskRadius;
    ? peripheralDiskRadius;
    ? innerPeripheralDiskRadius;
    ? travelingStyle;
    ? conformedBrightness;
    ? nonConformedBrightness;
    ? initialDisturbanceScatterOffset;
    ? disturbScatterRandomOffsetFrameCounter;
    ? initialPeripheralPosition;
    ? initialExplodedPosition;
    ? curveLength;
    ? arcLength;
    ? perimeterRotateOnceAction;
    ? intermediatePosition;
    ? relativeHeading;
    ? disturbanceScatterOffsetXSpring;
    ? disturbanceScatterOffsetYSpring;
    ? disturbanceHomingFactorSpring;
    ? headingSpring;
    ? noiseSubSpring;
    ? explodedPosition;
    ? peripheralPosition;
    ? composedPosition;
    ? renderingColor;
    ? useAlternateScaling;
    ? conformationTimingFunction;
    ? conformedToExplodedFactor;
    ? conformationFactor;
    ? scalingFactor;
    ? shouldApplyDisturbanceScatterOffset;
    ? disturbanceScatterOffset;
    ? presentedDisturbanceScatterOffset;
    ? shouldApplyDisturbanceHomingFactor;
    ? disturbanceHomingFactor;
    ? presentedDisturbanceHomingFactor;
    ? trackOffset;
    ? presentedAbsoluteHeading;
}


@property (nonatomic, readonly) NSString *description;


-(id)init;
-(id)initWithCoder:(id)arg0 ;


@end


#endif