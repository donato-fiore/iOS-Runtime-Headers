// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFOBJCTYPE_H
#define SFOBJCTYPE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SFObjCType : NSObject

@property (readonly, nonatomic) NSString *className; // ivar: _className
@property (readonly, nonatomic) NSInteger code; // ivar: _code
@property (readonly, nonatomic) NSString *encoding; // ivar: _encoding
@property (readonly, nonatomic) NSUInteger flags; // ivar: _flags
@property (readonly, nonatomic, getter=isFloatingPointNumber) BOOL floatingPointNumber;
@property (readonly, nonatomic, getter=isIntegerNumber) BOOL integerNumber;
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic, getter=isNumber) BOOL number;
@property (readonly, nonatomic, getter=isObject) BOOL object;
@property (readonly, nonatomic) NSUInteger size; // ivar: _size


+(id)typeForEncoding:(char *)arg0 ;
+(id)typeForValue:(id)arg0 ;
-(id)initWithCode:(NSInteger)arg0 encoding:(id)arg1 name:(id)arg2 className:(id)arg3 size:(NSUInteger)arg4 flags:(NSUInteger)arg5 ;
-(id)objectWithBytes:(*void)arg0 ;
-(void)getBytes:(*void)arg0 forObject:(id)arg1 ;


@end


#endif