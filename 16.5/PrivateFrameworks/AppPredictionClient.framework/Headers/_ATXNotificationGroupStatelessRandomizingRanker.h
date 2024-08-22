// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _ATXNOTIFICATIONGROUPSTATELESSRANDOMIZINGRANKER_H
#define _ATXNOTIFICATIONGROUPSTATELESSRANDOMIZINGRANKER_H

@class NSString;
@protocol ATXNotificationGroupRankerProtocol;

#import <Foundation/Foundation.h>


@interface _ATXNotificationGroupStatelessRandomizingRanker : NSObject <ATXNotificationGroupRankerProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)rankerId;
-(CGFloat)_standardUniformDistribution;
-(NSUInteger)_generateNumSwaps:(id)arg0 ;
-(id)randomlySwapGroups:(id)arg0 ;
-(id)rankNotificationGroups:(id)arg0 modeId:(id)arg1 ;


@end


#endif