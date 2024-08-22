// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSUSHAREDLOCALE_H
#define TSUSHAREDLOCALE_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface TSUSharedLocale : NSObject {
    *__CFLocale mCurrentLocale;
    NSArray *mObserverObjects;
}




+(id)_singletonAlloc;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)sharedLocale;
-(NSUInteger)retainCount;
-(id)autorelease;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)retain;
-(struct __CFLocale *)currentLocale;
-(void)datePreferencesChanged:(id)arg0 ;
-(void)dealloc;
-(void)release;


@end


#endif