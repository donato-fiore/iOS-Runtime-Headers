// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MIROASSETCLUSTERINGVIDEOSEGMENT_H
#define MIROASSETCLUSTERINGVIDEOSEGMENT_H

@class PHAsset, NSDate, NSString;
@protocol MiroMediaItem, NSCopying;

#import <Foundation/Foundation.h>

#import "MiroMetadataRange.h"

@interface MiroAssetClusteringVideoSegment : NSObject <MiroMediaItem, NSCopying>



@property (readonly, nonatomic) PHAsset *asset;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat duration; // ivar: _duration
@property (nonatomic) float frameRate; // ivar: _frameRate
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat rangeScore;
@property (retain, nonatomic) MiroMetadataRange *sourceRange; // ivar: _sourceRange
@property (nonatomic) CGFloat startTime; // ivar: _startTime
@property (readonly) Class superclass;
@property (retain, nonatomic) MiroMetadataRange *trimRange; // ivar: _trimRange
@property (retain, nonatomic) PHAsset *videoAsset; // ivar: _videoAsset


+(id)videoSegmentFromAsset:(id)arg0 starting:(CGFloat)arg1 duration:(CGFloat)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)localIdentifier;


@end


#endif