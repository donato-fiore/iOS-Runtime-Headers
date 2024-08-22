// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AFSIRIANNOUNCEINCOMINGCALLREQUEST_H
#define AFSIRIANNOUNCEINCOMINGCALLREQUEST_H

@protocol AFSiriExternalRequest;

#import <Foundation/Foundation.h>

#import "AFSiriIncomingCall.h"

@interface AFSiriAnnounceIncomingCallRequest : NSObject <AFSiriExternalRequest>

 {
    AFSiriIncomingCall *_call;
}




-(id)initWithIncomingCall:(id)arg0 ;
-(void)performRequestWithCompletion:(id)arg0 ;


@end


#endif