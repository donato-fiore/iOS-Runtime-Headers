// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MSPCONTAINEREDITREMOVAL_H
#define _MSPCONTAINEREDITREMOVAL_H

@class MSPContainerEdit, NSString, NSIndexSet, NSArray;
@protocol MSPContainerEditRemoval;



@interface _MSPContainerEditRemoval : MSPContainerEdit <MSPContainerEditRemoval>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSIndexSet *indexesOfRemovedObjects; // ivar: _indexesOfRemovedObjects
@property (readonly, nonatomic) NSArray *originalObjects; // ivar: _originalObjects
@property (readonly, nonatomic) NSArray *removedImmutableObjects; // ivar: _removedImmutableObjects
@property (readonly) Class superclass;


-(id)initWithRemovedObjects:(id)arg0 indexes:(id)arg1 ;
-(void)useImmutableObjectsFromMap:(id)arg0 intermediateMutableObjectTransferBlock:(id)arg1 ;


@end


#endif