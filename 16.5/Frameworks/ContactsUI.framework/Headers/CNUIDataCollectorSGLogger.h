// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNUIDATACOLLECTORSGLOGGER_H
#define CNUIDATACOLLECTORSGLOGGER_H

@protocol CNScheduler;

#import <Foundation/Foundation.h>


@interface CNUIDataCollectorSGLogger : NSObject

@property (readonly, copy, nonatomic) id *serviceProvider; // ivar: _serviceProvider
@property (retain, nonatomic) NSObject<CNScheduler> *workQueue; // ivar: _workQueue


// +(id)loggerWithSGSuggestionsServiceProvider:(id)arg0 schedulerProvider:(unk)arg1  ;
// -(id)initWithSuggestionsServiceProvider:(id)arg0 schedulerProvider:(unk)arg1  ;
-(void)logContactCreated:(id)arg0 contactIdentifier:(id)arg1 bundleID:(id)arg2 ;
-(void)logContactSearchResultSelected:(id)arg0 contactIdentifier:(id)arg1 bundleID:(id)arg2 ;
-(void)logSearchResultsIncludedPureSuggestionsWithBundleID:(id)arg0 ;
-(void)logSuggestedContactDetailShown:(id)arg0 contactIdentifier:(id)arg1 bundleID:(id)arg2 ;
-(void)logSuggestedContactDetailUsed:(id)arg0 contactIdentifier:(id)arg1 bundleID:(id)arg2 ;
-(void)performBlockWithService:(id)arg0 ;


@end


#endif