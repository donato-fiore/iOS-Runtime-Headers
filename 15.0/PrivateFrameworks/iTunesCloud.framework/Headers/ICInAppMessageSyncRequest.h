// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICINAPPMESSAGESYNCREQUEST_H
#define ICINAPPMESSAGESYNCREQUEST_H



#import "ICRequestOperation.h"
#import "ICStoreRequestContext.h"
#import "ICIAMSynchronizeMessagesResponse.h"

@interface ICInAppMessageSyncRequest : ICRequestOperation {
    ICStoreRequestContext *_storeRequestContext;
    ICIAMSynchronizeMessagesResponse *_syncResponse;
    NSUInteger _fromRevision;
}




-(id)initWithStoreRequestContext:(id)arg0 fromRevision:(NSUInteger)arg1 ;
-(void)execute;
-(void)performRequestWithResponseHandler:(id)arg0 ;


@end


#endif