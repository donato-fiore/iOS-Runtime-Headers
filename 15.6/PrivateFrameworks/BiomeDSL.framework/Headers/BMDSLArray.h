// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BMDSLARRAY_H
#define BMDSLARRAY_H

@class NSString, NSArray;


#import "BMDSL.h"

@interface BMDSLArray : BMDSL

@property (copy, nonatomic) NSString *valueClassName; // ivar: _valueClassName
@property (readonly, copy, nonatomic) NSArray *values; // ivar: _values


+(BOOL)supportsSecureCoding;
-(id)bpsPublisher;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 version:(unsigned int)arg1 values:(id)arg2 valueClassName:(id)arg3 ;
-(id)initWithValues:(id)arg0 valueClassName:(id)arg1 ;
-(id)upstreams;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif