// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NDNEWSDAEMONCONTEXT_H
#define NDNEWSDAEMONCONTEXT_H

@class NSString;
@protocol NDNewsServiceClient, NDNewsService;

#import <Foundation/Foundation.h>


@interface NDNewsDaemonContext : NSObject <NDNewsServiceClient, NDNewsService>



@property (retain, nonatomic) NSObject<NDNewsService> *daemon; // ivar: _daemon
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) id *updateResultsHandler; // ivar: _updateResultsHandler


-(id)_queue;
-(id)init;
-(void)fetchLatestResultsWithParameters:(id)arg0 completion:(id)arg1 ;
-(void)fetchModuleDescriptorsWithCompletion:(id)arg0 ;
-(void)fetchPlaceholderResultsWithOperationInfo:(id)arg0 syncCompletion:(id)arg1 ;
-(void)markAnalyticsElement:(id)arg0 asReadAtDate:(id)arg1 withCompletion:(id)arg2 ;
-(void)markAnalyticsElements:(id)arg0 asSeenAtDate:(id)arg1 withCompletion:(id)arg2 ;
-(void)serviceHasNewTodayResults;


@end


#endif