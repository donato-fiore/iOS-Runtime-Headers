// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SCLWATCHSERVER_H
#define SCLWATCHSERVER_H


#import <Foundation/Foundation.h>

#import "SCLSchoolModeManager.h"

@interface SCLWatchServer : NSObject

@property (readonly, nonatomic) SCLSchoolModeManager *schoolModeManager; // ivar: _schoolModeManager


+(id)sharedWatchServer;
-(void)run;


@end


#endif