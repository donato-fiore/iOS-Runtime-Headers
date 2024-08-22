// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRAPPLICATIONLAUNCHERCLUSTERLAUNCHERRESPONSEPARAMS_H
#define MTRAPPLICATIONLAUNCHERCLUSTERLAUNCHERRESPONSEPARAMS_H

@class NSData, NSNumber;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MTRApplicationLauncherClusterLauncherResponseParams : NSObject <NSCopying>



@property (copy, nonatomic) NSData *data; // ivar: _data
@property (copy, nonatomic) NSNumber *status; // ivar: _status
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif