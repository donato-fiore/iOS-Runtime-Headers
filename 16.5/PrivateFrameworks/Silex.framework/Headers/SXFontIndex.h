// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXFONTINDEX_H
#define SXFONTINDEX_H

@class NSCache, NSString, NSMutableArray, NSDictionary;
@protocol SXFontIndex;

#import <Foundation/Foundation.h>


@interface SXFontIndex : NSObject <SXFontIndex>



@property (readonly, nonatomic) NSCache *attributeToFontIndex; // ivar: _attributeToFontIndex
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSMutableArray *fontFamilyProviders; // ivar: _fontFamilyProviders
@property (readonly, nonatomic) NSCache *fontToAttributeIndex; // ivar: _fontToAttributeIndex
@property (readonly, nonatomic) NSDictionary *fonts; // ivar: _fonts
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)fontFamilyName:(id)arg0 matchesFontAttributes:(id)arg1 ;
-(id)fontAttributesForFontName:(id)arg0 ;
-(id)fontFaceForFontAttributes:(id)arg0 size:(NSInteger)arg1 ;
-(id)fontNameForFontAttributes:(id)arg0 size:(NSInteger)arg1 ;
-(id)fontsForFamilyProviders:(id)arg0 ;
-(id)initWithFontFamilyProviders:(id)arg0 ;
-(void)addFontFamilyProvider:(id)arg0 ;


@end


#endif