// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICMUSICSUBSCRIPTIONRECOMMENDATIONSREQUEST_H
#define ICMUSICSUBSCRIPTIONRECOMMENDATIONSREQUEST_H

@class NSArray;


#import "ICRequestOperation.h"
#import "ICStoreRequestContext.h"

@interface ICMusicSubscriptionRecommendationsRequest : ICRequestOperation {
    ICStoreRequestContext *_requestContext;
    NSInteger _seedItemID;
    BOOL _isLibraryID;
    NSInteger _maxResultCount;
    NSArray *_resultsList;
}




-(id)initWithRequestContext:(id)arg0 seedItemID:(NSInteger)arg1 isLibraryID:(BOOL)arg2 maxResultCount:(NSInteger)arg3 ;
-(void)execute;
-(void)performRequestWithResponseHandler:(id)arg0 ;


@end


#endif