// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BRCRETRYCOUNTER_H
#define BRCRETRYCOUNTER_H


#import <Foundation/Foundation.h>


@interface BRCRetryCounter : NSObject {
    BOOL _scheduled;
}


@property (readonly, nonatomic) NSInteger latestRetry; // ivar: _latestRetry
@property (readonly, nonatomic) unsigned int retryCount; // ivar: _retryCount
@property (readonly, nonatomic) NSInteger throttleHash; // ivar: _throttleHash


-(id)initWithThrottleHash:(NSInteger)arg0 ;
-(void)incrementRetry;
-(void)schedule;


@end


#endif