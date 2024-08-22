// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CAVALUEFUNCTION_H
#define CAVALUEFUNCTION_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CAValueFunction : NSObject <NSSecureCoding>

 {
    NSString *_string;
    *void _impl;
}


@property (readonly) NSString *name;


+(BOOL)supportsSecureCoding;
+(id)functionWithName:(id)arg0 ;
+(void)CAMLParserStartElement:(id)arg0 ;
-(BOOL)apply:(*CGFloat)arg0 result:(*CGFloat)arg1 ;
-(BOOL)apply:(*CGFloat)arg0 result:(*CGFloat)arg1 parameterFunction:(*unk)arg2 context:(*void)arg3 ;
-(NSUInteger)inputCount;
-(NSUInteger)outputCount;
-(id)_initWithName:(int)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(struct Object *)CA_copyRenderValue;
-(void)dealloc;
-(void)encodeWithCAMLWriter:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif