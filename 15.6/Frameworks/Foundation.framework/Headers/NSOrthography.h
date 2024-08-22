// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSORTHOGRAPHY_H
#define NSORTHOGRAPHY_H

@class NSDictionary;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "NSString.h"

@interface NSOrthography : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy) NSString *dominantScript;
@property (readonly, copy) NSDictionary *languageMap;


+(BOOL)supportsSecureCoding;
+(id)_orthographyWithDominantScript:(id)arg0 languageMap:(id)arg1 ;
+(id)_scriptNameForScriptIndex:(NSUInteger)arg0 ;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)defaultOrthographyForLanguage:(id)arg0 ;
+(id)orthographyWithDominantScript:(id)arg0 languageMap:(id)arg1 ;
+(void)initialize;
-(BOOL)isEqual:(id)arg0 ;
-(Class)classForCoder;
-(NSUInteger)hash;
-(id)allLanguages;
-(id)allScripts;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dominantLanguage;
-(id)dominantLanguageForScript:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDominantScript:(id)arg0 languageMap:(id)arg1 ;
-(id)languagesForScript:(id)arg0 ;
-(id)replacementObjectForPortCoder:(id)arg0 ;
-(unsigned int)orthographyFlags;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif