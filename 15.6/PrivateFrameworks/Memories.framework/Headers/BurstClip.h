// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BURSTCLIP_H
#define BURSTCLIP_H

@class NSArray, NSString, PHAsset, UIColor;
@protocol KonaClipMiroAutoEditAdditions, NSCopying, CompoundClipInformation;


#import "CompoundClip.h"
#import "BurstClipStyle.h"

@interface BurstClip : CompoundClip <KonaClipMiroAutoEditAdditions, NSCopying, CompoundClipInformation>



@property (retain, nonatomic) NSArray *allSourceClips; // ivar: _allSourceClips
@property (nonatomic) NSUInteger allowedBurstStyles; // ivar: _allowedBurstStyles
@property (readonly, nonatomic) NSUInteger assetCount;
@property (retain, nonatomic) BurstClipStyle *burstClipStyle; // ivar: _burstClipStyle
@property (nonatomic) NSUInteger burstStyle; // ivar: _burstStyle
@property (retain, nonatomic) NSArray *containedClips; // ivar: _containedClips
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat idealDuration;
@property (nonatomic) CGFloat idealVideoDuration; // ivar: _idealVideoDuration
@property (readonly, nonatomic) PHAsset *keyAsset;
@property (readonly, nonatomic) CGFloat maximumDuration;
@property (readonly, nonatomic) CGFloat minimumDuration;
@property (nonatomic) CGFloat minimumVideoDuration; // ivar: _minimumVideoDuration
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (retain, nonatomic) UIColor *threeUpStyleGapColor; // ivar: _threeUpStyleGapColor
@property (retain, nonatomic) UIColor *threeUpStylePopBackgroundColor; // ivar: _threeUpStylePopBackgroundColor


-(BOOL)isBurst;
-(BOOL)isPhoto;
-(CGFloat)aspectRatio;
-(CGFloat)autoEditLongestDurationWithBlueprint:(id)arg0 ;
-(CGFloat)autoEditShortestDurationWithBlueprint:(id)arg0 ;
-(NSUInteger)lastInterestingIndex;
-(NSUInteger)supportedBurstStyles;
-(id)autoPickedIndices;
-(id)bestClipsForClipCount:(NSUInteger)arg0 ;
-(id)containedClipsWithInTransition:(id)arg0 outTransition:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)indicesWithBurstSelectionType:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithKenBurnsClip:(id)arg0 sourceClips:(id)arg1 ;
-(id)lastInterestingClip;
-(id)pickedIndices;
-(id)pickedKBClips;
-(id)plistRepresentationFromProject:(id)arg0 ;
-(id)representingClip;
-(id)supportedBurstStylesArray;
-(id)userPickedIndices;
-(void)fetchIfNeeded;
-(void)setAltAspect:(CGFloat)arg0 ;
-(void)setContentsFromPlist:(id)arg0 inProject:(id)arg1 ;
-(void)setDuration:(int)arg0 ;
-(void)setIdealPhotoDuration:(CGFloat)arg0 ;
-(void)setMinimumPhotoDuration:(CGFloat)arg0 ;


@end


#endif