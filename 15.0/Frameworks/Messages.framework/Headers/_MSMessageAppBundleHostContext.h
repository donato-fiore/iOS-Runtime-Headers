// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MSMESSAGEAPPBUNDLEHOSTCONTEXT_H
#define _MSMESSAGEAPPBUNDLEHOSTCONTEXT_H

@class NSString;
@protocol _MSMessageComposeHostImplProtocol, _MSMessageComposeExtensionProtocol, _MSMessageComposeHostProtocol;

#import <Foundation/Foundation.h>


@interface _MSMessageAppBundleHostContext : NSObject <_MSMessageComposeHostImplProtocol>



@property (retain, nonatomic) NSObject<_MSMessageComposeExtensionProtocol> *appContext; // ivar: _appContext
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_MSMessageComposeHostProtocol> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithAppContext:(id)arg0 ;
-(void)_contentDidLoad;
-(void)_dismiss;
-(void)_dismissAndPresentPhotosApp;
-(void)_dragMediaItemCanceled;
-(void)_dragMediaItemMoved:(id)arg0 frameInRemoteView:(struct CGRect )arg1 rotation:(CGFloat)arg2 scale:(CGFloat)arg3 completionHandler:(id)arg4 ;
-(void)_openURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)_presentAlertWithTitle:(id)arg0 message:(id)arg1 buttonTitle:(id)arg2 completion:(id)arg3 ;
-(void)_presentAlertWithTitle:(id)arg0 message:(id)arg1 buttonTitle:(id)arg2 destructiveButtonTitle:(id)arg3 completion:(id)arg4 ;
-(void)_remoteViewDidBecomeReadyForDisplay;
-(void)_removeAssetArchiveWithIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)_requestPresentationStyle:(NSUInteger)arg0 ;
-(void)_requestResize;
-(void)_stageAppItem:(id)arg0 skipShelf:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)_stageAssetArchive:(id)arg0 skipShelf:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)_stageMediaItem:(id)arg0 skipShelf:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)_stageRichLink:(id)arg0 skipShelf:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)_startDragMediaItem:(id)arg0 frameInRemoteView:(struct CGRect )arg1 fence:(id)arg2 completionHandler:(id)arg3 ;
-(void)_updateSnapshotForNextLaunch:(id)arg0 ;


@end


#endif