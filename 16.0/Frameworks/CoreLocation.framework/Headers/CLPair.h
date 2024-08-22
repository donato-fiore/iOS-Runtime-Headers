// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLPAIR_H
#define CLPAIR_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CLPair : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) int first; // ivar: _first
@property (readonly, nonatomic) int second; // ivar: _second


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFirst:(int)arg0 second:(int)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif