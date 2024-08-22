// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CASTATEADDELEMENT_H
#define CASTATEADDELEMENT_H

@class NSString;


#import "CAStateElement.h"

@interface CAStateAddElement : CAStateElement

@property (retain, nonatomic) id *beforeObject; // ivar: _beforeObject
@property (copy, nonatomic) NSString *keyPath; // ivar: _keyPath
@property (retain, nonatomic) id *object; // ivar: _object


+(BOOL)supportsSecureCoding;
-(BOOL)CAMLTypeSupportedForKey:(id)arg0 ;
-(BOOL)matches:(id)arg0 ;
-(id)CAMLTypeForKey:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 ;
-(void)CAMLParser:(id)arg0 setValue:(id)arg1 forKey:(id)arg2 ;
-(void)apply:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCAMLWriter:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)foreachLayer:(id)arg0 ;


@end


#endif