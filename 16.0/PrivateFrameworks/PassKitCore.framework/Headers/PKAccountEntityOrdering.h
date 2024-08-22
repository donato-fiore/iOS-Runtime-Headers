// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKACCOUNTENTITYORDERING_H
#define PKACCOUNTENTITYORDERING_H

@class NSArray;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PKAccountEntityOrdering : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic) NSUInteger context; // ivar: _context
@property (retain, nonatomic) NSArray *ordering; // ivar: _ordering
@property (nonatomic) NSUInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToAccountEntityOrdering:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithType:(NSUInteger)arg0 dictionary:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif