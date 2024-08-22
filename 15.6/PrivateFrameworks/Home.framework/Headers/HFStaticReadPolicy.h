// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFSTATICREADPOLICY_H
#define HFSTATICREADPOLICY_H

@class NSString;
@protocol HFCharacteristicReadPolicy;

#import <Foundation/Foundation.h>


@interface HFStaticReadPolicy : NSObject <HFCharacteristicReadPolicy>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUInteger decision; // ivar: _decision
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)policyWithDecision:(NSUInteger)arg0 ;
-(NSUInteger)evaluateWithCharacteristic:(id)arg0 traits:(*id)arg1 ;
-(id)init;
-(id)initWithDecision:(NSUInteger)arg0 ;


@end


#endif