// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRCONTENTLAUNCHERCLUSTERLAUNCHCONTENTPARAMS_H
#define MTRCONTENTLAUNCHERCLUSTERLAUNCHCONTENTPARAMS_H

@class NSNumber, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "MTRContentLauncherClusterContentSearchStruct.h"

@interface MTRContentLauncherClusterLaunchContentParams : NSObject <NSCopying>



@property (copy, nonatomic) NSNumber *autoPlay; // ivar: _autoPlay
@property (copy, nonatomic) NSString *data; // ivar: _data
@property (copy, nonatomic) MTRContentLauncherClusterContentSearchStruct *search; // ivar: _search
@property (copy, nonatomic) NSNumber *serverSideProcessingTimeout; // ivar: _serverSideProcessingTimeout
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif