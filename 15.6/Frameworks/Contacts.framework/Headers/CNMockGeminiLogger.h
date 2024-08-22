// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNMOCKGEMINILOGGER_H
#define CNMOCKGEMINILOGGER_H

@class NSString;
@protocol CNGeminiLogger;

#import <Foundation/Foundation.h>


@interface CNMockGeminiLogger : NSObject <CNGeminiLogger>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)fetchBestResultForInteraction:(id)arg0 error:(id)arg1 ;
-(void)fetchSortedResultsForInteraction:(id)arg0 error:(id)arg1 ;
-(void)fetchedBestResult:(id)arg0 forInteraction:(id)arg1 ;
-(void)fetchedSortedResults:(id)arg0 forInteraction:(id)arg1 ;
-(void)fetchingBestResultForDestinationHandle:(id)arg0 ;
-(void)recordInteractionError:(id)arg0 ;
-(void)recordedInteraction:(id)arg0 forContext:(id)arg1 ;
-(void)registeredForContextUpdatesWithToken:(id)arg0 ;
-(void)unregisteredForContextUpdatesWithToken:(id)arg0 ;
-(void)updateSubscriptionInfoError:(id)arg0 ;
-(void)updatedSubscriptionInfo:(id)arg0 ;
-(void)updatingSubscriptionInfo:(id)arg0 ;


@end


#endif