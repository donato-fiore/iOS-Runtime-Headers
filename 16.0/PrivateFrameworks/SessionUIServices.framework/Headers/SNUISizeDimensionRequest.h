// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SNUISIZEDIMENSIONREQUEST_H
#define SNUISIZEDIMENSIONREQUEST_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SNUISizeDimensionRequest : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) CGFloat maximum; // ivar: _maximum
@property (readonly, nonatomic) CGFloat minimum; // ivar: _minimum
@property (readonly, nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(id)fixed:(CGFloat)arg0 ;
-(NSInteger)objcTypeFromSwift:(NSInteger)arg0 ;
-(NSInteger)swiftTypeFromObjc:(NSInteger)arg0 ;
-(id)_sizeDimensionRequest;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDimensionRequest:(id)arg0 ;
-(id)initWithMinimum:(CGFloat)arg0 maximum:(CGFloat)arg1 ;
-(id)initWithMinimum:(CGFloat)arg0 maximum:(CGFloat)arg1 type:(NSInteger)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif