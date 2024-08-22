// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXMOCKDISPLAYASSET_H
#define PXMOCKDISPLAYASSET_H

@class NSDictionary, NSDate, NSString, NSData, NSNumber;
@protocol PXDisplayAsset;

#import <Foundation/Foundation.h>


@interface PXMockDisplayAsset : NSObject <PXDisplayAsset>



@property (readonly, nonatomic) CGRect acceptableCropRect;
@property (readonly, nonatomic) CGFloat aspectRatio;
@property (readonly, nonatomic) float audioScore;
@property (readonly, nonatomic) NSDictionary *backingDictionary; // ivar: _backingDictionary
@property (readonly, nonatomic) NSUInteger burstSelectionTypes;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) Class defaultImageProviderClass;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat duration;
@property (readonly, nonatomic) CGRect faceAreaRect;
@property (readonly, nonatomic, getter=isFavorite) BOOL favorite;
@property (readonly, nonatomic) NSData *fetchColorNormalizationData;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSNumber *hdrGain;
@property (readonly, nonatomic) NSDate *importDate;
@property (readonly, nonatomic) BOOL isAutoPlaybackEligibilityEstimated;
@property (readonly, nonatomic) BOOL isEligibleForAutoPlayback;
@property (readonly, nonatomic) BOOL isInCloud;
@property (readonly, nonatomic) BOOL isInSharedLibrary;
@property (readonly, nonatomic) ? livePhotoVideoDuration;
@property (readonly, nonatomic) NSDate *localCreationDate;
@property (readonly, nonatomic) NSString *localizedGeoDescription;
@property (readonly, nonatomic) NSUInteger mediaSubtypes;
@property (readonly, nonatomic) NSInteger mediaType;
@property (readonly, nonatomic) NSInteger originalFileSize;
@property (readonly, nonatomic) NSUInteger pixelHeight;
@property (readonly, nonatomic) NSUInteger pixelWidth;
@property (readonly, nonatomic) NSInteger playbackStyle;
@property (readonly, nonatomic) NSInteger playbackVariation;
@property (readonly, nonatomic) CGRect preferredCropRect;
@property (readonly, nonatomic) BOOL representsBurst;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger thumbnailIndex;
@property (readonly, nonatomic) NSUInteger thumbnailVersion;
@property (readonly, nonatomic) NSString *uuid;


+(id)propertiesForImageWithSize:(struct CGSize )arg0 ;
+(id)propertiesForLivePhotoWithSize:(struct CGSize )arg0 ;
+(id)propertiesForVideoWithSize:(struct CGSize )arg0 ;
-(BOOL)_boolValueForKey:(id)arg0 ;
-(CGFloat)_doubleValueForKey:(id)arg0 ;
-(NSInteger)_integerValueForKey:(id)arg0 ;
-(NSInteger)isContentEqualTo:(id)arg0 ;
-(NSUInteger)_unsignedIntegerValueForKey:(id)arg0 ;
-(float)_floatValueForKey:(id)arg0 ;
-(id)_dateValueForKey:(id)arg0 ;
-(id)_stringValueForKey:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithProperties:(id)arg0 ;


@end


#endif