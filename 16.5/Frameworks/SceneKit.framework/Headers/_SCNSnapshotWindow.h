// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SCNSNAPSHOTWINDOW_H
#define _SCNSNAPSHOTWINDOW_H

@class UIWindow;



@interface _SCNSnapshotWindow : UIWindow



-(BOOL)_canBecomeKeyWindow;
-(BOOL)_isSettingFirstResponder;
-(id)_hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 windowServerHitTestWindow:(id)arg2 ;
-(id)scnView;
-(struct CGPoint )_warpPoint:(struct CGPoint )arg0 outOfBounds:(*BOOL)arg1 ;
-(struct CGPoint )warpPoint:(struct CGPoint )arg0 ;
-(void)_setFirstResponder:(id)arg0 ;
-(void)dealloc;


@end


#endif