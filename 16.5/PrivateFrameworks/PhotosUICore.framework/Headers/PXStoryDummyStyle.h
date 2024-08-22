// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSTORYDUMMYSTYLE_H
#define PXSTORYDUMMYSTYLE_H

@class NSArray, NSString;
@protocol PXStoryMutableDummyStyle, PXStoryStyle, PXAudioCueSource, PXStorySongResource;

#import <Foundation/Foundation.h>


@interface PXStoryDummyStyle : NSObject <PXStoryMutableDummyStyle, PXStoryStyle>



@property (copy, nonatomic) NSArray *allowedClipCompositionsInLandscape; // ivar: _allowedClipCompositionsInLandscape
@property (copy, nonatomic) NSArray *allowedClipCompositionsInPortrait; // ivar: _allowedClipCompositionsInPortrait
@property (nonatomic) NSInteger cropMode; // ivar: _cropMode
@property (nonatomic) NSInteger cropVerticalContentMode; // ivar: _cropVerticalContentMode
@property (readonly, nonatomic) NSObject<PXAudioCueSource> *cueSource; // ivar: _cueSource
@property (readonly, nonatomic) NSInteger customColorGradeKind; // ivar: _customColorGradeKind
@property (nonatomic) CGFloat defaultSegmentDuration; // ivar: _defaultSegmentDuration
@property (readonly, nonatomic) BOOL isCustomized; // ivar: _isCustomized
@property (nonatomic) CGFloat kenBurnsDistance; // ivar: _kenBurnsDistance
@property (nonatomic) unsigned int kenBurnsPanDirection; // ivar: _kenBurnsPanDirection
@property (nonatomic) CGPoint kenBurnsRelativeTransformOrigin; // ivar: _kenBurnsRelativeTransformOrigin
@property (nonatomic) CGFloat kenBurnsRotationInDegrees; // ivar: _kenBurnsRotationInDegrees
@property (nonatomic) CGFloat kenBurnsScale; // ivar: _kenBurnsScale
@property (nonatomic) NSInteger oneUpKenBurnsKind; // ivar: _oneUpKenBurnsKind
@property (readonly, nonatomic) NSString *originalColorGradeCategory; // ivar: _originalColorGradeCategory
@property (nonatomic) ? outroDuration; // ivar: _outroDuration
@property (nonatomic) CGFloat separatorPanDistance; // ivar: _separatorPanDistance
@property (nonatomic) CGFloat separatorRotationAngle; // ivar: _separatorRotationAngle
@property (readonly, nonatomic) NSObject<PXStorySongResource> *songResource; // ivar: _songResource
@property (nonatomic) NSInteger threeUpKenBurnsKind; // ivar: _threeUpKenBurnsKind
@property (nonatomic) NSInteger threeUpSeparatorEffectKind; // ivar: _threeUpSeparatorEffectKind
@property (nonatomic) ? transitionInfo; // ivar: _transitionInfo
@property (nonatomic) NSInteger twoUpKenBurnsKind; // ivar: _twoUpKenBurnsKind
@property (nonatomic) NSInteger twoUpSeparatorEffectKind; // ivar: _twoUpSeparatorEffectKind


-(id)createRandomNumberGenerators;
-(id)init;
-(id)initWithConfiguration:(id)arg0 ;
-(id)timelineStyleWithSpec:(id)arg0 resourcesDataSource:(id)arg1 randomNumberGenerators:(id)arg2 errorReporter:(id)arg3 ;


@end


#endif