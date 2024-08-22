// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSDOWNLOADAUTHENTICATIONSESSION_H
#define SSDOWNLOADAUTHENTICATIONSESSION_H

@class NSURLAuthenticationChallenge;


#import "SSDownloadSession.h"

@interface SSDownloadAuthenticationSession : SSDownloadSession

@property (readonly) NSURLAuthenticationChallenge *authenticationChallenge;


-(void)_finishWithType:(int)arg0 credential:(id)arg1 ;


@end


#endif