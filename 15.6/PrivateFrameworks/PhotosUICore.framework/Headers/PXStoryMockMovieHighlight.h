// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSTORYMOCKMOVIEHIGHLIGHT_H
#define PXSTORYMOCKMOVIEHIGHLIGHT_H

@class NSData;
@protocol PXStoryMovieHighlight;

#import <Foundation/Foundation.h>


@interface PXStoryMockMovieHighlight : NSObject <PXStoryMovieHighlight>



@property (nonatomic) CGRect bestPlaybackRect; // ivar: _bestPlaybackRect
@property (nonatomic) BOOL hasFace; // ivar: _hasFace
@property (nonatomic) BOOL hasMusic; // ivar: _hasMusic
@property (nonatomic) BOOL hasVoice; // ivar: _hasVoice
@property (nonatomic) float loudness; // ivar: _loudness
@property (retain, nonatomic) NSData *normalizationData; // ivar: _normalizationData
@property (nonatomic) float peakVolume; // ivar: _peakVolume
@property (nonatomic) float qualityScore; // ivar: _qualityScore
@property (nonatomic) ? timeRange; // ivar: _timeRange


-(id)description;
-(id)init;
-(id)initWithBestPlaybackRect:(struct CGRect )arg0 ;
-(id)initWithTimeRange:(struct ? )arg0 score:(float)arg1 bestPlaybackRect:(struct CGRect )arg2 normalizationData:(id)arg3 ;
-(id)initWithTimeRange:(struct ? )arg0 score:(float)arg1 bestPlaybackRect:(struct CGRect )arg2 normalizationData:(id)arg3 face:(BOOL)arg4 voice:(BOOL)arg5 music:(BOOL)arg6 loudness:(float)arg7 peak:(float)arg8 ;
-(struct ? )bestTimeRangeForPreferredDuration:(CGFloat)arg0 min:(CGFloat)arg1 max:(CGFloat)arg2 ;
-(struct ? )bestTimeRangeForTargetDuration:(CGFloat)arg0 ;


@end


#endif