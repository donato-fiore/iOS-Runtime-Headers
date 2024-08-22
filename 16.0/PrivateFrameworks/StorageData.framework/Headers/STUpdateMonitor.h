// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STUPDATEMONITOR_H
#define STUPDATEMONITOR_H

@class NSString;

#import <Foundation/Foundation.h>


@interface STUpdateMonitor : NSObject

@property (readonly) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly) NSString *currentUpdateName; // ivar: _currentUpdateName
@property (readonly) NSInteger currentUpdateSize; // ivar: _currentUpdateSize


+(id)sharedMonitor;
-(void)startMonitor;
-(void)stopMonitor;
-(void)sync;


@end


#endif