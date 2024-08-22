// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFITEMRESULTCOMPONENT_H
#define HFITEMRESULTCOMPONENT_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface HFItemResultComponent : NSObject

@property (readonly, nonatomic) NSInteger componentPriority; // ivar: _componentPriority
@property (readonly, copy, nonatomic) NSDictionary *results;


+(id)combinedResultsForComponents:(id)arg0 ;


@end


#endif