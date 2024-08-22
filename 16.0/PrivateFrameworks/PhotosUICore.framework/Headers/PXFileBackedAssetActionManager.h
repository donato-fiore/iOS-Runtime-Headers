// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXFILEBACKEDASSETACTIONMANAGER_H
#define PXFILEBACKEDASSETACTIONMANAGER_H

@class NSMutableDictionary;


#import "PXAssetActionManager.h"

@interface PXFileBackedAssetActionManager : PXAssetActionManager

@property (readonly, nonatomic) NSMutableDictionary *performerClassByType; // ivar: _performerClassByType


-(BOOL)canPerformActionType:(id)arg0 ;
-(BOOL)supportsActionType:(id)arg0 ;
-(id)_selectionSnapshotForPerformerClass:(Class)arg0 ;
-(id)actionPerformerForActionType:(id)arg0 ;
-(id)initWithSelectionManager:(id)arg0 ;


@end


#endif