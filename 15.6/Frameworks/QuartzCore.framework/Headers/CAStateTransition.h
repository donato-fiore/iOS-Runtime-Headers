// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CASTATETRANSITION_H
#define CASTATETRANSITION_H

@class NSArray, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CAStateTransition : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSArray *elements; // ivar: _elements
@property (copy, nonatomic) NSString *fromState; // ivar: _fromState
@property (copy, nonatomic) NSString *toState; // ivar: _toState


+(BOOL)supportsSecureCoding;
+(void)CAMLParserStartElement:(id)arg0 ;
-(CGFloat)duration;
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