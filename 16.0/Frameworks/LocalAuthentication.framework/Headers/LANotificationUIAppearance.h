// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LANOTIFICATIONUIAPPEARANCE_H
#define LANOTIFICATIONUIAPPEARANCE_H



#import "LANotificationOfBooleanState.h"

@interface LANotificationUIAppearance : LANotificationOfBooleanState

@property (readonly, nonatomic) BOOL didDisappear;
@property (readonly, nonatomic) BOOL isDisplayed;
@property (readonly, nonatomic) BOOL willAppear;


-(id)darwinNotificationForBoolValue:(BOOL)arg0 ;
-(void)newValue:(id)arg0 oldValue:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif