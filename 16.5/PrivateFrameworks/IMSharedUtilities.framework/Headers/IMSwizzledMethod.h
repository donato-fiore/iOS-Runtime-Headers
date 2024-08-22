// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMSWIZZLEDMETHOD_H
#define IMSWIZZLEDMETHOD_H


#import <Foundation/Foundation.h>

#import "IMSwizzledMethod.h"

@interface IMSwizzledMethod : NSObject

@property (readonly, nonatomic) *unk implementation; // ivar: _implementation
@property (readonly, nonatomic) *objc_method method; // ivar: _method
@property (readonly, nonatomic, getter=isSwizzled) BOOL swizzled;
@property (readonly, nonatomic) Class swizzledClass; // ivar: _swizzledClass
@property (readonly, nonatomic) SEL swizzledSelector; // ivar: _swizzledSelector
@property (retain, nonatomic) IMSwizzledMethod *swizzledWithMethod; // ivar: _swizzledWithMethod
@property (readonly, nonatomic) char * typeEncoding; // ivar: _typeEncoding


-(BOOL)swizzleWithMethod:(id)arg0 ;
-(BOOL)unswizzle;
-(id)description;
-(id)initWithClass:(Class)arg0 selector:(SEL)arg1 ;


@end


#endif