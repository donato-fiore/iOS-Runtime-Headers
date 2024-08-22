// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPPOLLCONTROLCLUSTERCHECKINRESPONSEPARAMS_H
#define CHIPPOLLCONTROLCLUSTERCHECKINRESPONSEPARAMS_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface CHIPPollControlClusterCheckInResponseParams : NSObject

@property (retain, nonatomic) NSNumber *fastPollTimeout; // ivar: _fastPollTimeout
@property (retain, nonatomic) NSNumber *startFastPolling; // ivar: _startFastPolling


-(id)init;


@end


#endif