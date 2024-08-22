// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PUVIDEOVIEW_H
#define _PUVIDEOVIEW_H

@class UIView, ISWrappedAVPlayer;



@interface _PUVideoView : UIView {
    ISWrappedAVPlayer *_player;
}




+(Class)layerClass;
-(id)player;
-(void)setPlayer:(id)arg0 ;


@end


#endif