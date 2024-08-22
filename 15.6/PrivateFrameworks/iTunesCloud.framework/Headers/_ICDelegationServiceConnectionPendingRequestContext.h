// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _ICDELEGATIONSERVICECONNECTIONPENDINGREQUESTCONTEXT_H
#define _ICDELEGATIONSERVICECONNECTIONPENDINGREQUESTCONTEXT_H


#import <Foundation/Foundation.h>

#import "ICPBDGSRequest.h"

@interface _ICDelegationServiceConnectionPendingRequestContext : NSObject

@property (readonly, nonatomic) ICPBDGSRequest *request; // ivar: _request
@property (readonly, copy, nonatomic) id *responseHandler; // ivar: _responseHandler


-(id)initWithRequest:(id)arg0 responseHandler:(id)arg1 ;


@end


#endif