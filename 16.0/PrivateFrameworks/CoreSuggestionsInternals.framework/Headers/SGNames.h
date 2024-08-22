// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SGNAMES_H
#define SGNAMES_H


#import <Foundation/Foundation.h>


@interface SGNames : NSObject



+(BOOL)isCapitalized:(id)arg0 ;
+(BOOL)isCommonNameWord:(id)arg0 ;
+(BOOL)isCommonVietnameseSurname:(id)arg0 ;
+(BOOL)isDifficultName:(id)arg0 ;
+(BOOL)isFamilyName:(id)arg0 ;
+(BOOL)isLowercaseStringCommonNameWord:(id)arg0 ;
+(BOOL)isProbablyShortCJKName:(id)arg0 ;
+(BOOL)isSalientName:(id)arg0 ;
+(BOOL)isSalientNameByChars:(id)arg0 ;
+(BOOL)namesApproximatelyMatch:(id)arg0 and:(id)arg1 ;
+(BOOL)namesApproximatelyMatch:(id)arg0 and:(id)arg1 threshold:(CGFloat)arg2 ;
+(BOOL)shouldInvertOrderOfFirst:(id)arg0 last:(id)arg1 ;
+(BOOL)unnormalizedNamesApproximatelyMatch:(id)arg0 and:(id)arg1 ;
+(BOOL)unnormalizedNamesApproximatelyMatch:(id)arg0 and:(id)arg1 threshold:(CGFloat)arg2 ;
+(CGFloat)nameSimilarity:(id)arg0 and:(id)arg1 ;
+(CGFloat)unnormalizedNameSimilarity:(id)arg0 and:(id)arg1 ;
+(id)bestName:(id)arg0 ;
+(id)cjkSpacerCharacters;
+(id)cjkSpacersToWhiteSpace:(id)arg0 ;
+(id)cleanName:(id)arg0 ;
+(id)handleLastNameFirstOrder:(id)arg0 ;
+(id)nameFromEmail:(id)arg0 ;
+(id)nameStringFromEmailAddress:(id)arg0 ;
+(id)possibleNameStringFromEmailAddress:(id)arg0 ;
+(id)sgNameFromString:(id)arg0 origin:(id)arg1 recordId:(id)arg2 extractionInfo:(id)arg3 ;
+(id)sketchesForName:(id)arg0 ;
+(id)stripAndReturnHonorifics:(id)arg0 ;
+(id)stripHonorifics:(id)arg0 ;
+(id)surnameFromName:(id)arg0 ;
+(id)universalCleanName:(id)arg0 ;
+(struct ? )namePayload:(id)arg0 ;
+(unsigned int)attributesForNameWord:(id)arg0 ;


@end


#endif