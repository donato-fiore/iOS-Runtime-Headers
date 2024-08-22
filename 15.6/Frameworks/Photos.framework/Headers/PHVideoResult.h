// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHVIDEORESULT_H
#define PHVIDEORESULT_H

@class NSString, NSURL;


#import "PHCompositeMediaResult.h"

@interface PHVideoResult : PHCompositeMediaResult

@property (copy, nonatomic) NSString *uniformTypeIdentifier; // ivar: _uniformTypeIdentifier
@property (retain, nonatomic) NSURL *videoURL; // ivar: _videoURL


-(BOOL)containsValidData;
-(id)allowedInfoKeys;
-(id)videoAdjustmentData;
-(void)setVideoAdjustmentData:(id)arg0 ;


@end


#endif