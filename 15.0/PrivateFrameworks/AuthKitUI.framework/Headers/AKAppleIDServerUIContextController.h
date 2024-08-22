// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AKAPPLEIDSERVERUICONTEXTCONTROLLER_H
#define AKAPPLEIDSERVERUICONTEXTCONTROLLER_H

@class NSHTTPURLResponse, AKServerRequestConfiguration, NSURL, AKAppleIDServerResourceLoadDelegate;

#import <Foundation/Foundation.h>

#import "AKAppleIDServerUIDataHarvester.h"

@interface AKAppleIDServerUIContextController : NSObject {
    id *_serverUICompletion;
    NSHTTPURLResponse *_latestReadResponse;
    AKServerRequestConfiguration *_configuration;
}


@property (readonly, copy, nonatomic) NSURL *initiatingURL; // ivar: _initiatingURL
@property (readonly, nonatomic) AKAppleIDServerUIDataHarvester *serverDataHarvester; // ivar: _serverDataHarvester
@property (readonly, nonatomic) AKAppleIDServerResourceLoadDelegate *serverUIDelegate; // ivar: _serverUIDelegate


-(BOOL)handleAuthKitActionAttribute:(id)arg0 ;
-(id)_headerValueFromType:(NSUInteger)arg0 ;
-(id)initWithRequestConfiguration:(id)arg0 completion:(id)arg1 ;
-(void)_completeWithResponse:(id)arg0 additionalData:(id)arg1 error:(id)arg2 ;
-(void)completeWithError:(id)arg0 ;
-(void)completeWithError:(id)arg0 additionalData:(id)arg1 ;
-(void)completeWithFinalResponse:(id)arg0 ;
-(void)processResponse:(id)arg0 ;
-(void)signRequest:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)tearDownContext;


@end


#endif