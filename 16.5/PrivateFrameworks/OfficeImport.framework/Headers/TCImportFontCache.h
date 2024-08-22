// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TCIMPORTFONTCACHE_H
#define TCIMPORTFONTCACHE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "OITSUNoCopyDictionary.h"

@interface TCImportFontCache : NSObject {
    OITSUNoCopyDictionary *mFontCache;
}


@property (readonly, nonatomic) NSMutableDictionary *fontNameCache; // ivar: mFontNameCache


+(struct CGSize )stringSizeForText:(id)arg0 ctFontRef:(struct __CTFont *)arg1 ;
-(id)init;
-(struct CGSize )stringSizeForSpaceWithFontName:(id)arg0 fontSize:(int)arg1 ;
-(struct CGSize )stringSizeForText:(id)arg0 fontName:(id)arg1 fontSize:(int)arg2 ;
-(struct __CTFont *)ctFontRefForKey:(id)arg0 ;
-(struct __CTFont *)fontRefForFontName:(id)arg0 size:(int)arg1 ;
-(void)dealloc;


@end


#endif