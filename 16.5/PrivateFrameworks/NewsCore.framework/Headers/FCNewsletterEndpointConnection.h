// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCNEWSLETTERENDPOINTCONNECTION_H
#define FCNEWSLETTERENDPOINTCONNECTION_H

@class NSURL, NSString;
@protocol FCCoreConfigurationObserving, FCCoreConfigurationManager;

#import <Foundation/Foundation.h>

#import "FCEndpointConnection.h"
#import "FCAsyncSerialQueue.h"

@interface FCNewsletterEndpointConnection : NSObject <FCCoreConfigurationObserving>



@property (retain) NSURL *baseURL; // ivar: _baseURL
@property (retain, nonatomic) NSObject<FCCoreConfigurationManager> *configurationManager; // ivar: _configurationManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) FCEndpointConnection *endpointConnection; // ivar: _endpointConnection
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) FCAsyncSerialQueue *serialQueue; // ivar: _serialQueue
@property (readonly) Class superclass;


-(id)initWithConfigurationManager:(id)arg0 ;
-(id)initWithEndpointConnection:(id)arg0 configurationManager:(id)arg1 ;
-(void)configurationManager:(id)arg0 configurationDidChange:(id)arg1 ;
-(void)deletePersonalizationVectorWithCallbackQueue:(id)arg0 completion:(id)arg1 ;
-(void)getNewsletterSubscriptionWithCallbackQueue:(id)arg0 completion:(id)arg1 ;
-(void)getWebTokenWithCallbackQueue:(id)arg0 completion:(id)arg1 ;
-(void)newsletterSubscribeTo:(id)arg0 includeArray:(id)arg1 callbackQueue:(id)arg2 completion:(id)arg3 ;
-(void)submitPersonalizationVector:(id)arg0 withCallbackQueue:(id)arg1 completion:(id)arg2 ;
-(void)updateBaseURL:(id)arg0 ;


@end


#endif