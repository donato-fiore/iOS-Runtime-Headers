// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _ANEANALYTICSPROCEDURE_H
#define _ANEANALYTICSPROCEDURE_H

@class NSArray, NSDictionary;

#import <Foundation/Foundation.h>


@interface _ANEAnalyticsProcedure : NSObject

@property (readonly, nonatomic) NSArray *groupInfo; // ivar: _groupInfo
@property (readonly, nonatomic) NSDictionary *procedureMetrics; // ivar: _procedureMetrics


+(id)objectWithGroups:(id)arg0 procedureMetrics:(id)arg1 ;
-(id)initWithGroups:(id)arg0 procedureMetrics:(id)arg1 ;
-(id)serialize;


@end


#endif