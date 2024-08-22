// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUFILMSTRIPASSET_H
#define PUFILMSTRIPASSET_H

@class AVAsset, NSDate, NSString, CLLocation;
@protocol PUDisplayAsset;

#import <Foundation/Foundation.h>


@interface PUFilmstripAsset : NSObject <PUDisplayAsset>

 {
    NSUInteger _pixelWidth;
    NSUInteger _pixelHeight;
}


@property (nonatomic, setter=_setAsset:) AVAsset *_asset; // ivar: __asset
@property (nonatomic, setter=_setSourceTimeAccurate:) BOOL _isSourceTimeAccurate; // ivar: __isSourceTimeAccurate
@property (nonatomic, setter=_setNormalizedTime:) CGFloat _normalizedTime; // ivar: __normalizedTime
@property (readonly, nonatomic) CGFloat aspectRatio;
@property (readonly, nonatomic) BOOL canPlayLoopingVideo;
@property (readonly, nonatomic) BOOL canPlayPhotoIris;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUInteger deferredLogInfo;
@property (readonly, nonatomic) unsigned short deferredProcessingNeeded;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat duration;
@property (readonly, nonatomic, getter=isFavorite) BOOL favorite;
@property (readonly, nonatomic) BOOL hasPhotoColorAdjustments;
@property (readonly, nonatomic) BOOL hasSyndicationInformation;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isHidden) BOOL hidden;
@property (readonly, nonatomic) BOOL isAnimatedImage;
@property (readonly, nonatomic) BOOL isGuestAsset;
@property (readonly, nonatomic) BOOL isPhotoIrisPlaceholder;
@property (readonly, nonatomic) BOOL isTemporaryPlaceholder;
@property (readonly, nonatomic, getter=isLivePhoto) BOOL livePhoto;
@property (readonly, nonatomic) NSDate *localCreationDate;
@property (readonly, nonatomic) NSString *localizedGeoDescription;
@property (readonly, nonatomic) CLLocation *location;
@property (readonly, nonatomic) NSUInteger mediaSubtypes;
@property (readonly, nonatomic) NSUInteger mediaType;
@property (readonly, nonatomic) NSDate *modificationDate;
@property (readonly, nonatomic) BOOL needsDeferredProcessing;
@property (readonly, nonatomic) NSUInteger originalFilesize;
@property (readonly, nonatomic) ? photoIrisStillDisplayTime;
@property (readonly, nonatomic) ? photoIrisVideoDuration;
@property (readonly, nonatomic) NSUInteger pixelHeight;
@property (readonly, nonatomic) NSUInteger pixelWidth;
@property (readonly, nonatomic) NSInteger playbackStyle;
@property (readonly, nonatomic) NSInteger playbackVariation;
@property (nonatomic) CGFloat sourceTime; // ivar: _sourceTime
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uniformTypeIdentifier;
@property (readonly, nonatomic) NSString *uuid;
@property (readonly, nonatomic) ? videoKeyFrameSourceTime;


-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(NSUInteger)isContentEqualTo:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithNormalizedTime:(CGFloat)arg0 asset:(id)arg1 ;
-(void)loadSourceTimeWithCompletionHandler:(id)arg0 ;


@end


#endif