// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRCUSERNOTIFICATION_H
#define BRCUSERNOTIFICATION_H

@class NSMutableDictionary, NSString;
@protocol BRCUserNotifier, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface BRCUserNotification : NSObject <BRCUserNotifier>

 {
    *__CFUserNotification _cfUserNotification;
    *__CFRunLoopSource _source;
    NSObject<OS_dispatch_source> *_displaySource;
    NSUInteger _nextDisplayBeginTime;
    id *_progressSubscriber;
    NSMutableDictionary *_dialogInfo;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_localizationKey:(id)arg0 forOSAndTypeOfShare:(id)arg1 ;
-(id)_localizationKey:(id)arg0 forTypeOfShare:(id)arg1 ;
-(id)_localizationKeyForOS:(id)arg0 ;
-(id)_logWrapUserReplyBlock:(SEL)arg0 ;
-(id)init;
-(void)_displayDialogWithType:(NSUInteger)arg0 dict:(id)arg1 options:(id)arg2 userReplyBlock:(id)arg3 ;
-(void)_displayDialogWithType:(NSUInteger)arg0 dict:(id)arg1 userReplyBlock:(id)arg2 ;
-(void)_hideCurrentDialog;
-(void)_updateDialogWithType:(NSUInteger)arg0 dict:(id)arg1 ;
-(void)_updateDialogWithType:(NSUInteger)arg0 dict:(id)arg1 userReplyBlock:(id)arg2 ;
-(void)close;
-(void)dealloc;
-(void)moveToFront;
-(void)showErrorDeviceOfflineForShareMetadata:(id)arg0 reply:(id)arg1 ;
-(void)showErrorDocumentsAppNotVisibleForShareURL:(id)arg0 reply:(id)arg1 ;
-(void)showErrorInstallNativeAppForShareMetadata:(id)arg0 reply:(id)arg1 ;
-(void)showErrorItemUnavailableOrAccessRestrictedForShareMetadata:(id)arg0 reply:(id)arg1 ;
-(void)showErrorNativeAppDisabledByProfileForShareMetadata:(id)arg0 reply:(id)arg1 ;
-(void)showErrorParticipantLimitReachedForShareMetadata:(id)arg0 reply:(id)arg1 ;
-(void)showErrorReasonUnknownForShareMetadata:(id)arg0 reply:(id)arg1 ;
-(void)showErrorServerNotReachableForShareMetadata:(id)arg0 reply:(id)arg1 ;
-(void)showErrorSignInToiCloudForShareMetadata:(id)arg0 reply:(id)arg1 ;
-(void)showErrorTurnOniCloudDriveForShareMetadata:(id)arg0 reply:(id)arg1 ;
-(void)showJoinDialogForShareMetadata:(id)arg0 session:(id)arg1 reply:(id)arg2 ;


@end


#endif