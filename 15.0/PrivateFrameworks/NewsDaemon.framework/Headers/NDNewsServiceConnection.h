// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NDNEWSSERVICECONNECTION_H
#define NDNEWSSERVICECONNECTION_H

@class NSXPCConnection, NSString;
@protocol NDNewsServiceClient, NDNewsService, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NDNewsServiceConnection : NSObject <NDNewsServiceClient, NDNewsService>



@property (retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // ivar: _accessQueue
@property (weak, nonatomic) NSObject<NDNewsServiceClient> *client; // ivar: _client
@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (retain, nonatomic) NSObject<NDNewsService> *daemon; // ivar: _daemon
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithClient:(id)arg0 ;
-(void)_establishConnectionIfNeededWithCompletion:(id)arg0 ;
-(void)_unsafeEstablishConnectionIfNeededWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)fetchLatestResultsWithParameters:(id)arg0 completion:(id)arg1 ;
-(void)fetchModuleDescriptorsWithCompletion:(id)arg0 ;
-(void)fetchPlaceholderResultsWithOperationInfo:(id)arg0 syncCompletion:(id)arg1 ;
-(void)markAnalyticsElement:(id)arg0 asReadAtDate:(id)arg1 withCompletion:(id)arg2 ;
-(void)markAnalyticsElements:(id)arg0 asSeenAtDate:(id)arg1 withCompletion:(id)arg2 ;
-(void)serviceHasNewTodayResults;


@end


#endif