// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AFSIRIHOMEAUTOMATIONBACKGROUNDREQUEST_H
#define AFSIRIHOMEAUTOMATIONBACKGROUNDREQUEST_H

@protocol AFSiriExternalRequest;

#import <Foundation/Foundation.h>

#import "AFSiriHomeAutomationRequestInfo.h"
#import "AFInstanceContext.h"

@interface AFSiriHomeAutomationBackgroundRequest : NSObject <AFSiriExternalRequest>

 {
    AFSiriHomeAutomationRequestInfo *_requestInfo;
    AFInstanceContext *_instanceContext;
}




-(id)initWithRequestInfo:(id)arg0 ;
-(id)initWithRequestInfo:(id)arg0 instanceContext:(id)arg1 ;
-(void)performRequestWithCompletion:(id)arg0 ;


@end


#endif