// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef LOCALEOBSERVER_H
#define LOCALEOBSERVER_H

@class NSLocale, NSArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface LocaleObserver : NSObject {
    NSLocale *_currentLocale;
    NSArray *_preferredLanguages;
    BOOL _isCJK;
    NSObject<OS_dispatch_queue> *_queue;
}




-(id)init;
-(void)currentLocaleWithPreferredLanguagesBlock:(id)arg0 ;
-(void)dealloc;
-(void)update;


@end


#endif