// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCPMOVIEHIGHLIGHT_H
#define VCPMOVIEHIGHLIGHT_H

@class NSData;

#import <Foundation/Foundation.h>

#import "VCPImageDescriptor.h"
#import "VCPVideoKeyFrame.h"

@interface VCPMovieHighlight : NSObject

@property (nonatomic) float actionScore; // ivar: _actionScore
@property (nonatomic) float averageScore; // ivar: _averageScore
@property (nonatomic) CGRect bestPlaybackCrop; // ivar: _bestPlaybackCrop
@property (retain, nonatomic) NSData *colorNormalization; // ivar: _colorNormalization
@property (retain, nonatomic) VCPImageDescriptor *descriptor; // ivar: _descriptor
@property (nonatomic) float expressionScore; // ivar: _expressionScore
@property (nonatomic) float humanActionScore; // ivar: _humanActionScore
@property (nonatomic) float humanPoseScore; // ivar: _humanPoseScore
@property (nonatomic) BOOL isAutoPlayable; // ivar: _isAutoPlayable
@property (nonatomic) BOOL isTrimmed; // ivar: _isTrimmed
@property (nonatomic) float junkScore; // ivar: _junkScore
@property (retain, nonatomic) VCPVideoKeyFrame *keyFrame; // ivar: _keyFrame
@property (nonatomic) float qualityScore; // ivar: _qualityScore
@property (nonatomic) float score; // ivar: _score
@property (nonatomic) ? timerange; // ivar: _timerange
@property (nonatomic) float voiceScore; // ivar: _voiceScore


-(BOOL)isShort;
-(id)initWithTimeRange:(struct ? )arg0 ;
-(void)checkAutoPlayable;
-(void)copyScoresFrom:(id)arg0 ;
-(void)mergeSegment:(id)arg0 ;


@end


#endif