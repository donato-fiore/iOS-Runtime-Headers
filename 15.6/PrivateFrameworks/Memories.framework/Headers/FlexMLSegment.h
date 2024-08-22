// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FLEXMLSEGMENT_H
#define FLEXMLSEGMENT_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface FlexMLSegment : NSObject

@property (readonly, nonatomic) ? duration; // ivar: _duration
@property (readonly, nonatomic) NSArray *gainFunction; // ivar: _gainFunction
@property (readonly, nonatomic) ? summaryTime; // ivar: _summaryTime
@property (readonly, nonatomic) ? trackTime; // ivar: _trackTime


-(id)initWithDuration:(struct ? )arg0 trackTime:(struct ? )arg1 summaryTime:(struct ? )arg2 gainFunction:(id)arg3 ;


@end


#endif