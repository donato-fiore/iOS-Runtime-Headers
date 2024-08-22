// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVSECONDSCREENPLAYERLAYERVIEW_H
#define AVSECONDSCREENPLAYERLAYERVIEW_H

@class UIView, AVPlayerLayer;


#import "AVObservationController.h"

@interface AVSecondScreenPlayerLayerView : UIView

@property (weak, nonatomic) AVPlayerLayer *activeSourcePlayerLayer; // ivar: _activeSourcePlayerLayer
@property (readonly, nonatomic) AVPlayerLayer *layer;
@property (retain, nonatomic) AVObservationController *observationController; // ivar: _observationController


-(void)dealloc;
-(void)startShowingContentFromSourcePlayerLayer:(id)arg0 ;


@end


#endif