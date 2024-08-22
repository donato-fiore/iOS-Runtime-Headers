// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNPAIR_H
#define CNPAIR_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CNPair : NSObject <NSCopying, NSSecureCoding>



@property (readonly) id *first; // ivar: _first
@property (readonly) id *second; // ivar: _second


+(BOOL)supportsSecureCoding;
+(id)pairWithFirst:(id)arg0 second:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initNonMemoizedWithFirst:(id)arg0 second:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFirst:(id)arg0 second:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif