// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTSECUREDOWNLOADRENEWALMANAGER_H
#define MTSECUREDOWNLOADRENEWALMANAGER_H


#import <Foundation/Foundation.h>


@interface MTSecureDownloadRenewalManager : NSObject {
    ? secureKeyLoader;
    ? delegate;
    ? removalLock;
    ? renewalLock;
}




+(id)inContextKeyDataFor:(NSInteger)arg0 ctx:(id)arg1 ;
-(id)init;
-(id)initWithDelegate:(id)arg0 ;
-(void)renewKeysAndRemoveExpiredDownloads;
-(void)renewKeysAndRemoveExpiredDownloadsWithUrlProtocolDelegate:(id)arg0 ;
-(void)requestSecureDeletionOf:(NSInteger)arg0 ;
-(void)requestSecureDeletionOfOrphanedKeys;


@end


#endif