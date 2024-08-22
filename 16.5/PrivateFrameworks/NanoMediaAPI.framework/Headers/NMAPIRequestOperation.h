// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NMAPIREQUESTOPERATION_H
#define NMAPIREQUESTOPERATION_H

@class MPStoreModelRequestOperation, ICURLBag;


#import "NMAPIRequest.h"

@interface NMAPIRequestOperation : MPStoreModelRequestOperation {
    ICURLBag *_storeURLBag;
}


@property (copy, nonatomic) NMAPIRequest *request;


-(id)_readResponseDictionaryFromDisk;
-(id)configurationForLoadingModelDataWithStoreURLBag:(id)arg0 error:(*id)arg1 ;
-(id)initWithRequest:(id)arg0 ;
-(id)initWithRequest:(id)arg0 responseHandler:(id)arg1 ;
-(void)_personalizeResponse:(id)arg0 completion:(id)arg1 ;
-(void)_writeResponseDictionaryToDisk:(id)arg0 ;
-(void)execute;
-(void)produceResponseWithLoadedOutput:(id)arg0 completion:(id)arg1 ;


@end


#endif