// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BKSHIDEVENTDELIVERYMIGSERVICE_H
#define BKSHIDEVENTDELIVERYMIGSERVICE_H

@class NSString;
@protocol BKSHIDEventDeliveryService;

#import <Foundation/Foundation.h>


@interface BKSHIDEventDeliveryMIGService : NSObject <BKSHIDEventDeliveryService>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)setBufferingPredicates:(id)arg0 ;
-(void)setDeferringRules:(id)arg0 ;
-(void)setDiscreteDispatchingRuleSets:(id)arg0 ;
-(void)setKeyCommandsDispatchingRules:(id)arg0 ;
-(void)setKeyCommandsRegistrations:(id)arg0 ;


@end


#endif