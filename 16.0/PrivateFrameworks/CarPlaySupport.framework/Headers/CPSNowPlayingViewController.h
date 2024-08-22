// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPSNOWPLAYINGVIEWCONTROLLER_H
#define CPSNOWPLAYINGVIEWCONTROLLER_H

@class CPUINowPlayingViewController, CPTemplate, NSString, NAFuture;
@protocol CPSButtonDelegate, UIGestureRecognizerDelegate, CPNowPlayingTemplateProviding, CPBaseTemplateProviding, CPSBaseTemplateViewController, CPTemplateDelegate, CPSTemplateViewControllerDelegate;


#import "CPSAudioPlaybackManager.h"

@interface CPSNowPlayingViewController : CPUINowPlayingViewController <CPSButtonDelegate, UIGestureRecognizerDelegate, CPNowPlayingTemplateProviding, CPBaseTemplateProviding, CPSBaseTemplateViewController>



@property (retain, nonatomic) CPTemplate *associatedTemplate; // ivar: _associatedTemplate
@property (readonly, nonatomic) CPSAudioPlaybackManager *audioPlaybackManager; // ivar: _audioPlaybackManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didDisappear; // ivar: _didDisappear
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isPopping; // ivar: _isPopping
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<CPTemplateDelegate> *templateDelegate; // ivar: _templateDelegate
@property (retain, nonatomic) NAFuture *templateProviderFuture; // ivar: _templateProviderFuture
@property (weak, nonatomic) NSObject<CPSTemplateViewControllerDelegate> *viewControllerDelegate; // ivar: _viewControllerDelegate


-(id)initWithNowPlayingTemplate:(id)arg0 templateDelegate:(id)arg1 environment:(id)arg2 ;
-(id)nowPlayingTemplate;
-(void)_cleanup;
-(void)_cps_viewControllerWasPopped;
-(void)didSelectButton:(id)arg0 ;
-(void)invalidate;
-(void)setControl:(id)arg0 enabled:(BOOL)arg1 ;
-(void)setControl:(id)arg0 selected:(BOOL)arg1 ;
-(void)updateNowPlayingTemplate:(id)arg0 withProxyDelegate:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif