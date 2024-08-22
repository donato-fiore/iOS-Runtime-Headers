// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FIGVIDEOLAYER_H
#define FIGVIDEOLAYER_H



#import "FigBaseCALayer.h"
#import "FigVideoLayerInternal.h"

@interface FigVideoLayer : FigBaseCALayer {
    FigVideoLayerInternal *_videoLayer;
}




+(id)defaultActionForKey:(id)arg0 ;
-(BOOL)isVideoLayerBeingServiced;
-(id)actionForKey:(id)arg0 ;
-(id)init;
-(id)initWithLayer:(id)arg0 ;
-(id)layerDisplayName;
-(void)_sendVideoLayerIsBeingServicedNotification;
-(void)dealloc;
-(void)layerDidBecomeVisible:(BOOL)arg0 ;
-(void)notificationBarrier;


@end


#endif