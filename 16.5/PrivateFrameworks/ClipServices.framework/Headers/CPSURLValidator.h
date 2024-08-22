// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPSURLVALIDATOR_H
#define CPSURLVALIDATOR_H


#import <Foundation/Foundation.h>

#import "CPSValidationRequest.h"

@interface CPSURLValidator : NSObject {
    CPSValidationRequest *_request;
}




-(id)initWithRequest:(id)arg0 ;
-(void)_validateURL:(id)arg0 forBundleID:(id)arg1 policy:(id)arg2 completion:(id)arg3 ;
-(void)validateWithCompletion:(id)arg0 ;


@end


#endif