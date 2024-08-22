// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FIGVIDEOCONTAINERLAYER_H
#define FIGVIDEOCONTAINERLAYER_H

@class CALayer, NSString;


#import "FigBaseCALayer.h"

@interface FigVideoContainerLayer : FigBaseCALayer {
    CALayer *_videoLayer;
    CALayer *_STSLayer;
}


@property (retain, nonatomic) NSString *STSLabel; // ivar: _STSLabel
@property (nonatomic, getter=isForScrubbingOnly) BOOL forScrubbingOnly; // ivar: _isForScrubbingOnly
@property (nonatomic) BOOL shouldResizeVideoLayer; // ivar: _shouldResizeVideoLayer
@property (retain, nonatomic) CALayer *videoLayer;


+(id)defaultActionForKey:(id)arg0 ;
-(id)actionForKey:(id)arg0 ;
-(id)init;
-(void)dealloc;
-(void)layoutSublayers;
-(void)setToneMapToStandardDynamicRange:(BOOL)arg0 ;


@end


#endif