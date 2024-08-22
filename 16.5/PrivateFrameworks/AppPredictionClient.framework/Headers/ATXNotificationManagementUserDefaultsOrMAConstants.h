// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXNOTIFICATIONMANAGEMENTUSERDEFAULTSORMACONSTANTS_H
#define ATXNOTIFICATIONMANAGEMENTUSERDEFAULTSORMACONSTANTS_H

@class NSUserDefaults;

#import <Foundation/Foundation.h>

#import "ATXNotificationManagementMAConstants.h"

@interface ATXNotificationManagementUserDefaultsOrMAConstants : NSObject {
    ATXNotificationManagementMAConstants *_constants;
    NSUserDefaults *_defaults;
}




-(CGFloat)doubleForKey:(id)arg0 defaultReturnValue:(CGFloat)arg1 ;
-(id)init;
-(id)numberForKey:(id)arg0 defaultReturnValue:(id)arg1 ;


@end


#endif