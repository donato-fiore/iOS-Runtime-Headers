// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef QLLOOPINGMEDIAITEMVIEWCONTROLLER_H
#define QLLOOPINGMEDIAITEMVIEWCONTROLLER_H

@class AVQueuePlayer;


#import "QLMediaItemBaseViewController.h"

@interface QLLoopingMediaItemViewController : QLMediaItemBaseViewController {
    AVQueuePlayer *_queuePlayer;
    BOOL _addedObservers;
}




-(BOOL)pause;
-(BOOL)play;
-(id)player;
-(void)dealloc;
-(void)loadPreviewControllerWithContents:(id)arg0 context:(id)arg1 completionHandler:(id)arg2 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)previewDidAppear:(BOOL)arg0 ;
-(void)setupPlayerWithMediaAsset:(id)arg0 ;
-(void)startObservingItem;
-(void)stopObservingItem;


@end


#endif