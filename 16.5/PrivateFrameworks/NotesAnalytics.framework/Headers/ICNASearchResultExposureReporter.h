// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICNASEARCHRESULTEXPOSUREREPORTER_H
#define ICNASEARCHRESULTEXPOSUREREPORTER_H

@class NSMutableArray, NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "ICNAEventReporter.h"

@interface ICNASearchResultExposureReporter : NSObject

@property (retain, nonatomic) ICNAEventReporter *eventReporter; // ivar: _eventReporter
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *isolationQueue; // ivar: _isolationQueue
@property (retain, nonatomic) NSMutableArray *searchResultExposureItems; // ivar: _searchResultExposureItems
@property (retain, nonatomic) NSString *searchSessionID; // ivar: _searchSessionID


-(id)_exposureDataThreadUnsafe;
-(id)init;
-(void)analyticsSessionWillEnd:(id)arg0 ;
-(void)invalidateSearchSessionID;
-(void)startTrackingNewSearchString:(id)arg0 ;
-(void)submitEventIfApplicable;
-(void)updateSearchResultWasSelected:(BOOL)arg0 ;
-(void)updateSearchSessionID:(id)arg0 ;
-(void)updateWithTopHitResultCount:(NSUInteger)arg0 nonTopHitResultCount:(NSUInteger)arg1 ;


@end


#endif