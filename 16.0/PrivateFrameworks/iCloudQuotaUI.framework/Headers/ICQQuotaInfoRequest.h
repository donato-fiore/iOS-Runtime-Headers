// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICQQUOTAINFOREQUEST_H
#define ICQQUOTAINFOREQUEST_H



#import "ICQUsageQuotaRequest.h"

@interface ICQQuotaInfoRequest : ICQUsageQuotaRequest



+(Class)responseClass;
-(id)initWithAccount:(id)arg0 accountStore:(id)arg1 detailed:(BOOL)arg2 ;
-(id)urlRequest;


@end


#endif