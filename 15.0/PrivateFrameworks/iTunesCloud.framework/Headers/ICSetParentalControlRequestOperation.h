// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICSETPARENTALCONTROLREQUESTOPERATION_H
#define ICSETPARENTALCONTROLREQUESTOPERATION_H



#import "ICRequestOperation.h"
#import "ICStoreRequestContext.h"
#import "ICStoreURLRequest.h"

@interface ICSetParentalControlRequestOperation : ICRequestOperation

@property (nonatomic) BOOL allowsExplicitContent; // ivar: _allowsExplicitContent
@property (nonatomic, getter=isAutomatic) BOOL automatic; // ivar: _automatic
@property (retain, nonatomic) ICStoreRequestContext *requestContext; // ivar: _requestContext
@property (retain, nonatomic) ICStoreURLRequest *storeURLRequest; // ivar: _storeURLRequest


-(id)initWithRequestContext:(id)arg0 allowsExplicitContent:(BOOL)arg1 isAutomatic:(BOOL)arg2 ;
-(void)_buildAndSendRequestForURL:(id)arg0 ;
-(void)_getURLFromBagAndSendRequest;
-(void)cancel;
-(void)execute;


@end


#endif