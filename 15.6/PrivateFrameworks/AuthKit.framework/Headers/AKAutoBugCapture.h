// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AKAUTOBUGCAPTURE_H
#define AKAUTOBUGCAPTURE_H


#import <Foundation/Foundation.h>


@interface AKAutoBugCapture : NSObject



+(BOOL)shouldCapturePromptBugForContext:(id)arg0 ;
+(id)userInfoFromAccount:(id)arg0 ;
+(id)userInfoFromContext:(id)arg0 ;
+(void)triggerAutoBugCaptureWithSubType:(id)arg0 andBundleID:(id)arg1 userInfo:(id)arg2 ;


@end


#endif