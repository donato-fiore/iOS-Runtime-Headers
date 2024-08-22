// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UISINGLEFINGERTAPEXTENSIONGESTURE_H
#define _UISINGLEFINGERTAPEXTENSIONGESTURE_H

@class NSMutableSet;


#import "UITapGestureRecognizer.h"

@interface _UISingleFingerTapExtensionGesture : UITapGestureRecognizer {
    NSMutableSet *_trackedEvents;
}




-(BOOL)_gestureCanBeginWithEvent:(id)arg0 ;
-(BOOL)_shouldReceiveTouch:(id)arg0 withEvent:(id)arg1 ;
-(NSInteger)_modifierFlags;
-(void)_resetGestureRecognizer;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;


@end


#endif