// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSMOCKNETWORKPROXY_H
#define AMSMOCKNETWORKPROXY_H

@class NSURLProtocol;


#import "AMSMockURLOverride.h"

@interface AMSMockNetworkProxy : NSURLProtocol

@property (retain, nonatomic) AMSMockURLOverride *currentOverride; // ivar: _currentOverride


+(BOOL)canInitWithRequest:(id)arg0 ;
+(id)_executedOverrides;
+(id)_overrides;
+(id)canonicalRequestForRequest:(id)arg0 ;
+(id)executedOverrides;
+(id)registeredOverrides;
+(void)_removeAllOverrides;
+(void)_removeOverride:(id)arg0 ;
+(void)_sync:(id)arg0 ;
+(void)addOverride:(id)arg0 ;
+(void)clearOverrides;
+(void)removeOverride:(id)arg0 ;
-(void)finishWithData:(id)arg0 ;
-(void)finishWithError:(id)arg0 ;
-(void)performRedirectFromResponse:(id)arg0 ;
-(void)sendResponse:(id)arg0 ;
-(void)startLoading;
-(void)stopLoading;


@end


#endif