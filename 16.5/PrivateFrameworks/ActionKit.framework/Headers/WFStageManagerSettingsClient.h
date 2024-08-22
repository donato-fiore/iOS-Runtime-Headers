// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFSTAGEMANAGERSETTINGSCLIENT_H
#define WFSTAGEMANAGERSETTINGSCLIENT_H



#import "WFSettingsClient.h"

@interface WFStageManagerSettingsClient : WFSettingsClient {
    ? $__lazy_storage_$_manager;
}


@property (nonatomic) BOOL showDock;
@property (nonatomic) BOOL showRecentApps;


+(?)createClientWithCompletionHandler;
-(id)init;


@end


#endif