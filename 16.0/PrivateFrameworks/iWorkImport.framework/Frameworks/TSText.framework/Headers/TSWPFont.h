// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSWPFONT_H
#define TSWPFONT_H

@class NSMutableDictionary, NSArray, NSString, UIFont, UIFontDescriptor;

#import <Foundation/Foundation.h>

#import "TSWPFont.h"

@interface TSWPFont : NSObject

@property (retain) NSMutableDictionary *alternatePlatformFonts; // ivar: _alternatePlatformFonts
@property (readonly, nonatomic) TSWPFont *baseFont;
@property (readonly, nonatomic) BOOL bold;
@property (retain, nonatomic) NSArray *creationBacktrace; // ivar: _creationBacktrace
@property (readonly, nonatomic) *__CTFont ctFont;
@property (readonly, nonatomic) NSString *desiredPostScriptName; // ivar: _desiredPostScriptName
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSArray *familyFaces;
@property (retain, nonatomic) NSString *familyName; // ivar: _familyName
@property (nonatomic) NSUInteger hashValue; // ivar: _hashValue
@property (nonatomic) BOOL isFallbackFont; // ivar: _isFallbackFont
@property (readonly, nonatomic) BOOL isMasqueradingFont;
@property (readonly, nonatomic) BOOL isRequestedFont;
@property (readonly, nonatomic) BOOL italic;
@property (retain, nonatomic) NSString *localizedFamilyName; // ivar: _localizedFamilyName
@property (retain, nonatomic) UIFont *platformFont; // ivar: _platformFont
@property (retain, nonatomic) UIFontDescriptor *platformFontDescriptor; // ivar: _platformFontDescriptor
@property (retain, nonatomic) NSString *postScriptName; // ivar: _postScriptName
@property (readonly, nonatomic) BOOL shouldShowFallbackBadge;
@property (readonly, nonatomic) CGFloat size;
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


+(BOOL)isKeyValueProxyLeafType;
+(BOOL)isSystemFontName:(id)arg0 ;
+(NSUInteger)optionsForLoadingPlatformFontWithPostScriptName:(id)arg0 ;
+(id)baseFontForFamilyName:(id)arg0 ;
+(id)baseFontWithDescriptor:(id)arg0 ;
+(id)facesOfFontFamily:(id)arg0 ;
+(id)fontWithDesiredPostScriptName:(id)arg0 ;
+(id)fontWithDesiredPostScriptName:(id)arg0 atSize:(CGFloat)arg1 ;
+(id)fontWithDesiredPostScriptName:(id)arg0 fallbackFont:(id)arg1 ofType:(NSUInteger)arg2 ;
+(id)fontWithOpaqueIdentifier:(id)arg0 ;
+(id)helveticaFont;
+(id)loadPlatformFontForPostScriptName:(id)arg0 size:(CGFloat)arg1 ;
+(id)loadPlatformFontOrFallbackForPostScriptName:(id)arg0 size:(CGFloat)arg1 foundType:(*NSUInteger)arg2 ;
+(id)localizedFamilyNameForPlatformFont:(id)arg0 ;
+(id)localizedMasqueradingFontFamilyNames;
+(id)masqueradingFontNames;
+(id)missingFont;
+(id)missingFontPostScriptName;
+(id)postScriptNameForFamilyName:(id)arg0 ;
+(id)systemFont;
-(BOOL)isBaseFontEqualToBaseFontFor:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithSize:(CGFloat)arg0 ;
-(id)copyWithSize:(CGFloat)arg0 bold:(BOOL)arg1 italic:(BOOL)arg2 ;
-(id)copyWithSize:(CGFloat)arg0 bold:(BOOL)arg1 italic:(BOOL)arg2 traits:(id)arg3 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithDesiredPostScriptName:(id)arg0 ;
-(id)initWithDesiredPostScriptName:(id)arg0 platformFontDescriptor:(id)arg1 andPlatformFont:(id)arg2 ofType:(NSUInteger)arg3 ;
-(id)initWithDesiredPostScriptName:(id)arg0 platformFontDescriptor:(id)arg1 andPlatformFont:(id)arg2 ofType:(NSUInteger)arg3 localizedFamilyName:(id)arg4 ;
-(id)initWithDesiredPostScriptName:(id)arg0 size:(CGFloat)arg1 ;
-(struct __CTFont *)ctFontForSize:(CGFloat)arg0 ;
-(struct __CTFont *)ctFontForSize:(CGFloat)arg0 bold:(BOOL)arg1 italic:(BOOL)arg2 ;
-(struct __CTFont *)ctFontForSize:(CGFloat)arg0 bold:(BOOL)arg1 italic:(BOOL)arg2 traits:(id)arg3 ;


@end


#endif