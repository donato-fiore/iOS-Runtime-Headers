// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LPAVPLAYERVIEWCONTROLLER_H
#define LPAVPLAYERVIEWCONTROLLER_H

@class AVPlayerViewController;



@interface LPAVPlayerViewController : AVPlayerViewController {
    id *_readyForDisplayCallback;
}




-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)prepareForDisplayWithCompletionHandler:(id)arg0 ;


@end


#endif