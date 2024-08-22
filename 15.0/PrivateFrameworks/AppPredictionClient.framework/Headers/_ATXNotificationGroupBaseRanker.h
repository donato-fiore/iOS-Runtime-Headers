// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _ATXNOTIFICATIONGROUPBASERANKER_H
#define _ATXNOTIFICATIONGROUPBASERANKER_H

@class NSString;
@protocol ATXNotificationGroupRankerProtocol;

#import <Foundation/Foundation.h>


@interface _ATXNotificationGroupBaseRanker : NSObject <ATXNotificationGroupRankerProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)rankerId;
-(NSInteger)compareGroups:(id)arg0 group2:(id)arg1 ;
-(id)_initialGroupComparisonValue:(id)arg0 ;
-(id)rankNotificationGroups:(id)arg0 modeId:(id)arg1 ;


@end


#endif