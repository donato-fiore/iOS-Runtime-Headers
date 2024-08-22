// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASCCONTENTSKELETON_H
#define ASCCONTENTSKELETON_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface ASCContentSkeleton : NSObject <NSCopying>



@property (readonly, nonatomic) CGFloat rawValue; // ivar: _rawValue
@property (readonly, nonatomic) NSInteger type; // ivar: _type


+(id)absoluteSkeleton:(CGFloat)arg0 ;
+(id)fractionalSkeleton:(CGFloat)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)widthThatFits:(struct CGSize )arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithType:(NSInteger)arg0 rawValue:(CGFloat)arg1 ;


@end


#endif