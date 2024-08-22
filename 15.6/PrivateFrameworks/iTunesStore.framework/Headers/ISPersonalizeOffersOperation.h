// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ISPERSONALIZEOFFERSOPERATION_H
#define ISPERSONALIZEOFFERSOPERATION_H

@class SSPersonalizeOffersResponse;


#import "ISOperation.h"
#import "ISPersonalizeOffersRequest.h"

@interface ISPersonalizeOffersOperation : ISOperation {
    ISPersonalizeOffersRequest *_request;
    SSPersonalizeOffersResponse *_response;
}


@property (readonly) ISPersonalizeOffersRequest *personalizeOffersReqeust;
@property (readonly) SSPersonalizeOffersResponse *response;


-(BOOL)_runWithURLDictionary:(id)arg0 error:(*id)arg1 ;
-(id)_copyResponseForURL:(id)arg0 requestString:(id)arg1 error:(*id)arg2 ;
-(id)initWithPersonalizeOffersRequest:(id)arg0 ;
-(void)_addDictionaryToResponse:(id)arg0 ;
-(void)dealloc;
-(void)run;


@end


#endif