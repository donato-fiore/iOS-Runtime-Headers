// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRAPPLICATIONLAUNCHERCLUSTERLAUNCHAPPPARAMS_H
#define MTRAPPLICATIONLAUNCHERCLUSTERLAUNCHAPPPARAMS_H

@class NSData, NSNumber;

#import <Foundation/Foundation.h>

#import "MTRApplicationLauncherClusterApplication.h"

@interface MTRApplicationLauncherClusterLaunchAppParams : NSObject

@property (retain, nonatomic) MTRApplicationLauncherClusterApplication *application; // ivar: _application
@property (retain, nonatomic) NSData *data; // ivar: _data
@property (retain, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs


-(id)description;
-(id)init;


@end


#endif