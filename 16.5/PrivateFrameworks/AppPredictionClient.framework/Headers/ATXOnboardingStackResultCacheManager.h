// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXONBOARDINGSTACKRESULTCACHEMANAGER_H
#define ATXONBOARDINGSTACKRESULTCACHEMANAGER_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface ATXOnboardingStackResultCacheManager : NSObject {
    NSString *_path;
    BOOL _isiPad;
    NSDictionary *_appLaunchCounts;
}




-(BOOL)_writeOnboardingStackResultCache:(id)arg0 ;
-(BOOL)updateCacheWithActivity:(id)arg0 widgetCache:(id)arg1 ;
-(id)_generateResultCacheWithWidgetCache:(id)arg0 ;
-(id)_resultFromOnboardingStacks:(id)arg0 ;
-(id)fetchOnboardingStackResultCache;
-(id)init;
-(id)initWithPath:(id)arg0 isiPad:(BOOL)arg1 ;


@end


#endif