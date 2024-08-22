// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBSCENELAYOUTWINDOW_H
#define SBSCENELAYOUTWINDOW_H



#import "SBWindow.h"

@interface SBSceneLayoutWindow : SBWindow



+(BOOL)sb_autorotates;
-(id)_layoutController;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)layoutCoordinateSpace;
-(id)referenceCoordinateSpace;


@end


#endif