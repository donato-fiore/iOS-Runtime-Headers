// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPCONTENTLAUNCHERCLUSTERLAUNCHCONTENTPARAMS_H
#define CHIPCONTENTLAUNCHERCLUSTERLAUNCHCONTENTPARAMS_H

@class NSNumber, NSString;

#import <Foundation/Foundation.h>

#import "CHIPContentLauncherClusterContentSearch.h"

@interface CHIPContentLauncherClusterLaunchContentParams : NSObject

@property (retain, nonatomic) NSNumber *autoPlay; // ivar: _autoPlay
@property (retain, nonatomic) NSString *data; // ivar: _data
@property (retain, nonatomic) CHIPContentLauncherClusterContentSearch *search; // ivar: _search


-(id)init;


@end


#endif