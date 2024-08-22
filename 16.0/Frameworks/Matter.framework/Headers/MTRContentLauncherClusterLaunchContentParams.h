// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRCONTENTLAUNCHERCLUSTERLAUNCHCONTENTPARAMS_H
#define MTRCONTENTLAUNCHERCLUSTERLAUNCHCONTENTPARAMS_H

@class NSNumber, NSString;

#import <Foundation/Foundation.h>

#import "MTRContentLauncherClusterContentSearch.h"

@interface MTRContentLauncherClusterLaunchContentParams : NSObject

@property (retain, nonatomic) NSNumber *autoPlay; // ivar: _autoPlay
@property (retain, nonatomic) NSString *data; // ivar: _data
@property (retain, nonatomic) MTRContentLauncherClusterContentSearch *search; // ivar: _search
@property (retain, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs


-(id)description;
-(id)init;


@end


#endif