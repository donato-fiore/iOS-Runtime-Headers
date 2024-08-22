// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASDCROSSFIRESTORE_H
#define ASDCROSSFIRESTORE_H

@class NSString;
@protocol ASDServiceProvider;

#import <Foundation/Foundation.h>

#import "ASDServiceBroker.h"

@interface ASDCrossfireStore : NSObject <ASDServiceProvider>

 {
    ASDServiceBroker *_serviceBroker;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)interface;
+(id)sharedInstance;
-(id)_initWithServiceBroker:(id)arg0 ;
-(id)init;
-(void)flushMetricsWithCompletionBlock:(id)arg0 ;
-(void)getAppEventsWithCompletionBlock:(id)arg0 ;
-(void)recordLaunchesWithCompletionBlock:(id)arg0 ;
-(void)recordMetricsWithCompletionBlock:(id)arg0 ;
-(void)reportAppEvent:(id)arg0 completionBlock:(id)arg1 ;
-(void)resetMetricsWithCompletionBlock:(id)arg0 ;
-(void)sendMetricsWithCompletionBlock:(id)arg0 ;


@end


#endif