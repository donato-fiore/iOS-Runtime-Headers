// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRIANALYTICSPREFERENCES_H
#define SIRIANALYTICSPREFERENCES_H

@class NSData;

#import <Foundation/Foundation.h>


@interface SiriAnalyticsPreferences : NSObject {
    *__CFString _domain;
}


@property (nonatomic) NSData *preprocessorBookmark;
@property (nonatomic) CGFloat unifiedStreamMaxAge;
@property (nonatomic) CGFloat unifiedStreamMaxAgeOrDefault; // ivar: _unifiedStreamMaxAgeOrDefault
@property (nonatomic) NSUInteger unifiedStreamMaxSize;
@property (readonly, nonatomic) NSUInteger unifiedStreamMaxSizeOrDefault;


-(BOOL)tailMessagesToOSLogEnabled;
-(id)init;
-(id)initWithPreferencesDomain:(struct __CFString *)arg0 ;
-(id)pluginStateForBundleIdentifier:(id)arg0 ;
-(id)pluginsState;
-(void)setPluginState:(id)arg0 forBundleIdentifier:(id)arg1 ;
-(void)setPluginsState:(id)arg0 ;
-(void)synchronize;


@end


#endif