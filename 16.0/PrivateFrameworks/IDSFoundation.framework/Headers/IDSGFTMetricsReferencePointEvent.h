// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IDSGFTMETRICSREFERENCEPOINTEVENT_H
#define IDSGFTMETRICSREFERENCEPOINTEVENT_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface IDSGFTMetricsReferencePointEvent : NSObject

@property (copy) NSNumber *reason; // ivar: _reason
@property (copy) NSNumber *time; // ivar: _time


-(id)description;
-(id)initWithTime:(id)arg0 reason:(id)arg1 ;


@end


#endif