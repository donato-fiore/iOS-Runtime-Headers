// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef POCKETAPIOPERATION_H
#define POCKETAPIOPERATION_H

@class NSOperation, NSString, NSDictionary, NSURLConnection, NSMutableData, NSError, NSHTTPURLResponse;
@protocol NSURLConnectionDelegate, NSCopying, PocketAPIDelegate;


#import "PocketAPI.h"

@interface PocketAPIOperation : NSOperation <NSURLConnectionDelegate, NSCopying, PocketAPIDelegate>

 {
    NSString *baseURLPath;
    BOOL finishedLoading;
    BOOL attemptedRelogin;
}


@property (retain, nonatomic) PocketAPI *API; // ivar: API
@property (retain, nonatomic) NSString *APIMethod; // ivar: APIMethod
@property (nonatomic) int HTTPMethod; // ivar: HTTPMethod
@property (retain, nonatomic) NSDictionary *arguments; // ivar: arguments
@property (readonly, retain, nonatomic) NSString *baseURLPath;
@property (readonly, retain, nonatomic) NSURLConnection *connection; // ivar: connection
@property (readonly, retain, nonatomic) NSMutableData *data; // ivar: data
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSObject<PocketAPIDelegate> *delegate; // ivar: delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) int domain; // ivar: domain
@property (readonly, retain, nonatomic) NSError *error; // ivar: error
@property (readonly) NSUInteger hash;
@property (readonly, retain, nonatomic) NSHTTPURLResponse *response; // ivar: response
@property (readonly) Class superclass;


+(id)decodeForURL:(id)arg0 ;
+(id)encodeForURL:(id)arg0 ;
+(id)errorFromXError:(id)arg0 withErrorCode:(NSUInteger)arg1 HTTPStatusCode:(NSUInteger)arg2 ;
-(BOOL)isConcurrent;
-(BOOL)isExecuting;
-(BOOL)isFinished;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)pkt_URLRequest;
-(id)pkt_requestArguments;
-(void)connection:(id)arg0 didFailWithError:(id)arg1 ;
-(void)connection:(id)arg0 didReceiveData:(id)arg1 ;
-(void)connection:(id)arg0 didReceiveResponse:(id)arg1 ;
-(void)connectionDidFinishLoading:(id)arg0 ;
-(void)connectionFinishedWithError:(id)arg0 ;
-(void)dealloc;
-(void)pocketAPI:(id)arg0 hadLoginError:(id)arg1 ;
-(void)pocketAPILoggedIn:(id)arg0 ;
-(void)start;


@end


#endif