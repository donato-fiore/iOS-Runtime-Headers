// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFLOCALSETTINGCACHINGUTILITY_H
#define HFLOCALSETTINGCACHINGUTILITY_H

@class NSUserDefaults, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface HFLocalSettingCachingUtility : NSObject

@property (retain, nonatomic) NSUserDefaults *defaults; // ivar: _defaults
@property (retain, nonatomic) NSMutableDictionary *settingCache; // ivar: _settingCache


+(id)sharedInstance;
-(BOOL)getWelcomeBannerDismissedLocalCachedValue:(id)arg0 ;
-(id)_getValueForSetting:(id)arg0 ;
-(id)_getWelcomeBannerDismissedKey:(id)arg0 ;
-(id)init;
-(void)_setValueForSetting:(id)arg0 settingValue:(id)arg1 ;
-(void)setWelcomeBannerDismissedLocalCachedValue:(BOOL)arg0 home:(id)arg1 ;


@end


#endif