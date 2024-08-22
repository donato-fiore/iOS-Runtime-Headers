// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFBLOCKBASEDREADPOLICY_H
#define HFBLOCKBASEDREADPOLICY_H

@class NSString;
@protocol HFCharacteristicReadPolicy;

#import <Foundation/Foundation.h>


@interface HFBlockBasedReadPolicy : NSObject <HFCharacteristicReadPolicy>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) id *readPolicyBlock; // ivar: _readPolicyBlock
@property (readonly) Class superclass;


-(NSUInteger)evaluateWithCharacteristic:(id)arg0 traits:(*id)arg1 ;
-(id)init;
-(id)initWithReadPolicyBlock:(id)arg0 ;


@end


#endif