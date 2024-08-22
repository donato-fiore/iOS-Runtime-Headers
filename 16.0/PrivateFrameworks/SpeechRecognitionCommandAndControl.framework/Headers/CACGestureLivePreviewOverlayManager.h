// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CACGESTURELIVEPREVIEWOVERLAYMANAGER_H
#define CACGESTURELIVEPREVIEWOVERLAYMANAGER_H



#import "CACSimpleContentViewManager.h"
#import "CACGestureLivePreviewViewController.h"

@interface CACGestureLivePreviewOverlayManager : CACSimpleContentViewManager

@property (retain, nonatomic) CACGestureLivePreviewViewController *gestureViewController; // ivar: _gestureViewController


-(BOOL)isOverlay;
-(BOOL)isPhysiciallyInteractiveOverlay;
-(void)addPointsToLiveRecordingGesturePreviewByFingerIdentifier:(id)arg0 forces:(id)arg1 atTime:(CGFloat)arg2 ;
-(void)removeTrackingForFingerIdentifier:(id)arg0 ;
-(void)showGestureLivePreviewViewer;


@end


#endif