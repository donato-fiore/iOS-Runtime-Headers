// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MIROBLUEPRINT_H
#define MIROBLUEPRINT_H

@class NSArray, NSString, NSDictionary, NSMutableDictionary;
@protocol MiroBlueprintTitleStyleProtocol, MiroBlueprintMusicInfoProtocol, MiroBlueprintEditStyleProtocol, NSCopying, NSSecureCoding, MiroBlueprintProtocol;

#import <Foundation/Foundation.h>


@interface MiroBlueprint : NSObject <MiroBlueprintTitleStyleProtocol, MiroBlueprintMusicInfoProtocol, MiroBlueprintEditStyleProtocol, NSCopying, NSSecureCoding, MiroBlueprintProtocol>



@property (readonly, nonatomic) NSArray *allowedCropTreatments;
@property (readonly, nonatomic) CGFloat burstIdealDuration;
@property (readonly, nonatomic) CGFloat burstMinDuration;
@property (readonly, nonatomic) NSArray *burstStyleNames;
@property (readonly, nonatomic) BOOL centerOnFrame;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id *debugSingleTransitionID;
@property (readonly, nonatomic) BOOL defaultCameraMotionIsPan;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<MiroBlueprintEditStyleProtocol> *editStyle;
@property (readonly, nonatomic) NSString *editStyleID; // ivar: _editStyleID
@property (readonly, nonatomic) NSString *effectID;
@property (readonly, nonatomic) NSArray *expandedMultiUpTransitionDictionaries;
@property (readonly, nonatomic) BOOL extremeZoomAllowed;
@property (readonly, nonatomic) NSString *flexMusicID; // ivar: _flexMusicID
@property (readonly, nonatomic) NSString *fontName;
@property (readonly, nonatomic) CGFloat halfBarDuration;
@property (readonly, nonatomic) CGFloat hardCutPercentage;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSDictionary *healingEditTransitionDictionary;
@property (readonly, nonatomic) BOOL healingTransitionsAllowed;
@property (nonatomic) NSUInteger iCloudMusicAccountID; // ivar: _iCloudMusicAccountID
@property (nonatomic) NSUInteger iCloudMusicMediaID; // ivar: _iCloudMusicMediaID
@property (nonatomic) NSUInteger iTunesMediaID; // ivar: _iTunesMediaID
@property (readonly, nonatomic) CGFloat irisIdealDuration;
@property (readonly, nonatomic) CGFloat irisMaxDuration;
@property (readonly, nonatomic) CGFloat irisMinDuration;
@property (readonly, nonatomic) BOOL isMoodDictionaryPopulated;
@property (readonly, nonatomic) CGFloat kenBurnsAnyStillPercentage;
@property (readonly, nonatomic) CGFloat maxZoomLevel;
@property (retain, nonatomic) NSMutableDictionary *moodDictionary; // ivar: _moodDictionary
@property (readonly, nonatomic) NSString *moodID;
@property (retain, nonatomic) NSArray *moodIDs; // ivar: _moodIDs
@property (readonly, nonatomic) NSArray *multiUpTransitionDictionaries;
@property (readonly, nonatomic) NSArray *multiUpTransitionsAsDictionaries;
@property (readonly, nonatomic) NSObject<MiroBlueprintMusicInfoProtocol> *musicInfo;
@property (readonly, nonatomic) NSDictionary *parametersDictionary;
@property (readonly, nonatomic) CGFloat photoIdealDuration;
@property (readonly, nonatomic) CGFloat photoMaxDuration;
@property (readonly, nonatomic) CGFloat photoMinDuration;
@property (copy, nonatomic) NSString *projectFilterID; // ivar: _projectFilterID
@property (nonatomic) unsigned int randomizerSeed; // ivar: _randomizerSeed
@property (copy, nonatomic) NSArray *requestedKeywords; // ivar: _requestedKeywords
@property (copy, nonatomic) NSDictionary *requestedMusicGenreDistribution; // ivar: _requestedMusicGenreDistribution
@property (readonly, nonatomic) NSString *sequentialNUpEffect;
@property (readonly, nonatomic) CGFloat sloMoIdealDuration;
@property (readonly, nonatomic) CGFloat sloMoMinDuration;
@property (retain, nonatomic) NSString *songID; // ivar: _songID
@property (nonatomic) BOOL songIsLocked; // ivar: _songIsLocked
@property (readonly, nonatomic) NSUInteger songPace;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL sweepingPansAllowed;
@property (readonly, nonatomic) CGFloat timelapseIdealDuration;
@property (readonly, nonatomic) CGFloat timelapseMinDuration;
@property (readonly, nonatomic) NSString *titleAndAnimationStyleDescription;
@property (readonly, nonatomic) NSString *titleID; // ivar: _titleID
@property (readonly, nonatomic) CGFloat titleIdealDuration;
@property (nonatomic) BOOL titleIsLocked; // ivar: _titleIsLocked
@property (readonly, nonatomic) CGFloat titleMinDuration;
@property (readonly, nonatomic) BOOL titleRequestsColorAnalysis;
@property (readonly, nonatomic) NSObject<MiroBlueprintTitleStyleProtocol> *titleStyle;
@property (readonly, nonatomic) NSDictionary *titleStyleDictionary;
@property (readonly, nonatomic) NSUInteger toneTreatment;
@property (readonly, nonatomic) NSArray *transitionsAsDictionaries;
@property (readonly, nonatomic) CGFloat videoIdealDuration;
@property (readonly, nonatomic) CGFloat videoMaxDuration;
@property (readonly, nonatomic) CGFloat videoMinDuration;


+(BOOL)supportsSecureCoding;
+(id)blueprint;
+(id)blueprintFromSerializedDictionaryRepresentation:(id)arg0 ;
+(id)blueprintWithMood:(id)arg0 ;
+(id)emptyBlueprint;
+(id)keysAffectingAutoEdit;
+(id)nominalBlueprint;
+(id)randomBlueprint;
-(BOOL)blueprintDiffersFromBlueprint:(id)arg0 ;
-(BOOL)durationIsNearVideoIdeal:(CGFloat)arg0 ;
-(BOOL)hasCustomEditingStyle;
-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)idealDurationForAsset:(id)arg0 ;
-(CGFloat)maximumDurationForAsset:(id)arg0 ;
-(CGFloat)minimumDurationForAsset:(id)arg0 ;
-(CGFloat)moodPacingMultiplier;
-(CGFloat)panoIdealDurationWithMultiplier:(CGFloat)arg0 ;
-(CGFloat)panoMaxDurationWithMultiplier:(CGFloat)arg0 ;
-(CGFloat)panoMinDurationWithMultiplier:(CGFloat)arg0 ;
-(id)_moodPaceKey;
-(id)_pacingKey;
-(id)blueprintWithMood:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentationForSerialization;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(struct DurationTriplet )durationsForAsset:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif