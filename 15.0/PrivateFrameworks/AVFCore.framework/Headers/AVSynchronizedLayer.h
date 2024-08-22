// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


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
-(id)init;
-(void)_removeSelfFromPlayerItem;
-(void)dealloc;
-(void)layerDidBecomeVisible:(BOOL)arg0 ;


@end


#endif