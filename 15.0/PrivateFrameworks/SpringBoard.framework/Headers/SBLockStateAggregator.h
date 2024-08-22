// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBLOCKSTATEAGGREGATOR_H
#define SBLOCKSTATEAGGREGATOR_H

@class SBFAnalyticsClient;

#import <Foundation/Foundation.h>


@interface SBLockStateAggregator : NSObject {
    NSUInteger _lockState;
}


@property (weak, nonatomic) SBFAnalyticsClient *analyticsClient; // ivar: _analyticsClient


+(id)sharedInstance;
-(BOOL)hasAnyLockState;
-(NSUInteger)lockState;
-(id)_descriptionForLockState:(NSUInteger)arg0 ;
-(id)_initWithAnalyticsClient:(id)arg0 ;
-(id)description;
-(id)init;
-(void)_updateLockState;
-(void)dealloc;


@end


#endif