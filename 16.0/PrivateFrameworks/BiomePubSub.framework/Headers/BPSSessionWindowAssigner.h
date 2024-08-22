// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BPSSESSIONWINDOWASSIGNER_H
#define BPSSESSIONWINDOWASSIGNER_H

@class NSDate, NSString;
@protocol BPSWindowAssigner;

#import <Foundation/Foundation.h>

#import "BPSAggregator.h"

@interface BPSSessionWindowAssigner : NSObject <BPSWindowAssigner>

 {
    CGFloat _gap;
    BPSAggregator *_aggregator;
    id *_timestamp;
    NSUInteger _identifier;
    NSDate *_lastTimestamp;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)assignWindow:(id)arg0 input:(id)arg1 ;
-(id)initWithGap:(CGFloat)arg0 aggregator:(id)arg1 ;
// -(id)initWithGap:(CGFloat)arg0 timestamp:(id)arg1 aggregator:(unk)arg2  ;


@end


#endif