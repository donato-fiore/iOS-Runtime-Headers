// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _CNGEMINILOGGER_H
#define _CNGEMINILOGGER_H

@class NSString;
@protocol CNGeminiLogger, OS_os_log;

#import <Foundation/Foundation.h>


@interface _CNGeminiLogger : NSObject <CNGeminiLogger>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_os_log> *log; // ivar: _log
@property (readonly) Class superclass;


-(id)init;
-(void)fetchSortedResultsForInteraction:(id)arg0 error:(id)arg1 ;
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