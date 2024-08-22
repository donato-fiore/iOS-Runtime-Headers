// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef COMPLEX_H
#define COMPLEX_H

@class NSNumber;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface Complex : NSObject <NSCopying, NSSecureCoding>



@property (retain) NSNumber *imag; // ivar: _imag
@property (retain) NSNumber *real; // ivar: _real


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRealPart:(id)arg0 imagPart:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif