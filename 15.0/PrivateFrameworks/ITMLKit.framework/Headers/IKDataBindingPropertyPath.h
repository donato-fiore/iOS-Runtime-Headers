// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IKDATABINDINGPROPERTYPATH_H
#define IKDATABINDINGPROPERTYPATH_H

@class NSArray, NSString;


#import "IKDataBindingValue.h"

@interface IKDataBindingPropertyPath : IKDataBindingValue

@property (readonly, copy, nonatomic) NSArray *accessorSequence; // ivar: _accessorSequence
@property (readonly, copy, nonatomic) NSString *string; // ivar: _string


+(id)pathStringForAccessorSequence:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithAccessorSequence:(id)arg0 ;
-(id)initWithAccessorSequence:(id)arg0 ;
-(id)initWithString:(id)arg0 ;
-(id)propertyPathByCombiningAccessorSequence:(id)arg0 ;
-(id)propertyPathByRemovingFirstAccessor;


@end


#endif