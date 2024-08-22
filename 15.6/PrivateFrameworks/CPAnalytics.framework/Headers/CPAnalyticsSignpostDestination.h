// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPANALYTICSSIGNPOSTDESTINATION_H
#define CPANALYTICSSIGNPOSTDESTINATION_H

@class NSString, NSMutableIndexSet;
@protocol CPAnalyticsDestination;

#import <Foundation/Foundation.h>

#import "CPAnalytics.h"

@interface CPAnalyticsSignpostDestination : NSObject <CPAnalyticsDestination>



@property (weak, nonatomic) CPAnalytics *cpAnalyticsInstance; // ivar: _cpAnalyticsInstance
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL disabled;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMutableIndexSet *startedSignpostIDs; // ivar: _startedSignpostIDs
@property (readonly) Class superclass;


-(id)initWithConfig:(id)arg0 cpAnalyticsInstance:(id)arg1 ;
-(void)_checkSignpostsEndForEvent:(id)arg0 ;
-(void)_sendCPAnalyticsEvent:(id)arg0 withPayload:(id)arg1 withDuration:(CGFloat)arg2 ;
-(void)_trackSignpostsStartForEvent:(id)arg0 ;
-(void)processEvent:(id)arg0 ;
-(void)updateWithConfig:(id)arg0 ;


@end


#endif