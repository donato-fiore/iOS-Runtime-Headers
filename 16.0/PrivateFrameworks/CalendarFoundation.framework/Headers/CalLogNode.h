// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CALLOGNODE_H
#define CALLOGNODE_H

@class NSMutableArray;
@protocol OS_dispatch_group, OS_dispatch_queue, CalLogWriter;

#import <Foundation/Foundation.h>

#import "CalLogFilter.h"

@interface CalLogNode : NSObject {
    NSObject<OS_dispatch_group> *_dispatchGroup;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}


@property (retain, nonatomic) NSMutableArray *accumulator; // ivar: _accumulator
@property (nonatomic) NSUInteger accumulatorBufferSize; // ivar: _accumulatorBufferSize
@property (retain, nonatomic) CalLogFilter *filter; // ivar: _filter
@property (retain, nonatomic) NSMutableArray *subnodes; // ivar: _subnodes
@property (retain, nonatomic) NSObject<CalLogWriter> *writer; // ivar: _writer


-(BOOL)flush;
-(id)allSubnodes;
-(id)init;
-(int)minimumLevelOfNodeTree;
-(void)addSubnode:(id)arg0 ;
-(void)clearAccumulator;
-(void)flushAccumulator;
-(void)processEnvelope:(id)arg0 ;
-(void)removeSubnode:(id)arg0 ;


@end


#endif