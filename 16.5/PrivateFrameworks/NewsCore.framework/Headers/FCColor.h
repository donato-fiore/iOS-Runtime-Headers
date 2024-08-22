// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCCOLOR_H
#define FCCOLOR_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface FCColor : NSObject <NSCopying>



@property (readonly, nonatomic) CGFloat alpha; // ivar: _alpha
@property (readonly, nonatomic) CGFloat blue; // ivar: _blue
@property (readonly, nonatomic) CGFloat green; // ivar: _green
@property (readonly, nonatomic) NSString *hex;
@property (readonly, nonatomic) CGFloat red; // ivar: _red


+(id)blackColor;
+(id)clearColor;
+(id)colorWithHexString:(id)arg0 ;
+(id)colorWithRed:(CGFloat)arg0 green:(CGFloat)arg1 blue:(CGFloat)arg2 alpha:(CGFloat)arg3 ;
+(id)nullableColorWithHexString:(id)arg0 ;
+(id)whiteColor;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isSimilarToColor:(id)arg0 withinPercentage:(CGFloat)arg1 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithRed:(CGFloat)arg0 green:(CGFloat)arg1 blue:(CGFloat)arg2 alpha:(CGFloat)arg3 ;
-(id)legibleColor;
-(void)readDeconstructedRepresentationWithAcccessor:(id)arg0 ;


@end


#endif