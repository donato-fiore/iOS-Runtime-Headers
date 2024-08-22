// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIFOCUSBEHAVIOR_CARPLAYTOUCH_H
#define _UIFOCUSBEHAVIOR_CARPLAYTOUCH_H

@class CarPlay;



@interface _UIFocusBehavior_CarPlayTouch : CarPlay



+(id)sharedInstance;
-(BOOL)searchBarTextFieldCanBecomeFocused;
-(NSInteger)focusDeferral;


@end


#endif