// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSFROZENBAGVALUE_H
#define AMSFROZENBAGVALUE_H

@protocol AMSBagDataSourceProtocol;


#import "AMSBagValue.h"

@interface AMSFrozenBagValue : AMSBagValue

@property (retain, nonatomic) NSObject<AMSBagDataSourceProtocol> *dataSource; // ivar: _dataSource


-(id)initWithKey:(id)arg0 value:(id)arg1 valueType:(NSUInteger)arg2 ;


@end


#endif