// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TFCONTAINERPOOL_H
#define TFCONTAINERPOOL_H

@class NSMutableDictionary, NSMutableArray;

#import <Foundation/Foundation.h>


@interface TFContainerPool : NSObject

@property (retain, nonatomic) NSMutableDictionary *containerSingletons; // ivar: _containerSingletons
@property (nonatomic) NSUInteger depth; // ivar: _depth
@property (nonatomic) NSUInteger drainDepth; // ivar: _drainDepth
@property (retain, nonatomic) NSMutableDictionary *graph; // ivar: _graph
@property (nonatomic, getter=isObjectGraphDrainingEnabled) BOOL objectGraphDrainingEnabled; // ivar: _objectGraphDrainingEnabled
@property (retain, nonatomic) NSMutableArray *onDrainBlocks; // ivar: _onDrainBlocks
@property (retain, nonatomic) NSMutableArray *onDrainCopyPoolObjectGraphBlocks; // ivar: _onDrainCopyPoolObjectGraphBlocks
@property (readonly, nonatomic, getter=isPoolPreparedForLockingGraph) BOOL poolPreparedForLockingGraph;
@property (retain, nonatomic) NSMutableDictionary *singletons; // ivar: _singletons


-(id)copyWithObjectGraphDrainingDisabled;
-(id)enter:(id)arg0 ;
-(id)init;
-(id)initWithSingletonPool:(id)arg0 ;
-(void)drain;
-(void)linkDepth:(id)arg0 ;
-(void)onDrain:(id)arg0 ;
-(void)onDrainCopyPoolObjectGraph:(id)arg0 ;


@end


#endif