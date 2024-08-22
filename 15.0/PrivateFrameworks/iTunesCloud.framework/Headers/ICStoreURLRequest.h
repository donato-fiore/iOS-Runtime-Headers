// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICSTOREURLREQUEST_H
#define ICSTOREURLREQUEST_H

@class NSDictionary, NSArray, NSString;


#import "ICURLRequest.h"
#import "ICJSSignConfiguration.h"
#import "ICStoreRequestContext.h"

@interface ICStoreURLRequest : ICURLRequest

@property (copy, nonatomic) ICJSSignConfiguration *JSSignConfiguration; // ivar: _JSSignConfiguration
@property (copy, nonatomic) NSDictionary *additionalHTTPCookies; // ivar: _additionalHTTPCookies
@property (copy, nonatomic) NSArray *additionalQueryItems; // ivar: _additionalQueryItems
@property (nonatomic) NSInteger anisetteVersion; // ivar: _anisetteVersion
@property (copy, nonatomic) NSString *machineDataSyncState; // ivar: _machineDataSyncState
@property (nonatomic) BOOL shouldParseBodyData; // ivar: _shouldParseBodyData
@property (nonatomic) BOOL shouldRequireURLBag; // ivar: _shouldRequireURLBag
@property (nonatomic) BOOL shouldUseMescalSigning; // ivar: _shouldUseMescalSigning
@property (readonly, copy, nonatomic) ICStoreRequestContext *storeRequestContext;


+(BOOL)_shouldPersonalizeRequestForClientInfo:(id)arg0 personalizationStyle:(NSInteger)arg1 ;
+(Class)_responseHandlerClass;
+(NSUInteger)_defaultMaxRetryCountForReason:(id)arg0 ;
+(id)currentConnectionTypeHeader;
-(BOOL)_shouldPersonalizeRequest;
-(id)_stringForCachePolicy:(NSUInteger)arg0 ;
-(id)description;
-(id)initWithURL:(id)arg0 requestContext:(id)arg1 ;
-(id)initWithURLRequest:(id)arg0 requestContext:(id)arg1 ;
-(id)initWithURLRequest:(id)arg0 requestContext:(id)arg1 resumeData:(id)arg2 ;
-(void)_getSignatureDataForRequest:(id)arg0 urlBag:(id)arg1 completionHandler:(id)arg2 ;
-(void)buildStoreURLRequestWithURLRequest:(id)arg0 builderProperties:(id)arg1 completionHandler:(id)arg2 ;
-(void)buildURLRequestWithCompletionHandler:(id)arg0 ;


@end


#endif