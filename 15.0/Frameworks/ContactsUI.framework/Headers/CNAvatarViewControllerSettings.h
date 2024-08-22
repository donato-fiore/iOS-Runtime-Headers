// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNAVATARVIEWCONTROLLERSETTINGS_H
#define CNAVATARVIEWCONTROLLERSETTINGS_H

@class CNContactStore, PRPersonaStore;
@protocol CNUILikenessRendering, CNUIPRLikenessResolver, CNSchedulerProvider;

#import <Foundation/Foundation.h>


@interface CNAvatarViewControllerSettings : NSObject

@property (retain, nonatomic) CNContactStore *contactStore; // ivar: _contactStore
@property (retain, nonatomic) NSObject<CNUILikenessRendering> *likenessRenderer; // ivar: _likenessRenderer
@property (retain, nonatomic) NSObject<CNUIPRLikenessResolver> *likenessResolver; // ivar: _likenessResolver
@property (retain, nonatomic) PRPersonaStore *personaStore; // ivar: _personaStore
@property (retain, nonatomic) NSObject<CNSchedulerProvider> *schedulerProvider; // ivar: _schedulerProvider
@property (nonatomic) NSUInteger style; // ivar: _style
@property (nonatomic) BOOL threeDTouchEnabled; // ivar: _threeDTouchEnabled


+(id)defaultSettings;
+(id)defaultSettingsWithCacheSize:(NSUInteger)arg0 threeDTouchEnabled:(BOOL)arg1 ;
+(id)settingsWithContactStore:(id)arg0 ;
+(id)settingsWithContactStore:(id)arg0 cacheSize:(NSUInteger)arg1 threeDTouchEnabled:(BOOL)arg2 ;
+(id)settingsWithContactStore:(id)arg0 personaStore:(id)arg1 threeDTouchEnabled:(BOOL)arg2 ;
+(id)settingsWithContactStore:(id)arg0 threeDTouchEnabled:(BOOL)arg1 ;
+(id)settingsWithLikenessResolver:(id)arg0 likenessRenderer:(id)arg1 contactStore:(id)arg2 threeDTouchEnabled:(BOOL)arg3 schedulerProvider:(id)arg4 ;
-(id)initWithLikenessResolver:(id)arg0 likenessRenderer:(id)arg1 contactStore:(id)arg2 threeDTouchEnabled:(BOOL)arg3 schedulerProvider:(id)arg4 ;


@end


#endif