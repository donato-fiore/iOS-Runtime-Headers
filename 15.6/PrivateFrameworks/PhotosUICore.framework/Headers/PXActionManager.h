// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXACTIONMANAGER_H
#define PXACTIONMANAGER_H

@class NSSet;
@protocol PXActionPerformerDelegate;

#import <Foundation/Foundation.h>


@interface PXActionManager : NSObject

@property (copy, nonatomic) NSSet *allowedActionTypes; // ivar: _allowedActionTypes
@property (weak, nonatomic) NSObject<PXActionPerformerDelegate> *performerDelegate; // ivar: _performerDelegate


+(id)_unlockDeviceHandler:(SEL)arg0 ;
+(void)setEnsureUnlockedDeviceHandler:(id)arg0 ;
-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(BOOL)canPerformActionType:(id)arg0 ;
-(BOOL)isActionTypeAllowed:(id)arg0 ;
-(BOOL)supportsActionType:(id)arg0 ;
-(BOOL)supportsContextMenu;
-(id)actionKeyCommands;
-(id)actionPerformerForActionType:(id)arg0 ;
-(id)activityForActionType:(id)arg0 ;
-(id)alertActionForActionType:(id)arg0 ;
-(id)alertActionViewControllerForActionType:(id)arg0 ;
-(id)barButtonItemForActionType:(id)arg0 ;
-(id)contextMenu;
-(id)localizedTitleForActionType:(id)arg0 useCase:(NSUInteger)arg1 ;
-(id)previewActionForActionType:(id)arg0 image:(id)arg1 ;
-(id)standardActionForActionType:(id)arg0 ;
-(id)systemImageNameForActionType:(id)arg0 ;


@end


#endif