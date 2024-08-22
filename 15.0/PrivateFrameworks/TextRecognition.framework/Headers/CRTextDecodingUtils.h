// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRTEXTDECODINGUTILS_H
#define CRTEXTDECODINGUTILS_H


#import <Foundation/Foundation.h>


@interface CRTextDecodingUtils : NSObject



+(BOOL)validateProbability:(id)arg0 precisionThreshold:(CGFloat)arg1 withLM:(BOOL)arg2 ;
+(id)characterRangesForTokens:(id)arg0 fromActivation:(id)arg1 falsePositiveFiltering:(BOOL)arg2 ;
+(id)tokenFilterPredicateFalsePositiveFiltering:(BOOL)arg0 ;
+(id)whitespaceRangesForTokens:(id)arg0 outputTokenString:(*id)arg1 falsePositiveFiltering:(BOOL)arg2 ;
+(void)getBoundariesForRanges:(id)arg0 topPoints:(*id)arg1 bottomPoints:(*id)arg2 imageSize:(struct CGSize )arg3 scale:(float)arg4 rect:(struct CGRect )arg5 rotatedRoi:(struct CGRect )arg6 radians:(float)arg7 model:(id)arg8 configuration:(id)arg9 paddingLeft:(int)arg10 paddingRight:(int)arg11 ;
+(void)getCharacterBoundariesForActivationRanges:(id)arg0 topPoints:(*id)arg1 bottomPoints:(*id)arg2 imageSize:(struct CGSize )arg3 scale:(float)arg4 rect:(struct CGRect )arg5 rotatedRoi:(struct CGRect )arg6 radians:(float)arg7 model:(id)arg8 configuration:(id)arg9 ;
+(void)getWordBoundariesForWhiteSpaceRanges:(id)arg0 topPoints:(*id)arg1 bottomPoints:(*id)arg2 imageSize:(struct CGSize )arg3 scale:(float)arg4 rect:(struct CGRect )arg5 rotatedRoi:(struct CGRect )arg6 radians:(float)arg7 model:(id)arg8 configuration:(id)arg9 ;


@end


#endif