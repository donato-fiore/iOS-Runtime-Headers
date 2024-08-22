// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRTTMERGEABLESTRINGINDEX_H
#define CRTTMERGEABLESTRINGINDEX_H


#import <Foundation/Foundation.h>


@interface CRTTMergeableStringIndex : NSObject

@property (readonly, nonatomic) NSUInteger affinity; // ivar: _affinity
@property (readonly, nonatomic) TopoID index; // ivar: _index
@property (readonly, nonatomic) NSInteger maxCounter; // ivar: _maxCounter
@property (nonatomic) NSInteger renameGeneration; // ivar: _renameGeneration


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)needToFinalizeTimestamps;
-(id)_objCRenameSequence;
-(id)description;
-(id)finalizedInContext:(id)arg0 ;
-(id)initWithTimestamp:(id)arg0 affinity:(NSUInteger)arg1 renameGeneration:(NSInteger)arg2 ;
-(id)initWithTopoID:(struct TopoID )arg0 affinity:(NSUInteger)arg1 renameGeneration:(NSInteger)arg2 maxCounter:(NSInteger)arg3 ;
-(id)renamed:(id)arg0 ;
-(id)timestamp;
-(void)dealloc;


@end


#endif