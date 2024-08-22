// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCCDATEPROVIDER_H
#define FCCDATEPROVIDER_H

@class NSUserDefaults;

#import <Foundation/Foundation.h>


@interface FCCDateProvider : NSObject {
    NSUserDefaults *_userDefaults;
}




-(id)coachingCalendar;
-(id)coachingDate;
-(id)init;


@end


#endif