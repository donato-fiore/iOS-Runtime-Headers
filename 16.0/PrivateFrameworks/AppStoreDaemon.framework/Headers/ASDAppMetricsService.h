// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASDAPPMETRICSSERVICE_H
#define ASDAPPMETRICSSERVICE_H

@class NSString;
@protocol ASDServiceProvider;

#import <Foundation/Foundation.h>

#import "ASDServiceBroker.h"

@interface ASDAppMetricsService : NSObject <ASDServiceProvider>

 {
    ASDServiceBroker *_serviceBroker;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)defaultService;
+(id)interface;
-(id)_initWithServiceBroker:(id)arg0 ;
-(id)init;
-(void)getMetricsEventsForType:(NSInteger)arg0 withReplyHandler:(id)arg1 ;
-(void)postMetricsEventsForType:(NSInteger)arg0 withReplyHandler:(id)arg1 ;
-(void)recordMetricsEventsForType:(NSInteger)arg0 withReplyHandler:(id)arg1 ;
-(void)resetMetricsEventsForType:(NSInteger)arg0 withReplyHandler:(id)arg1 ;


@end


#endif