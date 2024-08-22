// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSWPFONTCACHE_H
#define TSWPFONTCACHE_H

@class TSULRUCache, NSArray, NSMutableDictionary, NSMutableArray, NSString;

#import <Foundation/Foundation.h>


@interface TSWPFontCache : NSObject {
    TSULRUCache *_fontCache;
    NSArray *_familyNames;
    NSMutableDictionary *_familyDisplayNames;
    NSArray *_familyFonts;
    NSMutableArray *_cachedAvailableMembers;
    NSString *_cachedMembersFamilyName;
}




+(id)_singletonAlloc;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)sharedCache;
-(NSUInteger)retainCount;
-(id)autorelease;
-(id)availableMembersOfFontFamily:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)displayNameForFontFamily:(id)arg0 ;
-(id)init;
-(id)p_excludedFamilyNames;
-(id)retain;
-(id)sortedFontFamilies;
-(id)sortedFontFamilyEntriesForStylesheet:(id)arg0 ;
-(struct __CTFont *)_createFontWithName:(id)arg0 size:(CGFloat)arg1 weight:(CGFloat)arg2 ;
-(struct __CTFont *)createFontWithName:(id)arg0 size:(CGFloat)arg1 weight:(CGFloat)arg2 attributes:(id)arg3 ;
-(void)dealloc;
-(void)p_FontWasDownloaded:(id)arg0 ;
-(void)release;


@end


#endif