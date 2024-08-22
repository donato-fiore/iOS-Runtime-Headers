// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUPREVIEWACTIONCONTROLLER_H
#define PUPREVIEWACTIONCONTROLLER_H

@class NSArray, NSString, PXActionManager, UIViewController;
@protocol PUAssetActionPerformerDelegate, PUPreviewActionControllerDelegate;

#import <Foundation/Foundation.h>

#import "PUAssetActionPerformer.h"
#import "PUBrowsingSession.h"

@interface PUPreviewActionController : NSObject <PUAssetActionPerformerDelegate>

 {
    ? _delegateRespondsTo;
}


@property (retain, nonatomic, setter=_setActiveActionPerformer:) PUAssetActionPerformer *_activeActionPerformer; // ivar: __activeActionPerformer
@property (readonly, nonatomic) NSArray *actions;
@property (retain, nonatomic) PUBrowsingSession *browsingSession; // ivar: _browsingSession
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PUPreviewActionControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PXActionManager *photosUICoreActionManager; // ivar: _photosUICoreActionManager
@property (weak, nonatomic) UIViewController *presentingViewController; // ivar: _presentingViewController
@property (readonly) Class superclass;


-(BOOL)assetActionPerformer:(id)arg0 dismissViewController:(id)arg1 completionHandler:(id)arg2 ;
-(BOOL)assetActionPerformer:(id)arg0 presentViewController:(id)arg1 ;
-(NSUInteger)_confirmationFreeActionForPreferredAction:(NSUInteger)arg0 ;
-(id)_contextMenuActionWithTitle:(id)arg0 image:(id)arg1 attributes:(NSUInteger)arg2 actionHandler:(id)arg3 ;
-(id)contextMenuActionIfAvailableForActionType:(NSUInteger)arg0 ;
-(id)debugActions;
-(void)_executeActionPerformer:(id)arg0 ;
-(void)_notifiyDelegateOfAction:(id)arg0 ;
-(void)_performFavoriteAction:(BOOL)arg0 ;
-(void)_performSimpleActionWithType:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(void)_performTrashAction;
-(void)_promptTrashActionConfirmationForAsset:(id)arg0 withCompletionHandler:(id)arg1 ;


@end


#endif