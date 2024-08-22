// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXCORRELATEDEVENTS_H
#define ATXCORRELATEDEVENTS_H


#import <Foundation/Foundation.h>

#import "ATXDuetEvent.h"

@interface ATXCorrelatedEvents : NSObject

@property (readonly, nonatomic) ATXDuetEvent *firstEvent; // ivar: _firstEvent
@property (readonly, nonatomic) ATXDuetEvent *secondEvent; // ivar: _secondEvent


-(id)initWithFirstEvent:(id)arg0 secondEvent:(id)arg1 ;


@end


#endif