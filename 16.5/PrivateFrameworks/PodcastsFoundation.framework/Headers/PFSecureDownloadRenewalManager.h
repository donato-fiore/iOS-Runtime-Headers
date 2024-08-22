// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PFSECUREDOWNLOADRENEWALMANAGER_H
#define PFSECUREDOWNLOADRENEWALMANAGER_H


#import <Foundation/Foundation.h>

#import "MTSecureDownloadRenewalManager.h"

@interface PFSecureDownloadRenewalManager : NSObject {
    MTSecureDownloadRenewalManager *_manager;
}




+(id)inContextKeyDataFor:(NSInteger)arg0 ctx:(id)arg1 ;
-(id)init;
-(id)initWithURLProtocolDelegate:(id)arg0 ;
-(void)requestSecureDeletionOfEpisodeWithAdamID:(NSInteger)arg0 ;
-(void)requestSecureDeletionOfOrphanedKeys;
-(void)updateDRMKeysForDownloads;
-(void)willEnterForeground;


@end


#endif