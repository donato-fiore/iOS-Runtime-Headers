// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXHEURISTICUPCOMINGEVENT_H
#define ATXHEURISTICUPCOMINGEVENT_H

@class NSString;
@protocol ATXContextHeuristicProtocol;

#import <Foundation/Foundation.h>


@interface ATXHeuristicUpcomingEvent : NSObject <ATXContextHeuristicProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)heuristicResultWithEnvironment:(id)arg0 ;
-(id)permanentRefreshTriggers;


@end


#endif