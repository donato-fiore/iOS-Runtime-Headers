// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFLEGACYBLOCKBASEDREADPOLICY_H
#define HFLEGACYBLOCKBASEDREADPOLICY_H

@class NSString;
@protocol HFCharacteristicReadPolicy;

#import <Foundation/Foundation.h>


@interface HFLegacyBlockBasedReadPolicy : NSObject <HFCharacteristicReadPolicy>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) id *readValidator; // ivar: _readValidator
@property (readonly) Class superclass;


-(NSUInteger)evaluateWithCharacteristic:(id)arg0 traits:(*id)arg1 ;
-(id)init;
-(id)initWithReadValidator:(id)arg0 ;


@end


#endif