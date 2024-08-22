// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTTIMERMIGRATOR_H
#define MTTIMERMIGRATOR_H


#import <Foundation/Foundation.h>

#import "MTTimer.h"

@interface MTTimerMigrator : NSObject

@property (retain, nonatomic) MTTimer *timer; // ivar: _timer


-(void)migrateFromOldStorage;
-(void)removeFromOldStorage;


@end


#endif