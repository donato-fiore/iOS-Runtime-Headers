// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef REMCOLOR_CODABLE_H
#define REMCOLOR_CODABLE_H

@class REMColor;



@interface REMColor_Codable : REMColor



-(id)init;
-(id)initWithCKSymbolicColorName:(id)arg0 hexString:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDASymbolicColorName:(id)arg0 daHexString:(id)arg1 ;
-(id)initWithHexString:(id)arg0 ;
-(id)initWithRed:(CGFloat)arg0 green:(CGFloat)arg1 blue:(CGFloat)arg2 alpha:(CGFloat)arg3 ;
-(id)initWithRed:(CGFloat)arg0 green:(CGFloat)arg1 blue:(CGFloat)arg2 alpha:(CGFloat)arg3 colorSpace:(NSUInteger)arg4 ;
-(id)initWithRed:(CGFloat)arg0 green:(CGFloat)arg1 blue:(CGFloat)arg2 alpha:(CGFloat)arg3 colorSpace:(NSUInteger)arg4 daSymbolicColorName:(id)arg5 daHexString:(id)arg6 ckSymbolicColorName:(id)arg7 ;


@end


#endif