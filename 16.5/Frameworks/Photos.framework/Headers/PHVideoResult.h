// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHVIDEORESULT_H
#define PHVIDEORESULT_H

@class NSString, NSData, NSURL;


#import "PHCompositeMediaResult.h"

@interface PHVideoResult : PHCompositeMediaResult

@property (retain, nonatomic) NSString *fingerPrint; // ivar: _fingerPrint
@property (copy, nonatomic) NSString *uniformTypeIdentifier; // ivar: _uniformTypeIdentifier
@property (retain, nonatomic) NSData *videoMediaItemMakerData; // ivar: _videoMediaItemMakerData
@property (retain, nonatomic) NSURL *videoURL; // ivar: _videoURL


-(BOOL)containsValidData;
-(id)allowedInfoKeys;
-(id)videoAdjustmentData;
-(void)setVideoAdjustmentData:(id)arg0 ;


@end


#endif