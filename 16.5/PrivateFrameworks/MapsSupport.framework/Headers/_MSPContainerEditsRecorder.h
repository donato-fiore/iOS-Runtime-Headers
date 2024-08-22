// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MSPCONTAINEREDITSRECORDER_H
#define _MSPCONTAINEREDITSRECORDER_H

@class NSMutableArray, NSMutableSet, NSArray;

#import <Foundation/Foundation.h>


@interface _MSPContainerEditsRecorder : NSObject {
    NSMutableArray *_originalMutableArray;
    NSMutableArray *_orderedEdits;
    NSMutableSet *_updatedObjects;
}


@property (readonly, nonatomic) NSArray *orderedEdits;
@property (readonly, nonatomic) NSMutableArray *recordableMutableArray;


-(NSUInteger)countOfEditableObjects;
-(id)editableObjectsAtIndexes:(id)arg0 ;
-(id)initWithMutableArray:(id)arg0 ;
-(id)objectInEditableObjectsAtIndex:(NSUInteger)arg0 ;
-(void)_editDetectorDidDetectUpdateForObject:(id)arg0 ;
-(void)_mutableObjectContentDidUpdate:(id)arg0 ;
-(void)getEditableObjects:(*id)arg0 range:(struct _NSRange )arg1 ;
-(void)insertEditableObjects:(id)arg0 atIndexes:(id)arg1 ;
-(void)insertObject:(id)arg0 inEditableObjectsAtIndex:(NSUInteger)arg1 ;
-(void)removeEditableObjectsAtIndexes:(id)arg0 ;
-(void)removeObjectFromEditableObjectsAtIndex:(NSUInteger)arg0 ;
-(void)replaceEditableObjectsAtIndexes:(id)arg0 withEditableObjects:(id)arg1 ;
-(void)replaceObjectInEditableObjectsAtIndex:(NSUInteger)arg0 withObject:(id)arg1 ;
-(void)useImmutableObjectsForEditsFromMap:(id)arg0 intermediateMutableObjectTransferBlock:(id)arg1 ;


@end


#endif