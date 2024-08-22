// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef XRSTRINGPAIR_H
#define XRSTRINGPAIR_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface XRStringPair : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *first; // ivar: _first
@property (readonly, nonatomic) NSString *second; // ivar: _second


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hashValue;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFirst:(id)arg0 second:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif