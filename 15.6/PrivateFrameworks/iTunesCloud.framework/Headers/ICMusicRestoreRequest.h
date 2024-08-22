// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICMUSICRESTOREREQUEST_H
#define ICMUSICRESTOREREQUEST_H



#import "ICRequestOperation.h"
#import "ICStoreRequestContext.h"
#import "ICStoreURLRequest.h"
#import "ICMediaRedownloadResponse.h"
#import "ICMusicRestoreRequestParameters.h"

@interface ICMusicRestoreRequest : ICRequestOperation {
    ICStoreRequestContext *_requestContext;
    ICStoreURLRequest *_storeURLRequest;
    ICMediaRedownloadResponse *_response;
    ICMusicRestoreRequestParameters *_requestParameters;
}




-(id)_serializedBodyDataWithAccountID:(id)arg0 ;
-(id)initWithRequestContext:(id)arg0 parameters:(id)arg1 ;
-(void)cancel;
-(void)execute;
-(void)performRestoreRequestWithCompletionHandler:(id)arg0 ;


@end


#endif