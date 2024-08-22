// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRCHANNELCLUSTERCHANGECHANNELPARAMS_H
#define MTRCHANNELCLUSTERCHANGECHANNELPARAMS_H

@class NSString, NSNumber;

#import <Foundation/Foundation.h>


@interface MTRChannelClusterChangeChannelParams : NSObject

@property (retain, nonatomic) NSString *match; // ivar: _match
@property (retain, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs


-(id)description;
-(id)init;


@end


#endif