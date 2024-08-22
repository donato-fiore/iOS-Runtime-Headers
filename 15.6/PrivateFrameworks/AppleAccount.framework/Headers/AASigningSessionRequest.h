// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AASIGNINGSESSIONREQUEST_H
#define AASIGNINGSESSIONREQUEST_H

@class NSData;


#import "AARequest.h"

@interface AASigningSessionRequest : AARequest {
    NSData *_sessionInfoRequestData;
}




+(Class)responseClass;
-(id)initWithURLString:(id)arg0 sessionInfoRequestData:(id)arg1 ;
-(id)urlRequest;


@end


#endif