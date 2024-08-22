// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _AVSIMPLEPLAYERLAYERVIEW_H
#define _AVSIMPLEPLAYERLAYERVIEW_H

@class UIView, AVPlayerLayer;



@interface _AVSimplePlayerLayerView : UIView

@property (readonly, nonatomic) AVPlayerLayer *playerLayer;


+(Class)layerClass;
+(id)keyPathsForValuesAffectingPlayerLayer;


@end


#endif