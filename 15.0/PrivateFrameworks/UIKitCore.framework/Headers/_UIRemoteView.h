// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIREMOTEVIEW_H
#define _UIREMOTEVIEW_H

@class UILayerHostView;


#import "_UIHostedWindowHostingHandle.h"

@interface _UIRemoteView : UILayerHostView

@property (nonatomic, setter=_setInheritsSecurity:) BOOL _inheritsSecurity;
@property (retain, nonatomic) _UIHostedWindowHostingHandle *hostedWindowHostingHandle; // ivar: _hostedWindowHostingHandle
@property (copy, nonatomic) id *tintColorDidChangeHandler; // ivar: _tintColorDidChangeHandler


+(BOOL)_requiresWindowTouches;
+(id)viewWithHostedWindowHostingHandle:(id)arg0 ;
-(id)_hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 windowServerHitTestWindow:(id)arg2 ;
-(id)initWithFrame:(struct CGRect )arg0 pid:(int)arg1 contextID:(unsigned int)arg2 ;
-(void)applyTransformUndoingRemoteRootLayerTransform:(struct CGAffineTransform )arg0 frame:(struct CGRect )arg1 ;
-(void)tintColorDidChange;


@end


#endif