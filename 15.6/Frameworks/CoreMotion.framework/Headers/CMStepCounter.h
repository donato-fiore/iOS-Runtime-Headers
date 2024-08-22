// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CMSTEPCOUNTER_H
#define CMSTEPCOUNTER_H


#import <Foundation/Foundation.h>

#import "CMStepCounterProxy.h"

@interface CMStepCounter : NSObject

@property BOOL enabled;
@property (readonly, nonatomic) CMStepCounterProxy *stepcounterProxy; // ivar: _stepcounterProxy


+(BOOL)isStepCountingAvailable;
-(id)init;
-(void)dealloc;
-(void)deleteHistory;
-(void)getTotalCountToQueue:(id)arg0 withHandler:(id)arg1 ;
-(void)queryStepCountStartingFrom:(id)arg0 to:(id)arg1 toQueue:(id)arg2 withHandler:(id)arg3 ;
-(void)startStepCountingUpdatesToQueue:(id)arg0 updateOn:(NSInteger)arg1 withHandler:(id)arg2 ;
-(void)stopStepCountingUpdates;


@end


#endif