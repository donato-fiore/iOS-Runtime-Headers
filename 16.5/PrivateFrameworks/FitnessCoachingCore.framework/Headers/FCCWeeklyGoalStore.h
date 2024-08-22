// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCCWEEKLYGOALSTORE_H
#define FCCWEEKLYGOALSTORE_H

@class NSUserDefaults;

#import <Foundation/Foundation.h>


@interface FCCWeeklyGoalStore : NSObject {
    NSUserDefaults *_userDefaults;
}




-(id)currentDisplayContext;
-(id)init;
-(void)clearContext;
-(void)updateDisplayContext:(id)arg0 ;


@end


#endif