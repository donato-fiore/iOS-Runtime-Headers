// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBOLDICONDRAGPLATTERWINDOW_H
#define SBOLDICONDRAGPLATTERWINDOW_H

@class NSHashTable;
@protocol SBIconDragPreviewContaining;


#import "SBSecureMainScreenActiveInterfaceOrientationWindow.h"

@interface SBOldIconDragPlatterWindow : SBSecureMainScreenActiveInterfaceOrientationWindow <SBIconDragPreviewContaining>

 {
    NSHashTable *_platterViews;
}




-(id)_iconDragPreviewContainerView;
-(void)beginTrackingPlatterView:(id)arg0 ;
-(void)stopTrackingPlatterView:(id)arg0 ;


@end


#endif