// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRIUIUTILITIES_H
#define SIRIUIUTILITIES_H


#import <Foundation/Foundation.h>


@interface SiriUIUtilities : NSObject



+(BOOL)shouldShowHeaderForDirectActionEvent:(NSInteger)arg0 ;
+(BOOL)string:(id)arg0 equalToString:(id)arg1 ;
+(BOOL)string:(id)arg0 isSameAsUserUtterance:(id)arg1 ;
+(id)_normalizeTextString:(id)arg0 ;
+(id)defaultBrowserBundleIdentifier;
+(id)descriptionForAceView:(id)arg0 ;
+(id)descriptionForDialog:(id)arg0 ;
+(id)descriptionForSayIt:(id)arg0 ;
+(id)deviceSpecificKeyForDefaultKey:(id)arg0 ;
+(id)stringForDeviceType;
+(id)stringForSiriUIBackgroundBlurReason:(NSInteger)arg0 ;


@end


#endif