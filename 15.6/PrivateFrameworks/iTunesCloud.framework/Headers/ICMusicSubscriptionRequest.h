// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICMUSICSUBSCRIPTIONREQUEST_H
#define ICMUSICSUBSCRIPTIONREQUEST_H



#import "ICRequestOperation.h"
#import "ICStoreRequestContext.h"

@interface ICMusicSubscriptionRequest : ICRequestOperation {
    ICStoreRequestContext *_storeRequestContext;
    NSInteger _requestType;
    BOOL _requestingOfflineSlot;
}




-(id)_bagKeyForRequestType:(NSInteger)arg0 ;
-(id)initWithStoreRequestContext:(id)arg0 requestType:(NSInteger)arg1 requestingOfflineSlot:(BOOL)arg2 ;
-(void)execute;


@end


#endif