// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC7NEWSUI221OFFLINECONTENTMANAGER_H
#define _TTC7NEWSUI221OFFLINECONTENTMANAGER_H


#import <Foundation/Foundation.h>


@interface _TtC7NewsUI221OfflineContentManager : NSObject {
    ? downloadedContentIDs;
    ? contentContext;
    ? _contributors;
    ? contributorsReadyGroup;
    ? _xpcConnection;
    ? _xpcDownloadService;
    ? _xpcConnectionRetryBudget;
    ? _registeredWithXPCDownloadService;
    ? localArticleCacheLookupService;
    ? localIssueCacheLookupService;
    ? $__lazy_storage_$_localCacheLookupThrottler;
    ? _interestTokensByContentID;
    ? downloadMonitors;
    ? _inFlightContentIDs;
    ? _offlineContentRequests;
}




-(id)init;


@end


#endif