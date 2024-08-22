// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPCMODELMEDIACLIPAVITEM_H
#define MPCMODELMEDIACLIPAVITEM_H

@class MPAVItem, MPModelGenericObject, NSString, MPModelMediaClip;
@protocol MPRTCReportingItemSessionCreating;



@interface MPCModelMediaClipAVItem : MPAVItem <MPRTCReportingItemSessionCreating>

 {
    MPModelGenericObject *_modelGenericObject;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) MPModelMediaClip *mediaClip; // ivar: _mediaClip
@property (readonly, nonatomic) NSInteger rtcReportingAssetType;
@property (readonly) Class superclass;


+(id)requiredMediaClipProperties;
-(BOOL)_allowsCellularPlayback;
-(BOOL)_isVideoAsset;
-(BOOL)allowsAirPlayFromCloud;
-(BOOL)allowsExternalPlayback;
-(BOOL)isAssetURLValid;
-(BOOL)isStreamable;
-(BOOL)isValidPlayerSubstituteForItem:(id)arg0 ;
-(BOOL)prefersSeekOverSkip;
-(BOOL)supportsRateChange;
-(CGFloat)durationFromExternalMetadata;
-(id)_currentPreferredStaticAsset;
-(id)artworkCatalogBlock:(SEL)arg0 ;
-(id)initWithMediaClip:(id)arg0 ;
-(id)mainTitle;
-(id)modelGenericObject;
-(id)rtcReportingServiceIdentifier;
-(void)_applyLoudnessInfo;
-(void)loadAssetAndPlayerItem;
-(void)reevaluateType;


@end


#endif