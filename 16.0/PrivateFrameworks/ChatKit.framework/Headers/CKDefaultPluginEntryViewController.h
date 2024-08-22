// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDEFAULTPLUGINENTRYVIEWCONTROLLER_H
#define CKDEFAULTPLUGINENTRYVIEWCONTROLLER_H

@class UIViewController, UIContextMenuInteraction, IMBalloonPluginDataSource, NSString, IMBalloonPlugin, UIViewController<CKTranscriptBalloonPluginController>;
@protocol UIContextMenuInteractionDelegate, CKPluginEntryViewController, CKPluginEntryViewControllerDelegate;


#import "CKBalloonView.h"

@interface CKDefaultPluginEntryViewController : UIViewController <UIContextMenuInteractionDelegate, CKPluginEntryViewController>



@property (retain, nonatomic) CKBalloonView *balloonView; // ivar: _balloonView
@property (retain, nonatomic) UIContextMenuInteraction *contextMenuInteraction; // ivar: _contextMenuInteraction
@property (retain, nonatomic) IMBalloonPluginDataSource *datasource; // ivar: _datasource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<CKPluginEntryViewControllerDelegate> *entryViewDelegate;
@property (readonly) NSUInteger hash;
@property (readonly) BOOL loadedContentView;
@property (retain, nonatomic) IMBalloonPlugin *plugin; // ivar: _plugin
@property (retain, nonatomic) UIViewController<CKTranscriptBalloonPluginController> *pluginBubbleViewController; // ivar: _pluginBubbleViewController
@property (readonly) Class superclass;
@property (readonly) BOOL wantsClearButton;
@property (readonly) BOOL wantsEdgeToEdgeLayout;


-(id)_copyActionForImageBalloonView;
-(id)_imageBalloon;
-(id)_saveActionForImageBalloonView;
-(id)_transcriptPluginBalloon;
-(id)contextMenuInteraction:(id)arg0 configurationForMenuAtLocation:(struct CGPoint )arg1 ;
-(id)initWithDataSource:(id)arg0 entryViewDelegate:(id)arg1 ;
-(id)initWithDataSource:(id)arg0 entryViewDelegate:(id)arg1 andPlugin:(id)arg2 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_loadBalloonView;
-(void)dealloc;
-(void)didFinishAnimatedBoundsChange;
-(void)loadView;
-(void)payloadWillClear;
-(void)payloadWillSend;
-(void)performHostAppResume;
-(void)performHostAppSuspend;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif