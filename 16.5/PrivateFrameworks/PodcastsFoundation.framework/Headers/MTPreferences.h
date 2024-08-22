// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTPREFERENCES_H
#define MTPREFERENCES_H


#import <Foundation/Foundation.h>


@interface MTPreferences : NSObject



+(BOOL)_copyUserDefaultToSharedContainer:(id)arg0 synchronize:(BOOL)arg1 ;
+(BOOL)copySettingsToSharedContainer;
+(id)defaultSettings;
+(void)moveUserDefaultToSharedContainer:(id)arg0 ;
+(void)registerDefaults;


@end


#endif