// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSDMOVIEINFO_H
#define TSDMOVIEINFO_H

@class NSURL;
@protocol TSDMixing;


#import "TSDMediaInfo.h"
#import "TSPData.h"
#import "TSDMediaStyle.h"

@interface TSDMovieInfo : TSDMediaInfo <TSDMixing>

 {
    TSPData *mMovieData;
    NSURL *mMovieRemoteURL;
    TSPData *mImportedAuxiliaryMovieData;
    TSPData *mAudioOnlyImageData;
    CGFloat mStartTime;
    CGFloat mEndTime;
    CGFloat mPosterTime;
    CGSize mNaturalSize;
    NSUInteger mLoopOption;
    float mVolume;
    int mControlStyle;
    BOOL mAllowsAirPlayVideo;
    BOOL mUsesAirPlayVideoWhileAirPlayScreenIsActive;
    NSURL *mURLForMPMPC;
    TSDMediaStyle *mStyle;
    BOOL mAudioOnly;
}


@property (nonatomic) BOOL allowsAirPlayVideo;
@property (nonatomic, getter=isAudioOnly) BOOL audioOnly;
@property (retain, nonatomic) TSPData *audioOnlyImageData;
@property (nonatomic) int controlStyle;
@property (nonatomic) CGFloat endTime;
@property (retain, nonatomic) TSPData *importedAuxiliaryMovieData;
@property (nonatomic) NSUInteger loopOption;
@property (retain, nonatomic) TSPData *movieData;
@property (retain, nonatomic) NSURL *movieRemoteURL;
@property (retain, nonatomic) TSPData *posterImageData; // ivar: mPosterImageData
@property (nonatomic) CGFloat posterTime;
@property (nonatomic) CGFloat startTime;
@property (nonatomic, getter=isStreaming) BOOL streaming; // ivar: mStreaming
@property (retain, nonatomic) NSURL *urlForMPMPC;
@property (nonatomic) BOOL usesAirPlayVideoWhileAirPlayScreenIsActive;
@property (nonatomic) float volume;


+(CGFloat)defaultPosterTimeForDuration:(CGFloat)arg0 ;
+(id)presetKinds;
-(BOOL)canChangeWrapType;
-(BOOL)containsProperty:(int)arg0 ;
-(BOOL)supportsAttachedComments;
-(BOOL)supportsHyperlinks;
-(CGFloat)doubleValueForProperty:(int)arg0 ;
-(Class)editorClass;
-(Class)layoutClass;
-(Class)repClass;
-(Class)styleClass;
-(NSInteger)mixingTypeWithObject:(id)arg0 ;
-(float)floatValueForProperty:(int)arg0 ;
-(id)animationFilters;
-(id)copyWithContext:(id)arg0 ;
-(id)copyWithContext:(id)arg0 stylesheet:(id)arg1 ;
-(id)generateEmptyPosterImageForContext:(id)arg0 ;
-(id)initWithContext:(id)arg0 geometry:(id)arg1 ;
-(id)initWithContext:(id)arg0 geometry:(id)arg1 style:(id)arg2 ;
-(id)initWithContext:(id)arg0 geometry:(id)arg1 style:(id)arg2 movieData:(id)arg3 loadedAsset:(id)arg4 ;
-(id)initWithContext:(id)arg0 geometry:(id)arg1 style:(id)arg2 movieRemoteURL:(id)arg3 loadedAsset:(id)arg4 ;
-(id)makeAVAsset;
-(id)makeAVAssetWithOptions:(id)arg0 ;
-(id)makePosterImageGeneratorWithAVAsset:(id)arg0 ;
-(id)mediaDisplayName;
-(id)mediaFileType;
-(id)mixedObjectWithFraction:(CGFloat)arg0 ofObject:(id)arg1 ;
-(id)objectForProperty:(int)arg0 ;
-(id)presetKind;
-(id)style;
-(id)synchronouslyGenerateDefaultPosterImageForContext:(id)arg0 ;
-(int)intValueForProperty:(int)arg0 ;
-(struct CGSize )rawDataSize;
-(void)acceptVisitor:(id)arg0 ;
-(void)dealloc;
-(void)p_setPropertiesFromLoadedAsset:(id)arg0 ;
-(void)setStyle:(id)arg0 ;


@end


#endif