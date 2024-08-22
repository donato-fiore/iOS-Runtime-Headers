// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC20FMPRECISIONFINDINGUI17FMPFSKPATTERNNODE_H
#define _TTC20FMPRECISIONFINDINGUI17FMPFSKPATTERNNODE_H

@class SKNode, NSString;



@interface _TtC20FMPrecisionFindingUI17FMPFSKPatternNode : SKNode {
    ? experienceType;
    ? style;
    ? config;
    ? pixelsPerInch;
    ? sceneSize;
    ? ringView;
    ? explodedDiskRadius;
    ? peripheralDiskRadius;
    ? canvasDebugNode;
    ? canvasInsideBorderBezierNode;
    ? canvasDiskBezierNode;
    ? canvasPatternSpinesNode;
    ? gimbalNode;
    ? patternFragmentsNode;
    ? patternFragmentNodes;
    ? labelsNode;
    ? noonDotColor;
    ? pointeeDotColor;
    ? noonNode;
    ? pointeeNode;
    ? noonNodeSnappedUnderPointeeNode;
    ? extraDiskRadiusWhenSnapping;
    ? forceHideNoonNode;
    ? allFragmentsAreOrbiting;
    ? track;
    ? trackDidChange;
    ? trackTop;
    ? trackBottom;
    ? needsRecomputeVisibleFragments;
    ? conformationFactorSpring;
    ? conformedToExplodedFactorSpring;
    ? energeticAngleSpring;
    ? lethargicAngleSpring;
    ? centerFactorSpring;
    ? lookoutSpring;
    ? trackSpring;
    ? labelsOpacitySpring;
    ? delegate;
    ? inFOV;
    ? shouldApplyConformedToExplodedFactor;
    ? conformedToExplodedFactor;
    ? presentedConformedToExplodedFactor;
    ? shouldApplyConformationFactor;
    ? conformationFactor;
    ? presentedConformationFactor;
    ? shouldApplyBearing;
    ? bearing;
    ? presentedEnergeticBearing;
    ? presentedLethargicBearing;
    ? shouldApplyCenterFactor;
    ? centerFactor;
    ? presentedCenterFactor;
    ? derivativeCenterFactor;
    ? shouldLookout;
    ? lookout;
    ? presentedLookout;
    ? shouldLabelsOpacity;
    ? labelsOpacity;
    ? presentedLabelsOpacity;
}


@property (nonatomic, readonly) NSString *description;


-(id)init;
-(id)initWithCoder:(id)arg0 ;


@end


#endif