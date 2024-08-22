// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CASTATEELEMENT_H
#define CASTATEELEMENT_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CAStateElement.h"
#import "CALayer.h"

@interface CAStateElement : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *keyPath;
@property (retain, nonatomic) CAStateElement *source; // ivar: _source
@property (weak, nonatomic) CALayer *target; // ivar: _target


+(BOOL)supportsSecureCoding;
+(void)CAMLParserStartElement:(id)arg0 ;
-(BOOL)CAMLTypeSupportedForKey:(id)arg0 ;
-(BOOL)matches:(id)arg0 ;
-(id)CAMLTypeForKey:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)save;
-(void)CAMLParser:(id)arg0 setValue:(id)arg1 forKey:(id)arg2 ;
-(void)apply:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCAMLWriter:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)foreachLayer:(id)arg0 ;


@end


#endif