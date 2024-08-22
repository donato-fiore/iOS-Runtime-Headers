// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRMEDIAPLAYBACKCLUSTERSKIPBACKWARDPARAMS_H
#define MTRMEDIAPLAYBACKCLUSTERSKIPBACKWARDPARAMS_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface MTRMediaPlaybackClusterSkipBackwardParams : NSObject

@property (retain, nonatomic) NSNumber *deltaPositionMilliseconds; // ivar: _deltaPositionMilliseconds
@property (retain, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs


-(id)description;
-(id)init;


@end


#endif