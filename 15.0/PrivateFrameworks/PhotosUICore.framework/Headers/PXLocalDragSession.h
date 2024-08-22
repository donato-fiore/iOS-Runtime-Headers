// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXLOCALDRAGSESSION_H
#define PXLOCALDRAGSESSION_H

@class NSSet;
@protocol PXLocalDragSessionDelegate, UIDragSession, UIDropSession;

#import <Foundation/Foundation.h>

#import "PXVelocityNumberFilter.h"
#import "PXAssetCollectionActionPerformer.h"
#import "PXAssetReference.h"

@interface PXLocalDragSession : NSObject {
    PXVelocityNumberFilter *_horizontalVelocity;
    PXVelocityNumberFilter *_verticalVelocity;
}


@property (weak, nonatomic) NSObject<PXLocalDragSessionDelegate> *delegate; // ivar: _delegate
@property (weak, nonatomic) NSObject<UIDragSession> *dragSession; // ivar: _dragSession
@property (retain, nonatomic) NSSet *draggedAssetReferences; // ivar: _draggedAssetReferences
@property (retain, nonatomic) PXAssetCollectionActionPerformer *dropActionPerformer; // ivar: _dropActionPerformer
@property (nonatomic) NSUInteger dropOperation; // ivar: _dropOperation
@property (weak, nonatomic) NSObject<UIDropSession> *dropSession; // ivar: _dropSession
@property (retain, nonatomic) PXAssetReference *dropTargetAssetReference; // ivar: _dropTargetAssetReference
@property (retain, nonatomic) NSSet *excludedAssets; // ivar: _excludedAssets
@property (retain, nonatomic) PXAssetReference *hitAssetReference; // ivar: _hitAssetReference
@property (readonly, nonatomic) NSInteger identifier; // ivar: _identifier
@property (nonatomic) BOOL isDragSessionActive; // ivar: _isDragSessionActive
@property (nonatomic) BOOL isDropActiveInsideView; // ivar: _isDropActiveInsideView
@property (nonatomic) CGPoint scrollViewLocation; // ivar: _scrollViewLocation
@property (readonly, nonatomic) CGPoint velocity;


-(id)horizontalVelocity;
-(id)init;
-(id)verticalVelocity;
-(void)_noteChanged:(SEL)arg0 ;
-(void)updateWithDataSource:(id)arg0 ;


@end


#endif