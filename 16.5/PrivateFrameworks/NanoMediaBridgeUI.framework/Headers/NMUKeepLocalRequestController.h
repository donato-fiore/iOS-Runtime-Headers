// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NMUKEEPLOCALREQUESTCONTROLLER_H
#define NMUKEEPLOCALREQUESTCONTROLLER_H

@class NMSKeepLocalRequest, UIViewController;

#import <Foundation/Foundation.h>


@interface NMUKeepLocalRequestController : NSObject {
    NMSKeepLocalRequest *_request;
    UIViewController *_presentingViewController;
}




+(id)requiredPropertiesForModelKind:(id)arg0 ;
-(id)initWithRequest:(id)arg0 presentingViewController:(id)arg1 ;
-(void)_handleResponseForRequest:(id)arg0 options:(id)arg1 error:(id)arg2 completion:(id)arg3 ;
-(void)_presentAlertForRequest:(id)arg0 options:(id)arg1 error:(id)arg2 completion:(id)arg3 ;
-(void)performRequestWithOptions:(id)arg0 completion:(id)arg1 ;


@end


#endif