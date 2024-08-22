// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKCONFERENCEUTILS_H
#define EKCONFERENCEUTILS_H


#import <Foundation/Foundation.h>


@interface EKConferenceUtils : NSObject



+(CGFloat)conferenceImageSize;
+(id)_applicationRecordFromAppLink:(id)arg0 appLinkError:(id)arg1 orCustomScheme:(id)arg2 ;
+(id)_workQueue;
+(id)applicationRecordForURL:(id)arg0 ;
+(id)logHandle;
+(id)parentAppBundleIdentifierForExtensionBundleIdentifier:(id)arg0 ;
+(id)synchronousAppTitleOnlyForURL:(id)arg0 ;
+(void)_findExtensionIdentifierForURL:(id)arg0 completionHandler:(id)arg1 ;
+(void)applicationRecordForURL:(id)arg0 completionHandler:(id)arg1 ;
+(void)invalidateConferenceURL:(id)arg0 ;
+(void)invalidateConferenceURLIfNeeded:(id)arg0 inEventStore:(id)arg1 ;
+(void)virtualConference:(id)arg0 likelyCameFromRoomTypes:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif