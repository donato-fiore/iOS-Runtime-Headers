// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRKORDEREDONETOMANYKVOACCUMULATOR_H
#define CRKORDEREDONETOMANYKVOACCUMULATOR_H

@class NSMapTable, NSMutableArray, NSString;
@protocol CRKOrderedOneToManyKVOAccumulatorDelegate;

#import <Foundation/Foundation.h>

#import "CRKPointerSet.h"

@interface CRKOrderedOneToManyKVOAccumulator : NSObject {
    CRKPointerSet *mInsertedObjects;
    CRKPointerSet *mReplacementObjects;
    NSMapTable *mIndexForDeletedObject;
    NSMapTable *mOriginalIndexOfMovedObject;
    NSMutableArray *mObservedShadow;
    NSInteger mInitialArrayCount;
}


@property (weak, nonatomic) NSObject<CRKOrderedOneToManyKVOAccumulatorDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) BOOL hasChanges;
@property (copy, nonatomic) NSString *observedKeyPath; // ivar: _observedKeyPath
@property (weak, nonatomic) NSObject *observedObject; // ivar: _observedObject


-(BOOL)_integrateChange:(id)arg0 toArray:(id)arg1 ;
-(NSUInteger)_prestateIndexForImmediateIndex:(NSUInteger)arg0 ;
-(id)_resultsToArriveAtArray:(id)arg0 ;
-(id)initWithObject:(id)arg0 keyPath:(id)arg1 ;
-(void)_drain;
-(void)_reset;
-(void)_validateArrayChangeToFinalCount:(NSInteger)arg0 accumulatedResults:(id)arg1 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif