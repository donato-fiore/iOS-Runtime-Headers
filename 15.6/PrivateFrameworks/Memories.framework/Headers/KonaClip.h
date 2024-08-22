// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef KONACLIP_H
#define KONACLIP_H

@class NSMutableDictionary, PHAsset, NSString, NSDate, PVEffect, NSURL, NSDictionary, NSArray;
@protocol MiroClip, MiroClip_Shim, KonaClipMiroAutoEditAdditions, SpeedRangeDelegate, NSCopying, AltAspect;

#import <Foundation/Foundation.h>

#import "AltClipCollection.h"
#import "KonaClip.h"
#import "ClipBackground.h"
#import "Movie.h"
#import "SpeedRanges.h"
#import "TitleDefinition.h"
#import "VideoMovie.h"

@interface KonaClip : NSObject <MiroClip, MiroClip_Shim, KonaClipMiroAutoEditAdditions, SpeedRangeDelegate, NSCopying, AltAspect>

 {
    NSMutableDictionary *m_clipDict;
}


@property (nonatomic) CGFloat altAspect; // ivar: _altAspect
@property (retain, nonatomic) AltClipCollection *altClips; // ivar: _altClips
@property (retain, nonatomic) KonaClip *anchorItem;
@property (nonatomic) NSInteger anchorItemIndex; // ivar: anchorItemIndex
@property (nonatomic) int anchorLocalOffset;
@property (nonatomic) int anchorTargetOffset;
@property (readonly, nonatomic) CGFloat aspectRatio;
@property (readonly, nonatomic) PHAsset *asset;
@property (retain, nonatomic) NSString *audioArtist;
@property (nonatomic) BOOL audioEnabled;
@property (nonatomic) BOOL audioEnabled;
@property (nonatomic) int audioEndOffset;
@property (nonatomic) int audioFadeInDuration;
@property (nonatomic) int audioFadeOutDuration;
@property (nonatomic) int audioStartOffset;
@property (retain, nonatomic) NSString *audioTitle;
@property (nonatomic) float audioVolume;
@property (retain, nonatomic) ClipBackground *clipBackground; // ivar: _clipBackground
@property (readonly, nonatomic) int clipType;
@property (retain, nonatomic) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (nonatomic) int desiredDuration;
@property (nonatomic) int duration;
@property (nonatomic) int duration;
@property (retain, nonatomic) PVEffect *filterEffect;
@property (readonly, nonatomic) unsigned int filterEffectSeed;
@property (nonatomic) unsigned int filterEffectSeed; // ivar: _filterEffectSeed
@property (readonly, nonatomic) float frameRate;
@property (readonly, nonatomic) float frameRate;
@property (nonatomic) int freezeFrame;
@property (retain, nonatomic) id *freezeInfo; // ivar: _freezeInfo
@property (readonly, nonatomic) BOOL hasSelection;
@property (readonly, nonatomic) BOOL hasTitle;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSURL *identifierURL;
@property (readonly, nonatomic) BOOL isSlomo;
@property (readonly, nonatomic) int maxDur;
@property (nonatomic) int maxDuration;
@property (nonatomic) int maxDuration;
@property (readonly, nonatomic) int maxEnd;
@property (readonly, nonatomic) int minStart;
@property (retain, nonatomic) Movie *movie;
@property (retain, nonatomic) NSDictionary *movieMapLocation;
@property (retain, nonatomic) NSURL *movieURL;
@property (readonly, nonatomic) NSArray *multiUpContainedClips;
@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) CGSize naturalSizeWithTransform;
@property (retain, nonatomic) KonaClip *nextTransition;
@property (nonatomic) BOOL placeholder; // ivar: placeholder
@property (retain, nonatomic) KonaClip *precisionSourceClip;
@property (nonatomic) int precisionTrack;
@property (nonatomic) BOOL projectMovie;
@property (readonly, nonatomic) int rawSourceDuration;
@property (readonly, nonatomic) int rawSourceDuration;
@property (nonatomic) float rotation;
@property (nonatomic) float scaleFactor;
@property (retain, nonatomic) id *scene; // ivar: _scene
@property (nonatomic) int selectionEnd; // ivar: selectionEnd
@property (nonatomic) int selectionStart; // ivar: selectionStart
@property (nonatomic) BOOL showActivity; // ivar: showActivity
@property (readonly, nonatomic) float sourceDuration;
@property (nonatomic) float sourceDuration; // ivar: _sourceDuration
@property (readonly, nonatomic) float sourceStartTime;
@property (nonatomic) float sourceStartTime; // ivar: _sourceStartTime
@property (nonatomic) float speed;
@property (nonatomic) float speed;
@property (readonly, nonatomic) SpeedRanges *speedRanges;
@property (retain, nonatomic) SpeedRanges *speedRanges;
@property (retain, nonatomic) SpeedRanges *speedRanges; // ivar: _speedRanges
@property (nonatomic) int startOffset;
@property (nonatomic) int startTime;
@property (nonatomic) int startTime;
@property (weak, nonatomic) id *suggestion; // ivar: _suggestion
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (retain, nonatomic) TitleDefinition *titleDefinition; // ivar: _titleDefinition
@property (readonly, nonatomic) int titleDuration;
@property (readonly, nonatomic) PVEffect *titleEffect;
@property (nonatomic) BOOL transitionChanged; // ivar: transitionChanged
@property (nonatomic) int transitionEatLeft;
@property (nonatomic) int transitionEatRight;
@property (nonatomic) float translateX;
@property (nonatomic) float translateY;
@property (nonatomic) int userEditedSize;
@property (nonatomic) BOOL userEditing;
@property (readonly, nonatomic) NSString *uuid; // ivar: _uuid
@property (readonly, nonatomic) VideoMovie *videoMovie;


