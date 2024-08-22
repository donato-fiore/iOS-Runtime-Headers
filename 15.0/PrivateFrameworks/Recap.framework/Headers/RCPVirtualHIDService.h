// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RCPVIRTUALHIDSERVICE_H
#define RCPVIRTUALHIDSERVICE_H

@class NSString, NSMutableDictionary, HIDVirtualEventService, NSDictionary;
@protocol HIDVirtualEventServiceDelegate, RCPEventDeliveryService, OS_dispatch_group;

#import <Foundation/Foundation.h>

#import "RCPEventSenderProperties.h"

@interface RCPVirtualHIDService : NSObject <HIDVirtualEventServiceDelegate, RCPEventDeliveryService>

 {
    RCPEventSenderProperties *_properties;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMutableDictionary *dynamicMetaProperties; // ivar: _dynamicMetaProperties
@property (retain, nonatomic) HIDVirtualEventService *eventService; // ivar: _eventService
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) BOOL isOpen; // ivar: _isOpen
@property (readonly, nonatomic) BOOL isRunning;
@property (retain) RCPEventSenderProperties *properties;
@property (retain, nonatomic) NSDictionary *propertyDictionary; // ivar: _propertyDictionary
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *waitForBatchGroup; // ivar: _waitForBatchGroup
@property (retain, nonatomic) NSObject<OS_dispatch_group> *waitForOpenGroup; // ivar: _waitForOpenGroup


+(id)serviceWithIdentifier:(id)arg0 properties:(id)arg1 ;
-(BOOL)setOutputEvent:(id)arg0 forService:(id)arg1 ;
-(BOOL)setProperty:(id)arg0 forKey:(id)arg1 forService:(id)arg2 ;
-(BOOL)startWithError:(*id)arg0 ;
-(id)copyEventMatching:(id)arg0 forService:(id)arg1 ;
-(id)initWithIdentifier:(id)arg0 properties:(id)arg1 ;
-(id)propertyForKey:(id)arg0 forService:(id)arg1 ;
-(void)notification:(NSInteger)arg0 withProperty:(id)arg1 forService:(id)arg2 ;
-(void)postHIDEvent:(struct __IOHIDEvent *)arg0 ;
-(void)stop;


@end


#endif