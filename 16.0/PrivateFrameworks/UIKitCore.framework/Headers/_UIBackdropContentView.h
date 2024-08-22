// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIBACKDROPCONTENTVIEW_H
#define _UIBACKDROPCONTENTVIEW_H



#import "UIView.h"

@interface _UIBackdropContentView : UIView {
    BOOL _isForcingLayout;
}




-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_monitoredView:(id)arg0 didMoveFromSuperview:(id)arg1 toSuperview:(id)arg2 ;
-(void)_monitoredView:(id)arg0 willMoveFromSuperview:(id)arg1 toSuperview:(id)arg2 ;
-(void)backdropView:(id)arg0 recursivelyUpdateMaskViewsForView:(id)arg1 ;
-(void)didMoveToWindow;
-(void)recursivelyRemoveBackdropMaskViewsForView:(id)arg0 ;


@end


#endif