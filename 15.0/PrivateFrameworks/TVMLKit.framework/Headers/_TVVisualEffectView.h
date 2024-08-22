// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TVVISUALEFFECTVIEW_H
#define _TVVISUALEFFECTVIEW_H

@class UIVisualEffectView, UIView;



@interface _TVVisualEffectView : UIVisualEffectView

@property (weak, nonatomic) UIView *hostView; // ivar: _hostView


+(void)addHostView:(id)arg0 ;
+(void)disableForHostView:(id)arg0 ;
+(void)enableForHostView:(id)arg0 ;
+(void)removeHostView:(id)arg0 ;
-(void)_disablement:(id)arg0 ;
-(void)_setDisabled:(BOOL)arg0 ;
-(void)dealloc;
-(void)didMoveToWindow;


@end


#endif