// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRMEDIAPLAYBACKCLUSTERPLAYBACKRESPONSEPARAMS_H
#define MTRMEDIAPLAYBACKCLUSTERPLAYBACKRESPONSEPARAMS_H

@class NSString, NSNumber;

#import <Foundation/Foundation.h>


@interface MTRMediaPlaybackClusterPlaybackResponseParams : NSObject

@property (retain, nonatomic) NSString *data; // ivar: _data
@property (retain, nonatomic) NSNumber *status; // ivar: _status
@property (retain, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs


-(id)description;
-(id)init;


@end


#endif