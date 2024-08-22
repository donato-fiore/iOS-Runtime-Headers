// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _HDDATAFAKER_H
#define _HDDATAFAKER_H

@class HKQuantity, NSOperationQueue, NSArray, NSString;
@protocol _HDDemoDataModuleDelegate;

#import <Foundation/Foundation.h>


@interface _HDDataFaker : NSObject <_HDDemoDataModuleDelegate>

 {
    NSInteger _activityType;
    NSInteger _locationType;
    HKQuantity *_speed;
    id *_objectHandler;
    NSOperationQueue *_operationQueue;
    NSArray *_modules;
}


@property (readonly, nonatomic) NSInteger activityType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger locationType;
@property (readonly, nonatomic) HKQuantity *speed;
@property (readonly) Class superclass;


-(id)initWithActivityType:(NSInteger)arg0 locationType:(NSInteger)arg1 speed:(id)arg2 objectHandler:(id)arg3 ;
-(void)demoDataModule:(id)arg0 didProduceDataObject:(id)arg1 ;
-(void)generateDataForMinutes:(CGFloat)arg0 completion:(id)arg1 ;
-(void)start;
-(void)stop;


@end


#endif