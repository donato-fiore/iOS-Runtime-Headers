// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCCLIENTENDPOINTCONNECTION_H
#define FCCLIENTENDPOINTCONNECTION_H

@class NSURL, NSString;
@protocol FCCoreConfigurationObserving, FCCoreConfigurationManager;

#import <Foundation/Foundation.h>

#import "FCEndpointConnection.h"
#import "FCAsyncSerialQueue.h"

@interface FCClientEndpointConnection : NSObject <FCCoreConfigurationObserving>



@property (retain, nonatomic) NSURL *baseURL; // ivar: _baseURL
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
-(void)reportConcern:(id)arg0 callbackQueue:(id)arg1 completion:(id)arg2 ;
-(void)submitWebAccessWithTagID:(id)arg0 purchaseID:(id)arg1 emailAddress:(id)arg2 purchaseReceipt:(id)arg3 countryCode:(id)arg4 languageCode:(id)arg5 callbackQueue:(id)arg6 completion:(id)arg7 ;
-(void)updateBaseURLWith:(id)arg0 ;


@end


#endif