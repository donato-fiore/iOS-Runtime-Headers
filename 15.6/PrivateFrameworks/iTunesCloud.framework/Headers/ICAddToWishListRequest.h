// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICADDTOWISHLISTREQUEST_H
#define ICADDTOWISHLISTREQUEST_H

@class NSString;


#import "ICRequestOperation.h"
#import "ICStoreRequestContext.h"
#import "ICAddToWishListResponse.h"

@interface ICAddToWishListRequest : ICRequestOperation {
    ICStoreRequestContext *_requestContext;
    NSString *_buyParams;
    NSInteger _storeItemID;
    NSString *_itemName;
    NSString *_itemKind;
    ICAddToWishListResponse *_response;
}




-(id)initWithRequestContext:(id)arg0 buyParams:(id)arg1 storeItemID:(NSInteger)arg2 itemName:(id)arg3 itemKind:(id)arg4 ;
-(id)initWithRequestContext:(id)arg0 platformMetadataItem:(id)arg1 ;
-(void)execute;
-(void)performWithResponseHandler:(id)arg0 ;


@end


#endif