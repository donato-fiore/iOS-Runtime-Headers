// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AAQUOTAINFOREQUEST_H
#define AAQUOTAINFOREQUEST_H

@class ACAccount;


#import "AARequest.h"

@interface AAQuotaInfoRequest : AARequest {
    BOOL _isDetailedRequest;
}


@property (readonly, nonatomic) ACAccount *account; // ivar: _account


+(Class)responseClass;
-(id)initDetailedRequestWithAccount:(id)arg0 ;
-(id)initWithAccount:(id)arg0 ;
-(id)urlRequest;
-(id)urlString;


@end


#endif