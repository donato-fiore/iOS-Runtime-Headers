// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EMSERVERCONFIGURATION_H
#define EMSERVERCONFIGURATION_H


#import <Foundation/Foundation.h>


@interface EMServerConfiguration : NSObject



+(BOOL)isCacheRecent;
+(BOOL)refresh;
+(CGFloat)_cacheValidityInterval;
+(id)_configurationLocation;
+(id)_userDefaultsKey;
+(id)getValueForKey:(id)arg0 ;
+(void)_assertNotMainThread;
+(void)_savePropertyList:(id)arg0 ;
+(void)refreshAsync;


@end


#endif