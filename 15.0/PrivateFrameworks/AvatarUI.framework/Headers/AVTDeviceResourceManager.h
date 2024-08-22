// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVTDEVICERESOURCEMANAGER_H
#define AVTDEVICERESOURCEMANAGER_H

@class NSMutableArray, NSString;
@protocol AVTDeviceResourceConsumerDelegate, AVTUILogger, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AVTDeviceResourceManager : NSObject <AVTDeviceResourceConsumerDelegate>



@property (readonly, nonatomic) NSMutableArray *consumers; // ivar: _consumers
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<AVTUILogger> *logger; // ivar: _logger
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *stateLock; // ivar: _stateLock
@property (readonly) Class superclass;


-(id)initWithLogger:(id)arg0 lockProvider:(id)arg1 ;
-(void)consumer:(id)arg0 willConsumeRenderingResourceForEstimatedDuration:(CGFloat)arg1 ;
-(void)performWorkWithConsumers:(id)arg0 ;
-(void)registerConsumer:(id)arg0 ;
-(void)unregisterConsumer:(id)arg0 ;


@end


#endif