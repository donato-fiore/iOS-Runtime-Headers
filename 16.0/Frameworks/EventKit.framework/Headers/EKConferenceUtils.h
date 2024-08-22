// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EKCONFERENCEUTILS_H
#define EKCONFERENCEUTILS_H


#import <Foundation/Foundation.h>


@interface EKConferenceUtils : NSObject



+(CGFloat)conferenceImageSize;
+(id)_applicationRecordFromAppLink:(id)arg0 appLinkError:(id)arg1 orCustomScheme:(id)arg2 ;
+(id)_validURLForConferenceURL:(id)arg0 previousURLs:(id)arg1 completion:(id)arg2 ;
+(id)_workQueue;
+(id)applicationRecordForURL:(id)arg0 incomplete:(*BOOL)arg1 ;
+(id)logHandle;
+(id)parentAppBundleIdentifierForExtensionBundleIdentifier:(id)arg0 ;
+(id)synchronousAppTitleOnlyForURL:(id)arg0 incomplete:(*BOOL)arg1 ;
+(id)validURLForConferenceURL:(id)arg0 completion:(id)arg1 ;
+(void)_findExtensionIdentifierForURL:(id)arg0 completionHandler:(id)arg1 ;
+(void)_findRoomTypeForURL:(id)arg0 queue:(id)arg1 completionHandler:(id)arg2 ;
+(void)applicationRecordForURL:(id)arg0 completionHandler:(id)arg1 ;
+(void)invalidateConferenceURL:(id)arg0 ;
+(void)invalidateConferenceURLIfNeeded:(id)arg0 inEventStore:(id)arg1 ;
+(void)renewConferenceURL:(id)arg0 toDate:(id)arg1 ;
+(void)virtualConference:(id)arg0 likelyCameFromRoomTypes:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif