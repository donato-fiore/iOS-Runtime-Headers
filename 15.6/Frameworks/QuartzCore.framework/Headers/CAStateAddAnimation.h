// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CASTATEADDANIMATION_H
#define CASTATEADDANIMATION_H

@class NSString;


#import "CAStateElement.h"
#import "CAAnimation.h"

@interface CAStateAddAnimation : CAStateElement

@property (retain, nonatomic) CAAnimation *animation; // ivar: _animation
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