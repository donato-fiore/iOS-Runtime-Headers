// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _HDDATAFAKER_H
#define _HDDATAFAKER_H

@class HKQuantity, NSOperationQueue, NSArray, NSString;
@protocol _HDDemoDataModuleDelegate;

#import <Foundation/Foundation.h>


@interface _HDDataFaker : NSObject <_HDDemoDataModuleDelegate>

 {
    NSInteger _activityType;
    HKQuantity *_speed;
    id *_objectHandler;
    NSOperationQueue *_operationQueue;
    NSArray *_modules;
}


@property (readonly, nonatomic) NSInteger activityType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HKQuantity *speed;
@property (readonly) Class superclass;


-(id)initWithActivityType:(NSInteger)arg0 speed:(id)arg1 objectHandler:(id)arg2 ;
-(void)demoDataModule:(id)arg0 didProduceDataObject:(id)arg1 ;
-(void)generateDataForMinutes:(CGFloat)arg0 completion:(id)arg1 ;
-(void)start;
-(void)stop;


@end


#endif