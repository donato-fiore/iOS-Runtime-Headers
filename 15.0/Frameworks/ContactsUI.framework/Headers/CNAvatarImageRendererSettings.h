// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNAVATARIMAGERENDERERSETTINGS_H
#define CNAVATARIMAGERENDERERSETTINGS_H

@protocol CNUILikenessRendering, CNUIPRLikenessResolver, CNSchedulerProvider;

#import <Foundation/Foundation.h>


@interface CNAvatarImageRendererSettings : NSObject

@property (readonly, nonatomic) NSObject<CNUILikenessRendering> *likenessRenderer; // ivar: _likenessRenderer
@property (readonly, nonatomic) NSObject<CNUIPRLikenessResolver> *likenessResolver; // ivar: _likenessResolver
@property (readonly, nonatomic) NSObject<CNSchedulerProvider> *schedulerProvider; // ivar: _schedulerProvider
@property (nonatomic) NSUInteger style; // ivar: _style


+(id)defaultSettings;
+(id)defaultSettingsWithCacheSize:(NSUInteger)arg0 ;
+(id)offMainThreadSynchronousRenderingOnlySettingsWithCacheSize:(NSUInteger)arg0 ;
+(id)settingsWithContactStore:(id)arg0 ;
+(id)settingsWithContactStore:(id)arg0 cacheSize:(NSUInteger)arg1 ;
+(id)settingsWithContactStore:(id)arg0 cacheSize:(NSUInteger)arg1 schedulerProvider:(id)arg2 ;
+(id)settingsWithContactStore:(id)arg0 cacheSize:(NSUInteger)arg1 schedulerProvider:(id)arg2 concurrentCaches:(BOOL)arg3 ;
+(id)settingsWithContactStore:(id)arg0 schedulerProvider:(id)arg1 ;
-(id)initWithLikenessResolver:(id)arg0 likenessRenderer:(id)arg1 schedulerProvider:(id)arg2 ;


@end


#endif