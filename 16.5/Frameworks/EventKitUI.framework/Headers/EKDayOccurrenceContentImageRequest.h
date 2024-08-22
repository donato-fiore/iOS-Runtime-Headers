// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EKDAYOCCURRENCECONTENTIMAGEREQUEST_H
#define EKDAYOCCURRENCECONTENTIMAGEREQUEST_H


#import <Foundation/Foundation.h>

#import "EKDayOccurrenceState.h"

@interface EKDayOccurrenceContentImageRequest : NSObject

@property (nonatomic) NSUInteger options; // ivar: _options
@property (readonly, nonatomic) NSInteger requestId; // ivar: _requestId
@property (readonly, nonatomic) id *resultHandler; // ivar: _resultHandler
@property (retain, nonatomic) EKDayOccurrenceState *state; // ivar: _state


-(id)initWithId:(NSInteger)arg0 options:(NSUInteger)arg1 state:(id)arg2 resultHandler:(id)arg3 ;


@end


#endif