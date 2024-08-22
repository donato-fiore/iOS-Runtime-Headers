// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSWPFALLBACKFONTLIST_H
#define TSWPFALLBACKFONTLIST_H

@class NSDictionary, NSSet;

#import <Foundation/Foundation.h>


@interface TSWPFallbackFontList : NSObject

@property (retain, nonatomic) NSDictionary *fallbackFontList; // ivar: _fallbackFontList
@property (copy, nonatomic) id *localizedFontFamilyNameResolver; // ivar: _localizedFontFamilyNameResolver
@property (readonly, nonatomic) NSSet *masqueradingFontNames;
@property (readonly, nonatomic) NSSet *replaceableFontNames;


+(id)sharedInstance;
-(BOOL)isMasqueradingFontName:(id)arg0 ;
-(id)fallbackFontNameForFontWithName:(id)arg0 ;
-(id)fallbackListForPostscriptFontName:(id)arg0 ;
-(id)init;
-(id)initWithList:(id)arg0 ;
-(id)localizedNameForMasqueradingFontName:(id)arg0 ;


@end


#endif