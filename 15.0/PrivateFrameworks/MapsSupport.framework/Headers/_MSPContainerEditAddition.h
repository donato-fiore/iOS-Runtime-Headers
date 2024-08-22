// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MSPCONTAINEREDITADDITION_H
#define _MSPCONTAINEREDITADDITION_H

@class MSPContainerEdit, NSMapTable, NSArray, NSString, NSIndexSet;
@protocol MSPContainerEditAddition;



@interface _MSPContainerEditAddition : MSPContainerEdit <MSPContainerEditAddition>

 {
    NSMapTable *_identifiersAtopByIdentifier;
}


@property (readonly, nonatomic) NSArray *addedImmutableObjects; // ivar: _addedImmutableObjects
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSIndexSet *indexesOfAddedObjects; // ivar: _indexesOfAddedObjects
@property (readonly, nonatomic) NSArray *objects; // ivar: _objects
@property (readonly) Class superclass;


-(id)identifierForObjectAtopAddedImmutableObject:(id)arg0 ;
-(id)initWithObjects:(id)arg0 indexes:(id)arg1 identifiersAtop:(id)arg2 ;
-(void)useImmutableObjectsFromMap:(id)arg0 intermediateMutableObjectTransferBlock:(id)arg1 ;


@end


#endif