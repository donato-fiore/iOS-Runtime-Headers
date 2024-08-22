// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTNEWSSOURCEAVAILABILITYENTRY_H
#define NTNEWSSOURCEAVAILABILITYENTRY_H

@class FCNewsAvailabilityMonitor, NSString, FCNetworkReachability;
@protocol NTSourceAvailabilityEntry, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NTNewsSourceAvailabilityEntry : NSObject <NTSourceAvailabilityEntry>



@property (retain, nonatomic) FCNewsAvailabilityMonitor *NewsAvailabilityMonitor; // ivar: _NewsAvailabilityMonitor
@property (copy, nonatomic) id *availabilityChangedNotificationBlock; // ivar: _availabilityChangedNotificationBlock
@property (nonatomic, getter=isAvailable) BOOL available; // ivar: _available
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isLikelyAvailable) BOOL likelyAvailable;
@property (retain, nonatomic) FCNetworkReachability *networkReachability; // ivar: _networkReachability
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;
@property (readonly, nonatomic) Class todayResultsFetchDescriptorClass;


-(BOOL)_isAvailableAssumingStoreFrontIsSupported:(BOOL)arg0 ;
-(id)init;
-(id)initWithNetworkReachability:(id)arg0 processVariant:(NSUInteger)arg1 queue:(id)arg2 ;
-(void)_updateAvailability;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif