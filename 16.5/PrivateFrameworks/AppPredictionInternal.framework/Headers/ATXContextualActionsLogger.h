// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXCONTEXTUALACTIONSLOGGER_H
#define ATXCONTEXTUALACTIONSLOGGER_H

@class BPSPublisher;
@protocol ATXPETEventTracker2Protocol;

#import <Foundation/Foundation.h>


@interface ATXContextualActionsLogger : NSObject

@property (retain, nonatomic) BPSPublisher *publisher; // ivar: _publisher
@property (retain, nonatomic) NSObject<ATXPETEventTracker2Protocol> *tracker; // ivar: _tracker


-(id)init;
-(id)initWithDefaultTrackerAndPublisher;
-(id)initWithTracker:(id)arg0 andPublisher:(id)arg1 ;
-(id)populateContextualActionEventFromBiomeEvent:(id)arg0 withTimeStamp:(CGFloat)arg1 ;
-(void)logDailyContextualActions;
-(void)sendEvent:(id)arg0 usingPetTracker:(id)arg1 ;


@end


#endif