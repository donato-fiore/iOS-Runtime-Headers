// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSCOVERSHEETFLYINSETTINGS_H
#define CSCOVERSHEETFLYINSETTINGS_H

@class PTSettings;



@interface CSCoverSheetFlyInSettings : PTSettings

@property (nonatomic) BOOL animateIconsOnPresentationToo; // ivar: _animateIconsOnPresentationToo
@property (nonatomic) CGFloat baselineDistance; // ivar: _baselineDistance
@property (nonatomic) BOOL centerFollowsFinger; // ivar: _centerFollowsFinger
@property (nonatomic) CGFloat distanceExponent; // ivar: _distanceExponent
@property (nonatomic) CGFloat effectMultiplier; // ivar: _effectMultiplier
@property (nonatomic) CGFloat iconsFlyInFriction; // ivar: _iconsFlyInFriction
@property (nonatomic) CGFloat iconsFlyInInteractiveDampingRatioMax; // ivar: _iconsFlyInInteractiveDampingRatioMax
@property (nonatomic) CGFloat iconsFlyInInteractiveDampingRatioMin; // ivar: _iconsFlyInInteractiveDampingRatioMin
@property (nonatomic) CGFloat iconsFlyInInteractiveResponseMax; // ivar: _iconsFlyInInteractiveResponseMax
@property (nonatomic) CGFloat iconsFlyInInteractiveResponseMin; // ivar: _iconsFlyInInteractiveResponseMin
@property (nonatomic) CGFloat iconsFlyInTension; // ivar: _iconsFlyInTension
@property (nonatomic) CGFloat slomoRate; // ivar: _slomoRate


+(id)settingsControllerModule;
-(void)setDefaultValues;


@end


#endif