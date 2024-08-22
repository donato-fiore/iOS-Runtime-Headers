// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVPICTUREINPICTUREINDICATORVIEW_H
#define AVPICTUREINPICTUREINDICATORVIEW_H

@class UIView, NSString;


#import "AVPictureInPictureIndicatorLayer.h"

@interface AVPictureInPictureIndicatorView : UIView

@property (copy, nonatomic) NSString *customMessage; // ivar: _customMessage
@property (retain, nonatomic) AVPictureInPictureIndicatorLayer *pipIndicatorLayer; // ivar: _pipIndicatorLayer


-(void)_addIndicatorLayerIfNeeded;
-(void)_updateGeometry;
-(void)didMoveToWindow;
-(void)layoutSublayersOfLayer:(id)arg0 ;
-(void)setBackgroundColor:(id)arg0 ;


@end


#endif