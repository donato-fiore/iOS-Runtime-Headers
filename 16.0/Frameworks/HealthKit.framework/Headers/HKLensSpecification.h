// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKLENSSPECIFICATION_H
#define HKLENSSPECIFICATION_H


#import <Foundation/Foundation.h>

#import "HKQuantity.h"

@interface HKLensSpecification : NSObject

@property (readonly, copy, nonatomic) HKQuantity *addPower; // ivar: _addPower
@property (readonly, copy, nonatomic) HKQuantity *axis; // ivar: _axis
@property (readonly, copy, nonatomic) HKQuantity *cylinder; // ivar: _cylinder
@property (readonly, copy, nonatomic) HKQuantity *sphere; // ivar: _sphere


-(BOOL)isEqual:(id)arg0 ;
-(id)_initWithSphere:(id)arg0 cylinder:(id)arg1 axis:(id)arg2 addPower:(id)arg3 ;
-(id)description;


@end


#endif