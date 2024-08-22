// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RMDUMMYDATAMANAGER_H
#define RMDUMMYDATAMANAGER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "RMConnectionClient.h"

@interface RMDummyDataManager : NSObject

@property (retain, nonatomic) RMConnectionClient *connectionClient; // ivar: _connectionClient
@property (nonatomic) BOOL isReceivingRelatveData; // ivar: _isReceivingRelatveData
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (copy, nonatomic) id *relativeDataCallback; // ivar: _relativeDataCallback


-(id)dummyDataConfiguration;
-(id)initWithQueue:(id)arg0 ;
-(void)invalidate;
-(void)startReceivingDummyDataUpdates:(id)arg0 ;
-(void)stopReceivingDummyDataUpdates;


@end


#endif