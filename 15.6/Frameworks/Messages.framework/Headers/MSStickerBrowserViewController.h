// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MSSTICKERBROWSERVIEWCONTROLLER_H
#define MSSTICKERBROWSERVIEWCONTROLLER_H

@class UIViewController, NSString;
@protocol MSRootViewControllerProtocol, MSStickerBrowserViewDataSource;


#import "MSStickerBrowserView.h"

@interface MSStickerBrowserViewController : UIViewController <MSRootViewControllerProtocol, MSStickerBrowserViewDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGRect initialFrameBeforeAppearance; // ivar: _initialFrameBeforeAppearance
@property (retain, nonatomic) MSStickerBrowserView *stickerBrowserView; // ivar: _stickerBrowserView
@property (readonly, nonatomic) NSInteger stickerSize; // ivar: _stickerSize
@property (readonly) Class superclass;
@property (nonatomic) BOOL viewHasAppeared; // ivar: _viewHasAppeared


-(NSInteger)numberOfStickersInStickerBrowserView:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithStickerSize:(NSInteger)arg0 ;
-(id)stickerBrowserView:(id)arg0 stickerAtIndex:(NSInteger)arg1 ;
-(void)_setContentOverlayInsets:(struct UIEdgeInsets )arg0 ;
-(void)didTransitionToPresentationStyle:(NSUInteger)arg0 ;
-(void)disableUserInteraction;
-(void)enableUserInteraction;
-(void)loadView;
-(void)updateSnapshotWithCompletionBlock:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)willTransitionToPresentationStyle:(NSUInteger)arg0 ;


@end


#endif