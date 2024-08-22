// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CASTATETRANSITIONELEMENT_H
#define CASTATETRANSITIONELEMENT_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CAAnimation.h"
#import "CALayer.h"

@interface CAStateTransitionElement : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) CAAnimation *animation; // ivar: _animation
@property (nonatomic) CGFloat beginTime;
@property (nonatomic) CGFloat duration;
@property (getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (copy, nonatomic) NSString *key; // ivar: _key
@property (weak, nonatomic) CALayer *target; // ivar: _target


+(BOOL)supportsSecureCoding;
+(void)CAMLParserStartElement:(id)arg0 ;
-(id)CAMLTypeForKey:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)CAMLParser:(id)arg0 setValue:(id)arg1 forKey:(id)arg2 ;
-(void)dealloc;
-(void)encodeWithCAMLWriter:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif