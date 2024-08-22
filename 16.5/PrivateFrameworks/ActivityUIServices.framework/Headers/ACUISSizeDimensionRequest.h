// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ACUISSIZEDIMENSIONREQUEST_H
#define ACUISSIZEDIMENSIONREQUEST_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ACUISSizeDimensionRequest : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) CGFloat maximum; // ivar: _maximum
@property (readonly, nonatomic) CGFloat minimum; // ivar: _minimum
@property (readonly, nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(id)fixed:(CGFloat)arg0 ;
+(id)new;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)objcTypeFromSwift:(NSInteger)arg0 ;
-(NSInteger)swiftTypeFromObjc:(NSInteger)arg0 ;
-(NSUInteger)hash;
-(id)_sizeDimensionRequest;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDimensionRequest:(id)arg0 ;
-(id)initWithMinimum:(CGFloat)arg0 maximum:(CGFloat)arg1 ;
-(id)initWithMinimum:(CGFloat)arg0 maximum:(CGFloat)arg1 type:(NSInteger)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif