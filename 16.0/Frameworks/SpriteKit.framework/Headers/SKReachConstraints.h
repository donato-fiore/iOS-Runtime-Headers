// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKREACHCONSTRAINTS_H
#define SKREACHCONSTRAINTS_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SKReachConstraints : NSObject <NSSecureCoding>



@property (nonatomic) CGFloat lowerAngleLimit; // ivar: _lowerAngleLimit
@property (nonatomic) CGFloat upperAngleLimit; // ivar: _upperAngleLimit


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLowerAngleLimit:(CGFloat)arg0 upperAngleLimit:(CGFloat)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif