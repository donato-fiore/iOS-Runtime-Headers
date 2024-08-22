// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIKEYBOARDMEDIASERVICEREMOTEVIEWCONTROLLER_H
#define UIKEYBOARDMEDIASERVICEREMOTEVIEWCONTROLLER_H

@class UIRemoteViewController, NSString;
@protocol UIKeyboardMediaHostProtocol, UIKeyboardMediaServiceRemoteViewControllerDelegate;



@interface UIKeyboardMediaServiceRemoteViewController : UIRemoteViewController <UIKeyboardMediaHostProtocol>



@property (nonatomic, getter=_isShownInline, setter=_setShownInline:) BOOL _shownInline; // ivar: _shownInline
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<UIKeyboardMediaServiceRemoteViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)__shouldHostRemoteTextEffectsWindow;
+(id)exportedInterface;
+(id)requestCardViewControllerWithConnectionHandler:(id)arg0 ;
+(id)requestInlineViewControllerWithConnectionHandler:(id)arg0 ;
+(id)serviceViewControllerInterface;
-(BOOL)__shouldRemoteViewControllerFenceGeometryChange:(struct ? *)arg0 forAncestor:(id)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)dismissCard;
-(void)draggedStickerToPoint:(struct CGPoint )arg0 ;
-(void)pasteImageAtFileHandle:(id)arg0 ;
-(void)presentCard;
-(void)requestInsertionPointCompletion:(id)arg0 ;
-(void)stageStickerWithFileHandle:(id)arg0 url:(id)arg1 accessibilityLabel:(id)arg2 ;
-(void)viewServiceDidTerminateWithError:(id)arg0 ;


@end


#endif