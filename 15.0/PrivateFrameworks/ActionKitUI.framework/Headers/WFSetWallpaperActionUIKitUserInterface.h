// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFSETWALLPAPERACTIONUIKITUSERINTERFACE_H
#define WFSETWALLPAPERACTIONUIKITUSERINTERFACE_H

@class WFEmbeddableActionUserInterface, NSString;
@protocol WFSetWallpaperActionUserInterface, SBSUIWallpaperPreviewViewControllerDelegate;



@interface WFSetWallpaperActionUIKitUserInterface : WFEmbeddableActionUserInterface <WFSetWallpaperActionUserInterface, SBSUIWallpaperPreviewViewControllerDelegate>



@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger locations; // ivar: _locations
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *userInterfaceType;


-(BOOL)isiPad;
-(void)cancelPresentationWithCompletionHandler:(id)arg0 ;
-(void)finishWithError:(id)arg0 ;
-(void)showPreviewWithInput:(id)arg0 key:(id)arg1 wallpaperLocation:(NSInteger)arg2 completionHandler:(id)arg3 ;
-(void)wallpaperPreviewViewControllerCancelButtonPressed:(id)arg0 ;
-(void)wallpaperPreviewViewControllerSetButtonPressed:(id)arg0 ;


@end


#endif