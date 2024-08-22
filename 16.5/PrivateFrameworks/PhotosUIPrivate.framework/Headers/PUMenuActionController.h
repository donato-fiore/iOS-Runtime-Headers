// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUMENUACTIONCONTROLLER_H
#define PUMENUACTIONCONTROLLER_H

@class NSArray, NSString, PXActionManager, UIViewController;
@protocol PUAssetActionPerformerDelegate, PUMenuActionControllerDelegate, PXRegionOfInterestProvider;

#import <Foundation/Foundation.h>

#import "PUAssetActionPerformer.h"
#import "PUBrowsingSession.h"

@interface PUMenuActionController : NSObject <PUAssetActionPerformerDelegate>

 {
    ? _delegateRespondsTo;
}


@property (retain, nonatomic, setter=_setActiveActionPerformer:) PUAssetActionPerformer *_activeActionPerformer; // ivar: __activeActionPerformer
@property (readonly, nonatomic) NSArray *actions;
@property (retain, nonatomic) PUBrowsingSession *browsingSession; // ivar: _browsingSession
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PUMenuActionControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PXActionManager *photosUICoreActionManager; // ivar: _photosUICoreActionManager
@property (weak, nonatomic) UIViewController *presentingViewController; // ivar: _presentingViewController
@property (weak, nonatomic) NSObject<PXRegionOfInterestProvider> *regionOfInterestProvider; // ivar: _regionOfInterestProvider
@property (readonly) Class superclass;


-(BOOL)assetActionPerformer:(id)arg0 dismissViewController:(id)arg1 completionHandler:(id)arg2 ;
-(BOOL)assetActionPerformer:(id)arg0 presentViewController:(id)arg1 ;
-(NSUInteger)_confirmationFreeActionForPreferredAction:(NSUInteger)arg0 ;
-(id)_contextMenuActionWithTitle:(id)arg0 image:(id)arg1 attributes:(NSUInteger)arg2 actionHandler:(id)arg3 ;
-(id)_copyMenuElement;
-(id)contextMenuActionIfAvailableForActionType:(NSUInteger)arg0 ;
-(id)debugActions;
-(id)undoManagerForAssetActionPerformer:(id)arg0 ;
-(void)_executeActionPerformer:(id)arg0 ;
-(void)_notifyDelegateOfAction:(id)arg0 ;
-(void)_performFavoriteAction:(BOOL)arg0 ;
-(void)_performSimpleActionWithType:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(void)_performTrashAction;
-(void)_promptTrashActionConfirmationForAsset:(id)arg0 withCompletionHandler:(id)arg1 ;


@end


#endif