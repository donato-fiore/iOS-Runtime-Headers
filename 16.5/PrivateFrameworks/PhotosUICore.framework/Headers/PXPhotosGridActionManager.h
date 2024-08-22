// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXPHOTOSGRIDACTIONMANAGER_H
#define PXPHOTOSGRIDACTIONMANAGER_H

@class NSDictionary, NSMapTable;


#import "PXActionManager.h"
#import "PXPhotosViewModel.h"

@interface PXPhotosGridActionManager : PXActionManager

@property (readonly, nonatomic) NSDictionary *actionPerformersByType; // ivar: _actionPerformersByType
@property (readonly, nonatomic) NSMapTable *actionTypeByBarButtonItem; // ivar: _actionTypeByBarButtonItem
@property (readonly, weak, nonatomic) PXPhotosViewModel *viewModel; // ivar: _viewModel


+(id)actionsWithActionPerformers;
-(BOOL)canPerformActionType:(id)arg0 ;
-(BOOL)supportsActionType:(id)arg0 ;
-(id)actionPerformerForActionType:(id)arg0 ;
-(id)activityForActionType:(id)arg0 ;
-(id)alertActionForActionType:(id)arg0 ;
-(id)barButtonItemForActionType:(id)arg0 ;
-(id)init;
-(id)initWithViewModel:(id)arg0 ;
-(id)localizedTitleForActionType:(id)arg0 useCase:(NSUInteger)arg1 ;
-(id)standardActionForActionType:(id)arg0 ;
-(void)_handleBarButtonItem:(id)arg0 ;


@end


#endif