// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PANORAMACLIP_H
#define PANORAMACLIP_H

@class NSArray, NSString;
@protocol CompoundClipInformation;


#import "KenBurnsClip.h"

@interface PanoramaClip : KenBurnsClip <CompoundClipInformation>



@property (nonatomic) CGFloat burstAcrossSubClipDuration; // ivar: _burstAcrossSubClipDuration
@property (retain, nonatomic) NSArray *containedClips; // ivar: _containedClips
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSArray *detectedFaceRects; // ivar: _detectedFaceRects
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL panSupportsDoublePan;
@property (readonly, nonatomic) BOOL panSupportsTriplePan;
@property (nonatomic) NSUInteger panoramaDirection; // ivar: _panoramaDirection
@property (nonatomic) NSUInteger panoramaStyle; // ivar: _panoramaStyle
@property (nonatomic) CGFloat panoramaTransitionDuration; // ivar: _panoramaTransitionDuration
@property (readonly, nonatomic) CGFloat projectAspectRatio;
@property (readonly, nonatomic) int projectFrameRate;
@property (readonly) Class superclass;
@property (retain, nonatomic) KenBurnsClip *templateClip; // ivar: _templateClip


+(id)sharedRandomNumberGenerator;
-(BOOL)expandsEditList;
-(BOOL)isBurstAcrossStyleSuitable;
-(BOOL)isPano;
-(id)appendLetterboxZoomOutToClips:(id)arg0 zoomOutFromLastClip:(BOOL)arg1 ;
-(id)buildClipsForBurstAcrossPanorama;
-(id)buildClipsForDoublePanorama;
-(id)buildClipsForSinglePanorama;
-(id)buildClipsForTriplePanorama;
-(id)containedClipsWithInTransition:(id)arg0 outTransition:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithKenBurnsClip:(id)arg0 ;
-(id)plistRepresentationFromProject:(id)arg0 ;
-(int)totalDurationOfClips:(id)arg0 ;
-(struct CGRect )rectEnclosingAllFacesWithFaceScale:(CGFloat)arg0 imageRect:(struct CGRect )arg1 ;
-(struct CGSize )panoramaViewportSizeForImageSize:(struct CGSize )arg0 ;
-(void)adjustDurationsOfClips:(id)arg0 withInTransition:(id)arg1 outTransition:(id)arg2 ;
-(void)computeBurstAcrossClipCount:(*int)arg0 minLeftEdge:(*CGFloat)arg1 maxLeftEdge:(*CGFloat)arg2 ;
-(void)equalizeDurationsOfClips:(id)arg0 totalDuration:(int)arg1 ;
-(void)logDetectedFaceRects;
-(void)lowLevelCustomizePanoramaKB:(id)arg0 panRight:(BOOL)arg1 leftLimit:(CGFloat)arg2 rightLimit:(CGFloat)arg3 allowLeftCrop:(BOOL)arg4 allowRightCrop:(BOOL)arg5 leftZoom:(CGFloat)arg6 rightZoom:(CGFloat)arg7 ;
-(void)offsetKenBurnsFramesForFaces:(id)arg0 panRight:(BOOL)arg1 ;
-(void)setContentsFromPlist:(id)arg0 inProject:(id)arg1 ;
-(void)setDuration:(int)arg0 ;
-(void)takePropertiesFromKenBurnsClip:(id)arg0 ;


@end


#endif