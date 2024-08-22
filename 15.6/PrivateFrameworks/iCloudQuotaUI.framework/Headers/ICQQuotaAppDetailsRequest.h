// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICQQUOTAAPPDETAILSREQUEST_H
#define ICQQUOTAAPPDETAILSREQUEST_H

@class NSArray;


#import "ICQUsageQuotaRequest.h"

@interface ICQQuotaAppDetailsRequest : ICQUsageQuotaRequest {
    NSArray *_bundleIds;
}


@property (retain, nonatomic) NSArray *bundleIDs; // ivar: _bundleIDs


+(Class)responseClass;
-(id)initWithAccount:(id)arg0 accountStore:(id)arg1 bundleIDs:(id)arg2 quotaInfo:(id)arg3 ;
-(id)urlRequest;


@end


#endif