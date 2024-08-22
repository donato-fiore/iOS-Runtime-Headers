// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STSVIDEODETAILVIEWCONTROLLER_H
#define STSVIDEODETAILVIEWCONTROLLER_H

@class LPYouTubePlayerView, NSString;
@protocol LPYouTubePlayerDelegate;


#import "STSResultDetailViewController.h"

@interface STSVideoDetailViewController : STSResultDetailViewController <LPYouTubePlayerDelegate>

 {
    LPYouTubePlayerView *_playerView;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)setContentURL:(id)arg0 ;
-(void)viewDidLoad;
-(void)youTubePlayer:(id)arg0 didChangeToState:(NSInteger)arg1 ;


@end


#endif