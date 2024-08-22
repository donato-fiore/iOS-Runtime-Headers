// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNOBJCMETHOD_H
#define CNOBJCMETHOD_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CNObjCMethod : NSObject

@property (readonly) *unk implementation; // ivar: _implementation
@property (readonly, copy) NSString *name; // ivar: _name
@property (readonly) SEL selector;
@property (readonly, copy) NSString *typeEncoding; // ivar: _typeEncoding


+(id)methodWithName:(id)arg0 implementation:(*unk)arg1 typeEncoding:(id)arg2 ;
-(id)initWithMethod:(struct objc_method *)arg0 ;
-(id)initWithName:(id)arg0 implementation:(*unk)arg1 typeEncoding:(id)arg2 ;
-(id)methodBySettingName:(id)arg0 ;
-(id)performOnObject:(id)arg0 ;


@end


#endif