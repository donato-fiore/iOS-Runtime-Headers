// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKFACECOLLECTION_H
#define NTKFACECOLLECTION_H

@class NSString, NSUUID, NSMutableArray, NSMutableDictionary, NSMapTable, NSHashTable;
@protocol NTKFaceObserver, NTKEnumeratableFaceCollection;

#import <Foundation/Foundation.h>

#import "NTKFace.h"

@interface NTKFaceCollection : NSObject <NTKFaceObserver, NTKEnumeratableFaceCollection>

 {
    NSString *_logIdentifier;
    NSUUID *_selectedUUID;
    NSMutableArray *_orderedUUIDs;
    NSMutableDictionary *_facesByUUID;
    NSMapTable *_UUIDsByFace;
    NSHashTable *_observers;
}


@property (readonly, nonatomic) NSString *collectionIdentifier; // ivar: _collectionIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *debugName; // ivar: _debugName
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUUID *deviceUUID; // ivar: _deviceUUID
@property (readonly, nonatomic, getter=hasLoaded) BOOL hasLoaded;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NTKFace *selectedFace;
@property (readonly, nonatomic) NSUInteger selectedFaceIndex;
@property (readonly) Class superclass;


-(BOOL)containsFace:(id)arg0 ;
-(NSUInteger)indexOfFace:(id)arg0 ;
-(NSUInteger)numberOfFaces;
-(id)UUIDsByFace;
-(id)_chooseNewSelectionBecauseSelectedUUIDWillBeRemovedAtIndex:(NSUInteger)arg0 ;
-(id)faceAtIndex:(NSUInteger)arg0 ;
-(id)faceForUUID:(id)arg0 ;
-(id)facesByUUID;
-(id)initWithCollectionIdentifier:(id)arg0 deviceUUID:(id)arg1 ;
-(id)logIdentifier;
-(id)observers;
-(id)orderedUUIDs;
-(id)selectedUUID;
-(id)uuidForFace:(id)arg0 ;
-(void)_addFace:(id)arg0 forUUID:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)_addFace:(id)arg0 forUUID:(id)arg1 atIndex:(NSUInteger)arg2 suppressingCallbackToObserver:(id)arg3 ;
-(void)_didAddFace:(id)arg0 withUUID:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)_didMoveFace:(id)arg0 withUUID:(id)arg1 toIndex:(NSUInteger)arg2 ;
-(void)_didRemoveFace:(id)arg0 withUUID:(id)arg1 ;
-(void)_didSelectFaceUUID:(id)arg0 suppressingCallback:(BOOL)arg1 ;
-(void)_notifyAddedFace:(id)arg0 atIndex:(NSUInteger)arg1 omitObserver:(id)arg2 ;
-(void)_notifyRemovedFace:(id)arg0 atIndex:(NSUInteger)arg1 omitObserver:(id)arg2 ;
-(void)_notifyReorderedFacesOmittingObserver:(id)arg0 ;
-(void)_notifySelectedFaceOmittingObserver:(id)arg0 ;
-(void)_removeFaceForUUID:(id)arg0 ;
-(void)_removeFaceForUUID:(id)arg0 suppressingCallbackToObserver:(id)arg1 ;
-(void)_selectFaceUUID:(id)arg0 notify:(BOOL)arg1 ;
-(void)_setContentWithFaces:(id)arg0 order:(id)arg1 selection:(id)arg2 ;
-(void)_setSelectedUUID:(id)arg0 notify:(BOOL)arg1 suppressingCallbackToObserver:(id)arg2 ;
-(void)_throwIfNotLoaded:(SEL)arg0 ;
-(void)_updateLogIdentifier;
-(void)_updateOrderedUUIDsFromReference:(id)arg0 andNotifyReordered:(BOOL)arg1 ;
-(void)_upgradeFace:(id)arg0 forUUID:(id)arg1 ;
-(void)addFace:(id)arg0 atIndex:(NSUInteger)arg1 suppressingCallbackToObserver:(id)arg2 ;
-(void)addObserver:(id)arg0 ;
-(void)appendFace:(id)arg0 suppressingCallbackToObserver:(id)arg1 ;
-(void)enumerateFaceNamesUsingBlock:(id)arg0 ;
-(void)enumerateFacesUsingBlock:(id)arg0 ;
-(void)enumerateFacesWithIndexesUsingBlock:(id)arg0 ;
-(void)moveFace:(id)arg0 toIndex:(NSUInteger)arg1 suppressingCallbackToObserver:(id)arg2 ;
-(void)removeFace:(id)arg0 suppressingCallbackToObserver:(id)arg1 ;
-(void)removeFaceAtIndex:(NSUInteger)arg0 suppressingCallbackToObserver:(id)arg1 ;
-(void)removeObserver:(id)arg0 ;
-(void)replaceFaceLocallyByCopy:(id)arg0 suppressingCallbackToObserver:(id)arg1 ;
-(void)reset;


@end


#endif