// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EKUIDEBUGPREFERENCES_H
#define EKUIDEBUGPREFERENCES_H

@class CalPreferences;

#import <Foundation/Foundation.h>


@interface EKUIDebugPreferences : NSObject {
    CalPreferences *_preferences;
}


@property (nonatomic) BOOL showInviteesAndMoreRegion;
@property (nonatomic) BOOL showReportAProblemNotificationButton;


+(id)shared;
-(id)init;


@end


#endif