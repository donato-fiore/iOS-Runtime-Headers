// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRCONTENTLAUNCHERCLUSTERLAUNCHRESPONSEPARAMS_H
#define MTRCONTENTLAUNCHERCLUSTERLAUNCHRESPONSEPARAMS_H

@class NSString, NSNumber;

#import <Foundation/Foundation.h>


@interface MTRContentLauncherClusterLaunchResponseParams : NSObject

@property (retain, nonatomic) NSString *data; // ivar: _data
@property (retain, nonatomic) NSNumber *status; // ivar: _status
@property (retain, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs


-(id)description;
-(id)init;


@end


#endif