+(Class)classForClipType:(int)arg0 ;
+(id)clip;
+(id)clipFromPlist:(id)arg0 ;
+(id)clipWithAsset:(id)arg0 ;
+(id)objectFromPlist:(id)arg0 inProject:(id)arg1 ;
+(id)stabilizationMovieFilenameForAssetID:(id)arg0 ;
+(id)watermarkedMovieFilenameForAssetID:(id)arg0 ;
-(BOOL)allowsTitle;
-(BOOL)canBeDeleted;
-(BOOL)canBeDuplicated;
-(BOOL)clipContentsEqual:(id)arg0 ;
-(BOOL)hasAudioCharacteristic;
-(BOOL)hasPhotoCharacteristic;
-(BOOL)hasVisualCharacteristic;
-(BOOL)isBackgroundAudio;
-(BOOL)isBurst;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isFreezeFrame;
-(BOOL)isIris;
-(BOOL)isMultiUp;
-(BOOL)isPano;
-(BOOL)isPrimary;
-(BOOL)isSpeedAdjustable;
-(BOOL)isVideoOverlay;
-(CGFloat)autoEditLongestDurationWithBlueprint:(id)arg0 ;
-(CGFloat)autoEditShortestDurationWithBlueprint:(id)arg0 ;
-(CGFloat)autoEditShortestIdealDurationWithBlueprint:(id)arg0 ;
-(NSInteger)specialTreatment;
-(NSInteger)volume;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)deepCopyOntoClip:(id)arg0 withZone:(struct _NSZone *)arg1 ;
-(id)fileURL;
-(id)identifier;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)loadAVAsset;
-(id)plistRepresentationFromProject:(id)arg0 ;
-(id)sourceClips;
-(id)validationInformation;
-(int)paddedMaxDur;
-(int)paddedMaxEnd;
-(int)paddedMinStart;
-(int)titleStartTimeForClipStartTime:(int)arg0 ;
-(struct ? )sourceTimeRange;
-(struct ? )targetTimeRange;
-(struct CGAffineTransform )transform:(struct CGSize )arg0 fillDest:(BOOL)arg1 ;
-(void)_addDefaultKeys;
-(void)changedMapFrom:(id)arg0 to:(id)arg1 ;
-(void)clearSelection;
-(void)dealloc;
-(void)didFinishTrimming;
-(void)encodeWithCoder:(id)arg0 ;
-(void)generateFilterEffectSeed;
-(void)initializeFromURL:(id)arg0 asset:(id)arg1 ;
// -(void)loadAVPlayerItemWithCompletionHander:(id)arg0 progressHandler:(unk)arg1 networkAccessAllowed:(id)arg2  ;
-(void)setContentsFromPlist:(id)arg0 inProject:(id)arg1 ;
-(void)stampNewUUID;
-(void)updateSourceCaches;
-(void)validateEffectRange:(struct ? )arg0 inProject:(id)arg1 ;


@end


#endif