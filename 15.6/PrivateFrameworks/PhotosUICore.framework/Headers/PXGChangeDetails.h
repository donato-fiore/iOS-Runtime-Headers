// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXGCHANGEDETAILS_H
#define PXGCHANGEDETAILS_H

@class NSIndexSet, NSString;
@protocol NSCopying, PXGDiagnosticsProvider;

#import <Foundation/Foundation.h>

#import "PXArrayChangeDetails.h"
#import "PXGChangeDetails.h"

@interface PXGChangeDetails : NSObject <NSCopying, PXGDiagnosticsProvider>

 {
    *unsigned int _nextSpriteIndexByPreviousSpriteIndex;
    NSInteger _nextSpriteIndexByPreviousSpriteIndexCapacity;
    NSIndexSet *_spriteIndexesThatWereRemoved;
    NSIndexSet *_spriteIndexesThatWereInserted;
    NSIndexSet *_spriteIndexesThatWereModified;
    BOOL _hasMoves;
    char * _tempBuffer;
    NSInteger _tempBufferCapacity;
    PXArrayChangeDetails *_cachedArrayChangeDetails;
}


@property (readonly, nonatomic) PXArrayChangeDetails *arrayChangeDetails;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *diagnosticDescription;
@property (readonly, nonatomic) BOOL hasAnyInsertionsRemovalsOrMoves;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSIndexSet *insertedSpriteIndexes;
@property (readonly, nonatomic) PXGChangeDetails *inverse;
@property (nonatomic) NSInteger layoutVersionAfterChange; // ivar: _layoutVersionAfterChange
@property (nonatomic) NSInteger layoutVersionBeforeChange; // ivar: _layoutVersionBeforeChange
@property (readonly, nonatomic) NSIndexSet *modifiedSpriteIndexes;
@property (readonly, nonatomic) unsigned int numberOfSpritesAfterChange; // ivar: _numberOfSpritesAfterChange
@property (readonly, nonatomic) unsigned int numberOfSpritesBeforeChange; // ivar: _numberOfSpritesBeforeChange
@property (readonly, nonatomic) NSIndexSet *removedSpriteIndexes;
@property (readonly, nonatomic) *unsigned int spriteIndexAfterChangeBySpriteIndexBeforeChange;
@property (readonly) Class superclass;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)indexSetAfterApplyingChangeDetails:(id)arg0 ;
-(struct _PXGSpriteIndexRange )replaceRemovalsWithMovesToEndForIndexes:(id)arg0 ;
-(struct _PXGSpriteIndexRange )splitIndexesIntoMovesToEndAndReinsertions:(id)arg0 ;
-(void)_invalidateCachedArrayChangeDetails;
-(void)_invalidateLayoutVersions;
-(void)_resizeStorageIfNeeded;
-(void)applySpriteTransferMap:(*unsigned int)arg0 ;
// -(void)applyToArray:(*void)arg0 elementSize:(NSUInteger)arg1 countAfterChanges:(NSUInteger)arg2 insertionHandler:(id)arg3 modifiedHandler:(unk)arg4  ;
-(void)applyToDictionary:(id)arg0 removalHandler:(id)arg1 ;
-(void)applyToSpriteIndexes:(*unsigned int)arg0 atIndexes:(id)arg1 ;
-(void)configureWithNumberOfSpritesAfterChange:(unsigned int)arg0 changeDetails:(id)arg1 ;
-(void)dealloc;
-(void)increaseNumberOfSpritesBy:(unsigned int)arg0 ;
-(void)removeSpritesAtIndexes:(id)arg0 ;


@end


#endif