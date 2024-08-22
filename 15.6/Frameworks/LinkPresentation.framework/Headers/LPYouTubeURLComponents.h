// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LPYOUTUBEURLCOMPONENTS_H
#define LPYOUTUBEURLCOMPONENTS_H

@class NSString;

#import <Foundation/Foundation.h>


@interface LPYouTubeURLComponents : NSObject

@property (nonatomic) CGFloat startTime; // ivar: _startTime
@property (copy, nonatomic) NSString *videoID; // ivar: _videoID


+(BOOL)parseYouTubeTimeFormat:(id)arg0 outTime:(*CGFloat)arg1 ;
+(id)formatAsYouTubeTime:(CGFloat)arg0 ;


@end


#endif