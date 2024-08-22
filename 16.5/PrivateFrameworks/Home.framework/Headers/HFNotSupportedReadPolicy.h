// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFNOTSUPPORTEDREADPOLICY_H
#define HFNOTSUPPORTEDREADPOLICY_H

@class NSString;
@protocol HFCharacteristicReadPolicy;

#import <Foundation/Foundation.h>


@interface HFNotSupportedReadPolicy : NSObject <HFCharacteristicReadPolicy>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_requiresNotificationsForCharacteristic:(id)arg0 ;
-(NSUInteger)evaluateWithCharacteristic:(id)arg0 traits:(*id)arg1 ;


@end


#endif