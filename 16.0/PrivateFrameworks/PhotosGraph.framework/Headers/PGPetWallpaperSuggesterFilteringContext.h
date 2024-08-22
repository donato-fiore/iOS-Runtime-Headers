// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGPETWALLPAPERSUGGESTERFILTERINGCONTEXT_H
#define PGPETWALLPAPERSUGGESTERFILTERINGCONTEXT_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PGPetWallpaperSuggesterFilteringContext : NSObject <NSCopying>



@property (nonatomic) BOOL ignoreClockOverlap; // ivar: _ignoreClockOverlap
@property (nonatomic) CGFloat maximumCropZoomRatio; // ivar: _maximumCropZoomRatio
@property (nonatomic) CGFloat maximumFaceSize; // ivar: _maximumFaceSize
@property (nonatomic) CGFloat maximumLowLightScore; // ivar: _maximumLowLightScore
@property (nonatomic) CGFloat minimumCropScore; // ivar: _minimumCropScore
@property (nonatomic) CGFloat minimumFaceSize; // ivar: _minimumFaceSize
@property (nonatomic) CGFloat minimumWallpaperScore; // ivar: _minimumWallpaperScore
@property (nonatomic) CGFloat timeIntervalForCandidateDeduping; // ivar: _timeIntervalForCandidateDeduping


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initForPets;
-(id)initForTopPets;
-(id)initForTopPets:(BOOL)arg0 withDictionary:(id)arg1 ;
-(void)_commonInit;


@end


#endif