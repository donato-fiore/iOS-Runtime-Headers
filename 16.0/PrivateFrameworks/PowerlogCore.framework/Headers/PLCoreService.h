// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLCORESERVICE_H
#define PLCORESERVICE_H

@class NSMutableDictionary;


#import "PLCoreOperator.h"

@interface PLCoreService : PLCoreOperator

@property (retain) NSMutableDictionary *services; // ivar: _services


-(id)init;
-(void)startPreUnlockServices;
-(void)startServices;
-(void)stopServices;


@end


#endif