// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BPSCOUNTWINDOWASSIGNER_H
#define BPSCOUNTWINDOWASSIGNER_H

@class NSString;
@protocol BPSWindowAssigner;

#import <Foundation/Foundation.h>

#import "BPSAggregator.h"

@interface BPSCountWindowAssigner : NSObject <BPSWindowAssigner>

 {
    NSUInteger _capacity;
    BPSAggregator *_aggregator;
    NSUInteger _identifier;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)assignWindow:(id)arg0 input:(id)arg1 ;
-(id)initWithCapacity:(NSUInteger)arg0 aggregator:(id)arg1 ;


@end


#endif