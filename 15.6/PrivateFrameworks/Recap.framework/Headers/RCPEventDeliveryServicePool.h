// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RCPEVENTDELIVERYSERVICEPOOL_H
#define RCPEVENTDELIVERYSERVICEPOOL_H

@class NSMutableDictionary;
@protocol RCPEventDeliveryServicePool, RCPEventDeliveryService;

#import <Foundation/Foundation.h>


@interface RCPEventDeliveryServicePool : NSObject <RCPEventDeliveryServicePool>



@property (retain, nonatomic) NSMutableDictionary *deliveryServicesBySenderID; // ivar: _deliveryServicesBySenderID
@property (retain, nonatomic) NSMutableDictionary *deliveryServicesBySenderProperties; // ivar: _deliveryServicesBySenderProperties
@property (retain, nonatomic) NSObject<RCPEventDeliveryService> *fallbackDeliveryService; // ivar: _fallbackDeliveryService
@property (nonatomic) BOOL shouldIgnoreSenderProperties; // ivar: _shouldIgnoreSenderProperties


-(BOOL)prewarmForSenderProperties:(id)arg0 withError:(*id)arg1 ;
-(id)_findServiceForSenderProperties:(id)arg0 ;
-(id)deliveryServiceForSenderProperties:(id)arg0 ;
-(id)init;
-(void)tearDown;


@end


#endif