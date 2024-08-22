// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRAPPLICATIONLAUNCHERCLUSTERHIDEAPPPARAMS_H
#define MTRAPPLICATIONLAUNCHERCLUSTERHIDEAPPPARAMS_H

@class NSNumber;

#import <Foundation/Foundation.h>

#import "MTRApplicationLauncherClusterApplication.h"

@interface MTRApplicationLauncherClusterHideAppParams : NSObject

@property (retain, nonatomic) MTRApplicationLauncherClusterApplication *application; // ivar: _application
@property (retain, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs


-(id)description;
-(id)init;


@end


#endif