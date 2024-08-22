// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CTCELLULARPLANREQUEST_H
#define CTCELLULARPLANREQUEST_H

@class NSArray, NSDictionary, NSURLConnection, NSString, NSError, NSMutableData, NSMutableURLRequest, NSURLResponse, NSData;
@protocol NSURLConnectionDataDelegate;

#import <Foundation/Foundation.h>


@interface CTCellularPlanRequest : NSObject <NSURLConnectionDataDelegate>

 {
    int nextConnectionTypeIndex;
    NSArray *_responseCookies;
    NSArray *_requestCookies;
    NSDictionary *_internetSettings;
    NSDictionary *_bootstrapSettings;
}


@property (copy, nonatomic) id *completionBlock; // ivar: _completionBlock
@property (retain, nonatomic) NSURLConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (readonly) NSUInteger hash;
@property (nonatomic) *dispatch_queue_s queue; // ivar: _queue
@property (retain, nonatomic) NSMutableData *receivedData; // ivar: _receivedData
@property (retain, nonatomic) NSMutableURLRequest *request; // ivar: _request
@property (retain, nonatomic) NSURLResponse *response; // ivar: _response
@property (nonatomic) NSData *serializedCookies;
@property (readonly) Class superclass;


+(BOOL)isRetriableErrorCode:(NSInteger)arg0 ;
+(id)connectionSettingsForServiceType:(NSInteger)arg0 ;
+(id)createSessionRequest;
+(id)loadPlansRequestWithUrl:(id)arg0 postData:(id)arg1 ;
+(id)newInitiatePurchaseWithSessionId:(id)arg0 planId:(id)arg1 ;
+(id)newPurchaseWithSessionId:(id)arg0 receipt:(id)arg1 userId:(id)arg2 userName:(id)arg3 ;
+(id)plansRequestWithSignIdMap:(id)arg0 renewalIccid:(id)arg1 urls:(id)arg2 ;
+(id)requestHandoffTokenWithSignIdMap:(id)arg0 urls:(id)arg1 ;
+(id)subscriptionDetailsRequestWithIccids:(id)arg0 signIdMap:(id)arg1 urls:(id)arg2 ;
+(void)initialize;
+(void)setBootstrapConnectionSettings:(id)arg0 ;
+(void)setInternetConnectionSettings:(id)arg0 ;
-(BOOL)_canTryAnotherConnectionType;
-(BOOL)_isRetryableError:(id)arg0 ;
-(id)_initWithUrl:(id)arg0 httpMethod:(id)arg1 httpHeaders:(id)arg2 httpBody:(id)arg3 internetSettings:(id)arg4 bootstrapSettings:(id)arg5 ;
-(id)initGetWithUrl:(id)arg0 ;
-(id)initJsonPostWithUrl:(id)arg0 jsonData:(id)arg1 ;
-(id)initJsonPostWithUrl:(id)arg0 jsonData:(id)arg1 internetSettings:(id)arg2 bootstrapSettings:(id)arg3 ;
-(id)initPostWithUrl:(id)arg0 ;
-(id)initWithUrl:(id)arg0 httpMethod:(id)arg1 httpHeaders:(id)arg2 httpBody:(id)arg3 ;
-(void)_callback;
-(void)_startRequestWithNextConnectionTypeOrFail;
-(void)cancel;
-(void)connection:(id)arg0 didFailWithError:(id)arg1 ;
-(void)connection:(id)arg0 didReceiveData:(id)arg1 ;
-(void)connection:(id)arg0 didReceiveResponse:(id)arg1 ;
-(void)connectionDidFinishLoading:(id)arg0 ;
-(void)dealloc;
-(void)startRequestWithReplyQueue:(struct dispatch_queue_s *)arg0 completion:(id)arg1 ;


@end


#endif