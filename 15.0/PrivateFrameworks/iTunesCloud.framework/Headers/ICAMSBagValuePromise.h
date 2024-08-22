// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICAMSBAGVALUEPROMISE_H
#define ICAMSBAGVALUEPROMISE_H

@class AMSPromise, NSString;



@interface ICAMSBagValuePromise : AMSPromise

@property (readonly, copy, nonatomic) NSString *bagKey; // ivar: _bagKey
@property (readonly, nonatomic) NSUInteger bagValueType; // ivar: _bagValueType


-(id)initWithBagKey:(id)arg0 bagValueType:(NSUInteger)arg1 ;


@end


#endif