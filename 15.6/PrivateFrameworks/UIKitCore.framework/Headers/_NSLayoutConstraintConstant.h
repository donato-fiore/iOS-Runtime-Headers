// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _NSLAYOUTCONSTRAINTCONSTANT_H
#define _NSLAYOUTCONSTRAINTCONSTANT_H

@class NSString;
@protocol NSCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface _NSLayoutConstraintConstant : NSObject <NSCoding, NSCopying>



@property (readonly, nonatomic) CGFloat numericValue; // ivar: _numericValue
@property (readonly, copy, nonatomic) NSString *symbolicValue; // ivar: _symbolicValue


+(id)constantWithSymbolicValue:(id)arg0 numericValue:(CGFloat)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSymbolicValue:(id)arg0 numericValue:(CGFloat)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif