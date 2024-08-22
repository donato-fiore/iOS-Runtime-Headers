// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXPOICATEGORYGROUPINGRESULT_H
#define ATXPOICATEGORYGROUPINGRESULT_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "ATXPOICategoryVisitEvent.h"

@interface ATXPOICategoryGroupingResult : NSObject

@property (readonly, nonatomic) NSArray *events; // ivar: _events
@property (readonly, nonatomic) ATXPOICategoryVisitEvent *finalPOIWithoutExit; // ivar: _finalPOIWithoutExit


-(id)initWithEvents:(id)arg0 finalPOIWithoutExit:(id)arg1 ;


@end


#endif