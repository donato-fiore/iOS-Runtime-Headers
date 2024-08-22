// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AFSIRIACTIVATIONREQUEST_H
#define AFSIRIACTIVATIONREQUEST_H

@protocol AFSiriExternalRequest;

#import <Foundation/Foundation.h>

#import "AFSiriActivationContext.h"

@interface AFSiriActivationRequest : NSObject <AFSiriExternalRequest>

 {
    AFSiriActivationContext *_context;
}




-(id)initWithContext:(id)arg0 ;
-(void)performRequestWithCompletion:(id)arg0 ;
-(void)performRequestWithResultHandler:(id)arg0 ;


@end


#endif