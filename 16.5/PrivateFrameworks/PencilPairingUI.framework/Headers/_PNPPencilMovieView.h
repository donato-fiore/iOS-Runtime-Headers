// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PNPPENCILMOVIEVIEW_H
#define _PNPPENCILMOVIEVIEW_H

@class UIView, AVPlayer;



@interface _PNPPencilMovieView : UIView {
    AVPlayer *_player;
    BOOL _repeat;
}




+(CGFloat)_playbackRate;
+(Class)layerClass;
-(id)_playerLayer;
-(void)_applyFilterToLayer;
-(void)_playbackEnded;
-(void)completeRevolutionWithCompletionBlock:(id)arg0 ;
-(void)prepare;
-(void)teardown;


@end


#endif