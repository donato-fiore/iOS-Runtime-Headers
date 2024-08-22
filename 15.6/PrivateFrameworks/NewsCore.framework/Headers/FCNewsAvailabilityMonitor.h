// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCNEWSAVAILABILITYMONITOR_H
#define FCNEWSAVAILABILITYMONITOR_H

@class LSApplicationProxy, NSMutableArray, NSString;
@protocol FCNewsAvailabilityMonitor, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface FCNewsAvailabilityMonitor : NSObject <FCNewsAvailabilityMonitor>



@property (readonly, nonatomic, getter=isNewsAvailable) BOOL NewsIsAvailable; // ivar: _NewsIsAvailable
@property (retain, nonatomic) LSApplicationProxy *applicationProxy; // ivar: _applicationProxy
@property (retain, nonatomic) NSMutableArray *blocks; // ivar: _blocks
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;


-(id)init;
-(id)initWithApplicationProxy:(id)arg0 queue:(id)arg1 ;
-(id)initWithProcessVariant:(NSUInteger)arg0 ;
-(id)initWithProcessVariant:(NSUInteger)arg0 queue:(id)arg1 ;
-(void)_updateAvailability;
-(void)addNotificationBlock:(id)arg0 ;
-(void)dealloc;


@end


#endif