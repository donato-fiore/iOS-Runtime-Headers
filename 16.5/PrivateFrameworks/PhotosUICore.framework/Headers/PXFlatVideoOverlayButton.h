// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXFLATVIDEOOVERLAYBUTTON_H
#define PXFLATVIDEOOVERLAYBUTTON_H

@class UIButton;
@protocol PXVideoOverlayButton;


#import "PXVideoOverlayButtonConfiguration.h"

@interface PXFlatVideoOverlayButton : UIButton <PXVideoOverlayButton>

 {
    PXVideoOverlayButtonConfiguration *_overlayConfiguration;
    id *_target;
    SEL _action;
}


@property (nonatomic, setter=_setDidConfigureForPause:) BOOL _didConfigureForPause; // ivar: __didConfigureForPause
@property (nonatomic) BOOL showAsPause; // ivar: _showAsPause


-(id)initWithConfiguration:(id)arg0 ;
-(void)_handleTap:(id)arg0 ;
-(void)setTarget:(id)arg0 action:(SEL)arg1 ;


@end


#endif