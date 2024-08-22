// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASDUPDATEWATCHAPPS_H
#define ASDUPDATEWATCHAPPS_H


#import <Foundation/Foundation.h>


@interface ASDUpdateWatchApps : NSObject



+(BOOL)shouldPromptBeforeUpdating;
+(BOOL)updateBundleIDs:(id)arg0 userInitiated:(BOOL)arg1 error:(*id)arg2 ;
+(void)shouldPromptBeforeUpdatingWithResultHandler:(id)arg0 ;
+(void)updateBundleIDs:(id)arg0 userInitiated:(BOOL)arg1 withResultHandler:(id)arg2 ;


@end


#endif