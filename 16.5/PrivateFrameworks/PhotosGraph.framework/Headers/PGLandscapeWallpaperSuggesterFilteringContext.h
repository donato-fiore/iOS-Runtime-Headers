// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGLANDSCAPEWALLPAPERSUGGESTERFILTERINGCONTEXT_H
#define PGLANDSCAPEWALLPAPERSUGGESTERFILTERINGCONTEXT_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PGLandscapeWallpaperSuggesterFilteringContext : NSObject <NSCopying>



@property (nonatomic) BOOL ignoreClockOverlap; // ivar: _ignoreClockOverlap
@property (nonatomic) CGFloat maximumCropZoomRatio; // ivar: _maximumCropZoomRatio
@property (nonatomic) CGFloat maximumLowLightScore; // ivar: _maximumLowLightScore
@property (nonatomic) CGFloat minimumCropScore; // ivar: _minimumCropScore
@property (nonatomic) CGFloat minimumWallpaperScore; // ivar: _minimumWallpaperScore
@property (nonatomic) CGFloat timeIntervalForCandidateDeduping; // ivar: _timeIntervalForCandidateDeduping


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initForLandscapes;
-(id)initForTopLandscapes;
-(id)initForTopLandscapes:(BOOL)arg0 withDictionary:(id)arg1 ;
-(void)_commonInit;


@end


#endif