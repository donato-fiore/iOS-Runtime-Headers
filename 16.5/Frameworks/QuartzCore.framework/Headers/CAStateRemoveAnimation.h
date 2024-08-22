// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CASTATEREMOVEANIMATION_H
#define CASTATEREMOVEANIMATION_H

@class NSString;


#import "CAStateElement.h"

@interface CAStateRemoveAnimation : CAStateElement

@property (copy, nonatomic) NSString *key; // ivar: _key


+(BOOL)supportsSecureCoding;
-(BOOL)matches:(id)arg0 ;
-(id)CAMLTypeForKey:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 ;
-(void)apply:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCAMLWriter:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif