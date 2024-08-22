// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRTTMERGEABLESTRINGINDEX_H
#define CRTTMERGEABLESTRINGINDEX_H


#import <Foundation/Foundation.h>

#import "CRContext.h"

@interface CRTTMergeableStringIndex : NSObject

@property (readonly, nonatomic) NSUInteger affinity; // ivar: _affinity
@property (readonly, nonatomic) CRContext *context; // ivar: _context
@property (readonly, nonatomic) TopoID index; // ivar: _index


-(BOOL)isEqual:(id)arg0 ;
-(id)_objCRenameSequence;
-(id)initWithContext:(id)arg0 topoID:(struct TopoID )arg1 affinity:(NSUInteger)arg2 ;
-(void)dealloc;


@end


#endif