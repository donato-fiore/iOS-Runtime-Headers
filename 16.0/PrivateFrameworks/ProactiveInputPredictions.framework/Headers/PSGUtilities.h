// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PSGUTILITIES_H
#define PSGUTILITIES_H


#import <Foundation/Foundation.h>


@interface PSGUtilities : NSObject



+(id)sharedInstance;
-(id)localizedStringForKey:(id)arg0 withLocale:(id)arg1 ;
-(id)localizedStringForKey:(id)arg0 withLocale:(id)arg1 onlyIfCached:(BOOL)arg2 wasCached:(*BOOL)arg3 ;
-(id)prewarmCacheForLocale:(SEL)arg0 usingQueue:(id)arg1 ;


@end


#endif