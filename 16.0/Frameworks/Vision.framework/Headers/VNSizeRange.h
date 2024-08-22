// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNSIZERANGE_H
#define VNSIZERANGE_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface VNSizeRange : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSUInteger idealDimension; // ivar: _idealDimension
@property (readonly, nonatomic) NSUInteger maximumDimension; // ivar: _maximumDimension
@property (readonly, nonatomic) NSUInteger minimumDimension; // ivar: _minimumDimension


+(BOOL)supportsSecureCoding;
-(BOOL)isAllowedDimension:(NSUInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMinimumDimension:(NSUInteger)arg0 maximumDimension:(NSUInteger)arg1 idealDimension:(NSUInteger)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif