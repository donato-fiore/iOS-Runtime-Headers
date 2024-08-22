// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMSETTINGSMESSAGEHANDLER_H
#define HMSETTINGSMESSAGEHANDLER_H

@class NSUUID, NSString;

#import <Foundation/Foundation.h>

#import "_HMContext.h"

@interface HMSettingsMessageHandler : NSObject {
    _HMContext *_context;
    NSUUID *_homeTargetUUID;
    NSUUID *_userTargetUUID;
    NSString *_targetSettingsType;
}




-(void)configureWithContext:(id)arg0 ;
-(void)sendUpdateValueMessage:(id)arg0 value:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif