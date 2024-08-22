// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ISSTORESERVICESREQUESTOPERATION_H
#define ISSTORESERVICESREQUESTOPERATION_H

@class SSRequest;


#import "ISOperation.h"

@interface ISStoreServicesRequestOperation : ISOperation {
    SSRequest *_request;
}


@property (readonly) SSRequest *request;


-(id)initWithRequest:(id)arg0 ;
-(void)cancel;
-(void)dealloc;
-(void)run;


@end


#endif