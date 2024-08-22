// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASOOVERLAYWINDOW_H
#define ASOOVERLAYWINDOW_H

@class UIWindow;



@interface ASOOverlayWindow : UIWindow



+(BOOL)_isSystemWindow;
-(BOOL)isInternalWindow;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithWindowScene:(id)arg0 ;


@end


#endif