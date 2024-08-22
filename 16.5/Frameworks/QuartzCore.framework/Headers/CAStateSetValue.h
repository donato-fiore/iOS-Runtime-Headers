// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CASTATESETVALUE_H
#define CASTATESETVALUE_H

@class NSString;


#import "CAStateElement.h"

@interface CAStateSetValue : CAStateElement {
    id *_value;
}


@property (copy, nonatomic) NSString *keyPath; // ivar: _keyPath
@property (retain, nonatomic) id *value;


+(BOOL)supportsSecureCoding;
-(BOOL)CAMLTypeSupportedForKey:(id)arg0 ;
-(BOOL)matches:(id)arg0 ;
-(id)CAMLTypeForKey:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 ;
-(void)apply:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCAMLWriter:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)foreachLayer:(id)arg0 ;


@end


#endif