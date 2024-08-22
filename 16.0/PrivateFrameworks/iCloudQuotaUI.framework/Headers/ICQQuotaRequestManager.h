// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICQQUOTAREQUESTMANAGER_H
#define ICQQUOTAREQUESTMANAGER_H

@class NSOperationQueue, NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "ICQQuotaInfoResponse.h"

@interface ICQQuotaRequestManager : NSObject {
    NSOperationQueue *_requestQueue;
    NSObject<OS_dispatch_queue> *_quota_info_queue;
    ICQQuotaInfoResponse *_quotaInfo;
    BOOL _quotaInfoIsDetailed;
    NSMutableDictionary *_appDetailsCache;
}




+(id)noAccountError;
+(id)sharedManager;
-(id)_sendSynchronousAARequest:(id)arg0 ;
-(id)appDetailsForBundleIDs:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)quotaInfoDetailed:(BOOL)arg0 error:(*id)arg1 ;
-(void)clearCachedAppDetails;
-(void)clearCachedQuotaInfo;
-(void)getAppDetailsForBundleIDs:(id)arg0 handler:(id)arg1 ;
-(void)getQuotaInfoDetailed:(BOOL)arg0 handler:(id)arg1 ;
-(void)noteQuotaInfoChanged;


@end


#endif