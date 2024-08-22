// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVSYNCHRONIZEDLAYER_H
#define AVSYNCHRONIZEDLAYER_H

@class CALayer;


#import "AVSynchronizedLayerInternal.h"
#import "AVPlayerItem.h"

@interface AVSynchronizedLayer : CALayer {
    AVSynchronizedLayerInternal *_syncLayer;
}


@property (retain, nonatomic) AVPlayerItem *playerItem;


+(id)synchronizedLayerWithPlayerItem:(id)arg0 ;
+(void)initialize;
-(BOOL)_isVisible;
-(id)_popAllOldPlayerItems;
-(id)init;
-(void)_removeSelfFromPlayerItem:(id)arg0 ;
-(void)_updatePlayerItemState;
-(void)dealloc;
-(void)layerDidBecomeVisible:(BOOL)arg0 ;


@end


#endif