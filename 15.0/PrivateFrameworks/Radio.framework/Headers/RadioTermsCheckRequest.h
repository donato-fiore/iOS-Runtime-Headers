// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RADIOTERMSCHECKREQUEST_H
#define RADIOTERMSCHECKREQUEST_H

@class SSURLConnectionRequest;


#import "RadioRequest.h"

@interface RadioTermsCheckRequest : RadioRequest {
    SSURLConnectionRequest *_request;
}


@property (nonatomic) NSUInteger acceptedTermsVersion; // ivar: _acceptedTermsVersion


-(void)cancel;
-(void)startWithCompletionHandler:(id)arg0 ;


@end


#endif