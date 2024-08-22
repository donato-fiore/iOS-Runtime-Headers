// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTSECUREDOWNLOADRENEWALMANAGER_H
#define MTSECUREDOWNLOADRENEWALMANAGER_H


#import <Foundation/Foundation.h>


@interface MTSecureDownloadRenewalManager : NSObject {
    ? urlProtocolDelegate;
    ? secureKeyLoader;
    ? removalLock;
    ? renewalLock;
}




+(id)inContextKeyDataFor:(NSInteger)arg0 ctx:(id)arg1 ;
-(id)init;
-(id)initWithUrlProtocolDelegate:(id)arg0 ;
-(void)requestSecureDeletionOf:(NSInteger)arg0 ;
-(void)requestSecureDeletionOfOrphanedKeys;
-(void)willEnterForeground;


@end


#endif