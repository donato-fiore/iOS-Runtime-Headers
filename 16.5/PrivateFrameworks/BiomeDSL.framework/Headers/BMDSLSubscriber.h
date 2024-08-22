// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMDSLSUBSCRIBER_H
#define BMDSLSUBSCRIBER_H

@class NSString;
@protocol BMDSLSubscriber;


#import "BMDSLBaseCodable.h"

@interface BMDSLSubscriber : BMDSLBaseCodable <BMDSLSubscriber>



@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier


-(id)bpsSubscriber;


@end


#endif