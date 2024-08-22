// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSWPLOADABLEFONTS_H
#define TSWPLOADABLEFONTS_H

@class NSOperationQueue, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface TSWPLoadableFonts : NSObject {
    NSOperationQueue *_fontQueue;
    NSMutableDictionary *_loadableFonts;
    NSMutableDictionary *_loadableFontFamilies;
}




+(id)_singletonAlloc;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)sharedInstance;
-(NSUInteger)retainCount;
-(id)autorelease;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)retain;
-(void)backgroundLoadAll;
-(void)dealloc;
-(void)loadAll;
-(void)loadFontWithName:(id)arg0 ;
-(void)loadFontsForGroup:(id)arg0 ;
-(void)p_loadFontWithInfo:(id)arg0 ;
-(void)pauseBackgroundLoading;
-(void)registerFontName:(id)arg0 forPath:(id)arg1 forGroup:(id)arg2 isObfuscated:(BOOL)arg3 backgroundLoad:(BOOL)arg4 ;
-(void)release;
-(void)resumeBackgroundLoading;
-(void)unregisterFontsForGroup:(id)arg0 ;


@end


#endif