// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FPTAG_H
#define FPTAG_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface FPTag : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) int color; // ivar: _color
@property (readonly, nonatomic) NSString *label; // ivar: _label


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToTag:(id)arg0 ;
-(NSInteger)localizedCompare:(id)arg0 ;
-(NSInteger)localizedStandardCompare:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLabel:(id)arg0 color:(int)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif