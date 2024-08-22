// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MSPCONTAINEREDITREPLACEMENT_H
#define _MSPCONTAINEREDITREPLACEMENT_H

@class MSPContainerEdit, NSString, NSIndexSet, NSArray;
@protocol MSPContainerEditReplacement;



@interface _MSPContainerEditReplacement : MSPContainerEdit <MSPContainerEditReplacement>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSIndexSet *indexesOfReplacedObjects; // ivar: _indexesOfReplacedObjects
@property (readonly, nonatomic) NSArray *originalImmutableObjects; // ivar: _originalImmutableObjects
@property (readonly, nonatomic) NSArray *originalObjects; // ivar: _originalObjects
@property (readonly, nonatomic) NSArray *replacementImmutableObjects; // ivar: _replacementImmutableObjects
@property (readonly, nonatomic) NSArray *replacementObjects; // ivar: _replacementObjects
@property (readonly) Class superclass;


-(id)initWithOriginalObjects:(id)arg0 replacementObjects:(id)arg1 indexes:(id)arg2 ;
-(void)useImmutableObjectsFromMap:(id)arg0 intermediateMutableObjectTransferBlock:(id)arg1 ;


@end


#endif