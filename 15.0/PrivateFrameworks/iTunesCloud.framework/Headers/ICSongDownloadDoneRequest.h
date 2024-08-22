// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICSONGDOWNLOADDONEREQUEST_H
#define ICSONGDOWNLOADDONEREQUEST_H

@class NSString;


#import "ICRequestOperation.h"
#import "ICStoreRequestContext.h"
#import "ICStoreURLRequest.h"

@interface ICSongDownloadDoneRequest : ICRequestOperation {
    ICStoreRequestContext *_requestContext;
    NSString *_downloadIdentifier;
    NSUInteger _songID;
    ICStoreURLRequest *_storeURLRequest;
}




-(id)initWithRequestContext:(id)arg0 downloadIdentifier:(id)arg1 songID:(NSUInteger)arg2 ;
-(void)cancel;
-(void)execute;
-(void)performRequestWithResponseHandler:(id)arg0 ;


@end


#endif