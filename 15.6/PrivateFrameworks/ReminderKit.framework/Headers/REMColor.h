// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef REMCOLOR_H
#define REMCOLOR_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface REMColor : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) CGFloat alpha; // ivar: _alpha
@property (readonly, nonatomic) CGFloat blue; // ivar: _blue
@property (readonly, nonatomic) NSString *ckSymbolicColorName; // ivar: _ckSymbolicColorName
@property (readonly, nonatomic) NSUInteger colorRGBSpace; // ivar: _colorRGBSpace
@property (readonly, nonatomic) NSString *daHexString; // ivar: _daHexString
@property (readonly, nonatomic) NSString *daSymbolicColorName; // ivar: _daSymbolicColorName
@property (readonly, nonatomic) CGFloat green; // ivar: _green
@property (readonly, nonatomic) CGFloat red; // ivar: _red


+(BOOL)supportsSecureCoding;
+(id)blackColor;
+(id)brownColor;
+(id)clearColor;
+(id)colorWithDictionaryData:(id)arg0 error:(*id)arg1 ;
+(id)colorWithHexString:(id)arg0 ;
+(id)colorWithRed:(CGFloat)arg0 green:(CGFloat)arg1 blue:(CGFloat)arg2 alpha:(CGFloat)arg3 ;
+(id)colorWithRed:(CGFloat)arg0 green:(CGFloat)arg1 blue:(CGFloat)arg2 alpha:(CGFloat)arg3 targetRGBSpace:(NSUInteger)arg4 ;
+(id)cyanColor;
+(id)grayColor;
+(id)lightGrayColor;
+(id)magentaColor;
+(id)orangeColor;
+(id)purpleColor;
+(id)whiteColor;
+(id)yellowColor;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)archivedDictionaryDataWithError:(*id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)hexString;
-(id)hexStringWithAlpha;
-(id)initWithCKSymbolicColorName:(id)arg0 hexString:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDASymbolicColorName:(id)arg0 daHexString:(id)arg1 ;
-(id)initWithDASymbolicColorName:(id)arg0 daHexString:(id)arg1 ckSymbolicColorName:(id)arg2 ;
-(id)initWithHexString:(id)arg0 ;
-(id)initWithRed:(CGFloat)arg0 green:(CGFloat)arg1 blue:(CGFloat)arg2 alpha:(CGFloat)arg3 ;
-(id)initWithRed:(CGFloat)arg0 green:(CGFloat)arg1 blue:(CGFloat)arg2 alpha:(CGFloat)arg3 colorSpace:(NSUInteger)arg4 ;
-(id)initWithRed:(CGFloat)arg0 green:(CGFloat)arg1 blue:(CGFloat)arg2 alpha:(CGFloat)arg3 colorSpace:(NSUInteger)arg4 daSymbolicColorName:(id)arg5 daHexString:(id)arg6 ckSymbolicColorName:(id)arg7 ;
-(id)initWithWhite:(CGFloat)arg0 alpha:(CGFloat)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif