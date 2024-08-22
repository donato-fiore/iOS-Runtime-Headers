// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AASIGNINGSESSIONRESPONSE_H
#define AASIGNINGSESSIONRESPONSE_H

@class NSData;


#import "AAResponse.h"

@interface AASigningSessionResponse : AAResponse

@property (retain, nonatomic) NSData *sessionData; // ivar: _sessionData


-(id)initWithHTTPResponse:(id)arg0 data:(id)arg1 ;


@end


#endif