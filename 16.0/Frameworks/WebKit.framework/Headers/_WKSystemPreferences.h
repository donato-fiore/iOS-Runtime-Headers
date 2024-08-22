// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _WKSYSTEMPREFERENCES_H
#define _WKSYSTEMPREFERENCES_H


#import <Foundation/Foundation.h>


@interface _WKSystemPreferences : NSObject



+(BOOL)isCaptivePortalModeEnabled;
+(BOOL)isCaptivePortalModeIgnored:(id)arg0 ;
+(void)setCaptivePortalModeEnabled:(BOOL)arg0 ;
+(void)setCaptivePortalModeIgnored:(id)arg0 ignore:(BOOL)arg1 ;


@end


#endif