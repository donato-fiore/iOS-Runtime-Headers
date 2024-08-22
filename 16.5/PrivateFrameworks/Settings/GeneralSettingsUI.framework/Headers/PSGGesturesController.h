// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSGGESTURESCONTROLLER_H
#define PSGGESTURESCONTROLLER_H

@class PSListController;


#import "PSGCornerGestureDefaults.h"

@interface PSGGesturesController : PSListController {
    PSGCornerGestureDefaults *_cornerGestureDefaults;
    BOOL _allowFingerToSwipeFromCorner;
}




-(BOOL)_allowFingerToSwipeFromCorner;
-(id)allowFingerToSwipeFromCorner:(id)arg0 ;
-(id)bottomLeftCornerGestureFeature:(id)arg0 ;
-(id)bottomRightCornerGestureFeature:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)specifiers;
-(void)_updateCornerSwipeSpecifiers;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)setAllowFingerToSwipeFromCorner:(id)arg0 specifier:(id)arg1 ;
-(void)setBottomLeftCornerGestureFeature:(id)arg0 specifier:(id)arg1 ;
-(void)setBottomRightCornerGestureFeature:(id)arg0 specifier:(id)arg1 ;


@end


#endif