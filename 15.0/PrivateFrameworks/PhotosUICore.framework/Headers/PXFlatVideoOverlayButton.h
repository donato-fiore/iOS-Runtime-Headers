// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXFLATVIDEOOVERLAYBUTTON_H
#define PXFLATVIDEOOVERLAYBUTTON_H

@class UIButton;
@protocol PXVideoOverlayButton;



@interface PXFlatVideoOverlayButton : UIButton <PXVideoOverlayButton>

 {
    NSInteger _style;
    id *_target;
    SEL _action;
}


@property (nonatomic, setter=_setDidConfigureForPause:) BOOL _didConfigureForPause; // ivar: __didConfigureForPause
@property (nonatomic) BOOL showAsPause; // ivar: _showAsPause


-(NSInteger)style;
-(id)initWithStyle:(NSInteger)arg0 ;
-(void)_handleTap:(id)arg0 ;
-(void)setTarget:(id)arg0 action:(SEL)arg1 ;


@end


#endif