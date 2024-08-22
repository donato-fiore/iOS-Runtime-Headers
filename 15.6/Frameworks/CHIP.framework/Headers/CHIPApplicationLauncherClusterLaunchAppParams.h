// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPAPPLICATIONLAUNCHERCLUSTERLAUNCHAPPPARAMS_H
#define CHIPAPPLICATIONLAUNCHERCLUSTERLAUNCHAPPPARAMS_H

@class NSData;

#import <Foundation/Foundation.h>

#import "CHIPApplicationLauncherClusterApplication.h"

@interface CHIPApplicationLauncherClusterLaunchAppParams : NSObject

@property (retain, nonatomic) CHIPApplicationLauncherClusterApplication *application; // ivar: _application
@property (retain, nonatomic) NSData *data; // ivar: _data


-(id)init;


@end


#endif