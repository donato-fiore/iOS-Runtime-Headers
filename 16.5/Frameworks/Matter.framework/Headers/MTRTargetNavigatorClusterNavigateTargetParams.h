// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRTARGETNAVIGATORCLUSTERNAVIGATETARGETPARAMS_H
#define MTRTARGETNAVIGATORCLUSTERNAVIGATETARGETPARAMS_H

@class NSString, NSNumber;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MTRTargetNavigatorClusterNavigateTargetParams : NSObject <NSCopying>



@property (copy, nonatomic) NSString *data; // ivar: _data
@property (copy, nonatomic) NSNumber *serverSideProcessingTimeout; // ivar: _serverSideProcessingTimeout
@property (copy, nonatomic) NSNumber *target; // ivar: _target
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif