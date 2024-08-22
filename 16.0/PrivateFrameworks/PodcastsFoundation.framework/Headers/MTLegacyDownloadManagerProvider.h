// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTLEGACYDOWNLOADMANAGERPROVIDER_H
#define MTLEGACYDOWNLOADMANAGERPROVIDER_H

@protocol MTLegacyDownloadManagerProtocol><MTLegacyDownloadDataSource><MTBackgroundURLSessionEventsHandler><MTURLSessionInvalidator;


#import "MTSingleton.h"
#import "MTLegacyDownloadNotifier.h"

@interface MTLegacyDownloadManagerProvider : MTSingleton

@property (retain, nonatomic) NSObject<MTLegacyDownloadManagerProtocol><MTLegacyDownloadDataSource><MTBackgroundURLSessionEventsHandler><MTURLSessionInvalidator> *downloads; // ivar: _downloads
@property (retain, nonatomic) MTLegacyDownloadNotifier *notifier; // ivar: _notifier


-(id)downloadManager;
-(id)downloadManagerIfSetup;
-(void)setupWith:(id)arg0 downloadsNotifier:(id)arg1 ;


@end


#endif