// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRTARGETNAVIGATORCLUSTERNAVIGATETARGETPARAMS_H
#define MTRTARGETNAVIGATORCLUSTERNAVIGATETARGETPARAMS_H

@class NSString, NSNumber;

#import <Foundation/Foundation.h>


@interface MTRTargetNavigatorClusterNavigateTargetParams : NSObject

@property (retain, nonatomic) NSString *data; // ivar: _data
@property (retain, nonatomic) NSNumber *target; // ivar: _target
@property (retain, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs


-(id)description;
-(id)init;


@end


#endif