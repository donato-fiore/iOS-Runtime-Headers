// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSTORYEXPORTVIDEOOPTIONS_H
#define PXSTORYEXPORTVIDEOOPTIONS_H

@class NSNumber;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "PXExtendedTraitCollectionSnapshot.h"

@interface PXStoryExportVideoOptions : NSObject <NSCopying>



@property (retain, nonatomic) NSNumber *averageBitratePerSecond; // ivar: _averageBitratePerSecond
@property (nonatomic) NSUInteger codec; // ivar: _codec
@property (nonatomic) NSUInteger frameRate; // ivar: _frameRate
@property (retain, nonatomic) PXExtendedTraitCollectionSnapshot *fullSizePlayerExtendedTraitCollectionSnapshot; // ivar: _fullSizePlayerExtendedTraitCollectionSnapshot
@property (nonatomic) BOOL prefersExportLayoutMatchesPlayback; // ivar: _prefersExportLayoutMatchesPlayback
@property (nonatomic) CGSize resolution; // ivar: _resolution
@property (readonly, nonatomic) CGSize resolutionInPixels;
@property (nonatomic) CGFloat scale; // ivar: _scale


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif