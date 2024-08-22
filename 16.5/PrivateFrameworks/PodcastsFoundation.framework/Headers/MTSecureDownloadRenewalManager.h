// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTSECUREDOWNLOADRENEWALMANAGER_H
#define MTSECUREDOWNLOADRENEWALMANAGER_H


#import <Foundation/Foundation.h>


@interface MTSecureDownloadRenewalManager : NSObject {
    ? analyticsChannel;
    ? bugReporter;
    ? secureKeyLoader;
    ? metadataLoader;
    ? delegate;
    ? removalLock;
    ? renewalLock;
}




+(id)inContextKeyDataFor:(NSInteger)arg0 ctx:(id)arg1 ;
-(id)init;
-(id)initWithDelegate:(id)arg0 ;
-(void)requestSecureDeletionOf:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)requestSecureDeletionOfOrphanedKeysWithCompletionHandler:(id)arg0 ;
-(void)requestSecureDeletionOfStoreTrackIds:(id)arg0 completionHandler:(id)arg1 ;
-(void)updateDRMKeysForDownloads;
-(void)updateDRMKeysForDownloadsWithUrlProtocolDelegate:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif