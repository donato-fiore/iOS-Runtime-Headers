// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGSINGLEPERSONWALLPAPERASSETSUGGESTERFILTERINGCONTEXT_H
#define PGSINGLEPERSONWALLPAPERASSETSUGGESTERFILTERINGCONTEXT_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PGSinglePersonWallpaperAssetSuggesterFilteringContext : NSObject <NSCopying>



@property (nonatomic) CGFloat absoluteMininumWallpaperScore; // ivar: _absoluteMininumWallpaperScore
@property (nonatomic) CGFloat maximumCropZoomRatio; // ivar: _maximumCropZoomRatio
@property (nonatomic) CGFloat maximumFaceRoll; // ivar: _maximumFaceRoll
@property (nonatomic) CGFloat maximumFaceSize; // ivar: _maximumFaceSize
@property (nonatomic) CGFloat maximumLowLightScore; // ivar: _maximumLowLightScore
@property (nonatomic) CGFloat minimumCropScore; // ivar: _minimumCropScore
@property (nonatomic) CGFloat minimumFaceQuality; // ivar: _minimumFaceQuality
@property (nonatomic) CGFloat minimumFaceSize; // ivar: _minimumFaceSize
@property (nonatomic) CGFloat minimumWallpaperScore; // ivar: _minimumWallpaperScore
@property (nonatomic) BOOL requiresNoBlink; // ivar: _requiresNoBlink
@property (nonatomic) BOOL requiresSmile; // ivar: _requiresSmile
@property (nonatomic) CGFloat timeIntervalForCandidateDeduping; // ivar: _timeIntervalForCandidateDeduping


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initForPeople;
-(id)initForTopPeople;
-(id)initForTopPeople:(BOOL)arg0 withDictionary:(id)arg1 ;
-(void)_commonInit;


@end


#endif