// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMAPPSTATEMONITOR_H
#define IMAPPSTATEMONITOR_H

@class UIApplication;

#import <Foundation/Foundation.h>


@interface IMAppStateMonitor : NSObject

@property (retain, nonatomic) UIApplication *app; // ivar: _app
@property (nonatomic) NSInteger applicationState; // ivar: _applicationState
@property (nonatomic) CGFloat backgroundTimeRemaining; // ivar: _backgroundTimeRemaining


+(id)sharedInstance;
-(id)init;


@end


#endif