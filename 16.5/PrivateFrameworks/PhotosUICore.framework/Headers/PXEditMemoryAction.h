// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXEDITMEMORYACTION_H
#define PXEDITMEMORYACTION_H

@class PHMemory, PHAsset, NSData;
@protocol NSFastEnumeration;


#import "PXPhotosAction.h"

@interface PXEditMemoryAction : PXPhotosAction

@property (readonly, nonatomic) PHMemory *memory; // ivar: _memory
@property (readonly, nonatomic) PHAsset *redoKeyAsset; // ivar: _redoKeyAsset
@property (readonly, nonatomic) NSData *redoPhotosGraphData; // ivar: _redoPhotosGraphData
@property (readonly, nonatomic) NSInteger redoStoryColorGradeKind; // ivar: _redoStoryColorGradeKind
@property (readonly, nonatomic) NSObject<NSFastEnumeration> *redoUserCuratedAssets; // ivar: _redoUserCuratedAssets
@property (readonly, nonatomic) PHAsset *undoKeyAsset; // ivar: _undoKeyAsset
@property (readonly, nonatomic) NSData *undoPhotosGraphData; // ivar: _undoPhotosGraphData
@property (readonly, nonatomic) NSInteger undoStoryColorGradeKind; // ivar: _undoStoryColorGradeKind
@property (readonly, nonatomic) NSObject<NSFastEnumeration> *undoUserCuratedAssets; // ivar: _undoUserCuratedAssets


-(id)actionIdentifier;
-(id)actionNameLocalizationKey;
-(id)initWithMemory:(id)arg0 photosGraphData:(id)arg1 storyColorGradeKind:(NSInteger)arg2 keyAsset:(id)arg3 userCuratedAssets:(id)arg4 ;
-(void)_changePhotosGraphData:(id)arg0 storyColorGradeKind:(NSInteger)arg1 keyAsset:(id)arg2 userCuratedAssets:(id)arg3 completionHandler:(id)arg4 ;
-(void)performAction:(id)arg0 ;
-(void)performUndo:(id)arg0 ;


@end


#endif