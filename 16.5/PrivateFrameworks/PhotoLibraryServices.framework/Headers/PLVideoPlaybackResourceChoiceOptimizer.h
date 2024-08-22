// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLVIDEOPLAYBACKRESOURCECHOICEOPTIMIZER_H
#define PLVIDEOPLAYBACKRESOURCECHOICEOPTIMIZER_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface PLVideoPlaybackResourceChoiceOptimizer : NSObject {
    NSArray *_videoResources;
    NSArray *_playableVideos;
    BOOL _masterVideoIsPresent;
    BOOL _masterVideoIsPlayable;
}


@property (readonly, nonatomic) NSArray *preferredVideoResources;


-(id)initWithVideoResources:(id)arg0 ;


@end


#endif