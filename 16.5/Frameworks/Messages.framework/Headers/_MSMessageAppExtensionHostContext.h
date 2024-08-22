// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MSMESSAGEAPPEXTENSIONHOSTCONTEXT_H
#define _MSMESSAGEAPPEXTENSIONHOSTCONTEXT_H

@class NSExtensionContext, NSString;
@protocol _MSMessageComposeHostImplProtocol, _MSMessageComposeHostProtocol;



@interface _MSMessageAppExtensionHostContext : NSExtensionContext <_MSMessageComposeHostImplProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_MSMessageComposeHostProtocol> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_allowedItemPayloadClasses;
+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
+(id)_extensionContextHostProtocolAllowedClassesForItems;
-(void)_contentDidLoad;
-(void)_dismiss;
-(void)_dismissAndPresentPhotosApp;
-(void)_dragMediaItemCanceled;
-(void)_dragMediaItemMoved:(id)arg0 frameInRemoteView:(struct CGRect )arg1 rotation:(CGFloat)arg2 scale:(CGFloat)arg3 completionHandler:(id)arg4 ;
-(void)_openURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)_presentAlertSheetWith:(id)arg0 styles:(id)arg1 completion:(id)arg2 ;
-(void)_presentAlertWithTitle:(id)arg0 message:(id)arg1 buttonTitle:(id)arg2 completion:(id)arg3 ;
-(void)_presentAlertWithTitle:(id)arg0 message:(id)arg1 buttonTitle:(id)arg2 destructiveButtonTitle:(id)arg3 completion:(id)arg4 ;
-(void)_remoteViewDidBecomeReadyForDisplay;
-(void)_removeAssetArchiveWithIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)_requestHostSceneIdentifierWithCompletion:(id)arg0 ;
-(void)_requestPresentationStyle:(NSUInteger)arg0 ;
-(void)_requestResize;
-(void)_stageAppItem:(id)arg0 skipShelf:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)_stageAssetArchive:(id)arg0 skipShelf:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)_stageMediaItem:(id)arg0 skipShelf:(BOOL)arg1 forceStage:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)_stageRichLink:(id)arg0 skipShelf:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)_startDragMediaItem:(id)arg0 frameInRemoteView:(struct CGRect )arg1 fence:(id)arg2 completionHandler:(id)arg3 ;
-(void)_updateSnapshotForNextLaunch:(id)arg0 ;


@end


#endif