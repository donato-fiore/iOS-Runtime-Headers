// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SFADAPTIVEPREVIEWVIEWCONTROLLER_H
#define _SFADAPTIVEPREVIEWVIEWCONTROLLER_H

@class UIViewController, NSURL, _WKActivatedElementInfo, NSString, NSArray;
@protocol _SFLinkPreviewHeaderDelegate, _SFAdaptivePreviewViewControllerDelegate;


#import "_SFURLTextPreviewViewController.h"

@interface _SFAdaptivePreviewViewController : UIViewController <_SFLinkPreviewHeaderDelegate>

 {
    _SFURLTextPreviewViewController *_textPreviewViewController;
    UIViewController *_linkPreviewViewController;
}


@property (retain, nonatomic) NSURL *URL; // ivar: _URL
@property (retain, nonatomic) _WKActivatedElementInfo *activatedElementInfo; // ivar: _activatedElementInfo
@property (readonly, nonatomic) UIViewController *contentViewController;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_SFAdaptivePreviewViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *linkActions; // ivar: _linkActions
@property (nonatomic) CGSize preferredDocumentContentSize; // ivar: _preferredDocumentContentSize
@property (readonly, nonatomic) BOOL showingLinkPreview;
@property (readonly) Class superclass;


-(BOOL)_allowsUserInteractionWhenPreviewedInContextMenu;
-(id)initWithURL:(id)arg0 ;
-(void)_addViewFromViewController:(id)arg0 ;
-(void)_removeViewController:(id)arg0 ;
-(void)_setUpLinkPreviewViewControllerIfNeeded;
-(void)_setUpTextPreviewViewControllerIfNeeded;
-(void)_updatePreferredContentSize;
-(void)linkPreviewHeader:(id)arg0 didEnableLinkPreview:(BOOL)arg1 ;
-(void)linkPreviewHeaderBoundsDidChange:(id)arg0 ;
-(void)setLinkPreviewEnabled:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif