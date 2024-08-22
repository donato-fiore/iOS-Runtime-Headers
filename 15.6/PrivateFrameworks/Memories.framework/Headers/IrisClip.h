// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IRISCLIP_H
#define IRISCLIP_H

@class NSArray, NSString;
@protocol KonaClipMiroAutoEditAdditions, NSCopying, CompoundClipInformation;


#import "CompoundClip.h"
#import "IrisMovieClip.h"
#import "IrisClipStyle.h"

@interface IrisClip : CompoundClip <KonaClipMiroAutoEditAdditions, NSCopying, CompoundClipInformation>



@property (retain, nonatomic) NSArray *containedClips; // ivar: _containedClips
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat idealDuration;
@property (retain, nonatomic) IrisMovieClip *introClip; // ivar: _introClip
@property (readonly, nonatomic) BOOL introClipAvailable;
@property (retain, nonatomic) IrisClipStyle *irisClipStyle; // ivar: _irisClipStyle
@property (nonatomic) NSUInteger irisStyle; // ivar: _irisStyle
@property (readonly, nonatomic) CGFloat maximumDuration;
@property (readonly, nonatomic) CGFloat minimumDuration;
@property (retain, nonatomic) IrisMovieClip *outroClip; // ivar: _outroClip
@property (readonly, nonatomic) BOOL outroClipAvailable;
@property (readonly) Class superclass;
@property (readonly) Class superclass;


+(id)allowedTransitions;
-(BOOL)isIris;
-(CGFloat)autoEditLongestDurationWithBlueprint:(id)arg0 ;
-(id)containedClipsWithInTransition:(id)arg0 outTransition:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)plistRepresentationFromProject:(id)arg0 ;
-(int)maxDuration;
-(struct _NSRange )preferredInTransitionDurationRange;
-(struct _NSRange )preferredOutTransitionDurationRange;
-(void)setAltAspect:(CGFloat)arg0 ;
-(void)setAudioVolume:(float)arg0 ;
-(void)setContentsFromPlist:(id)arg0 inProject:(id)arg1 ;
-(void)setIdealPhotoDuration:(CGFloat)arg0 ;
-(void)setMaximumPhotoDuration:(CGFloat)arg0 ;
-(void)setMinimumPhotoDuration:(CGFloat)arg0 ;


@end


#endif