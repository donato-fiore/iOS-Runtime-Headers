// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSMEDIACONTROLSVIEWCONTROLLER_H
#define CSMEDIACONTROLSVIEWCONTROLLER_H

@class MRUCoverSheetViewController, NSString, NSArray;
@protocol MRUCoverSheetViewControllerDelegate, CSAdjunctItemHosting;


#import "CSCoverSheetViewControllerBase.h"

@interface CSMediaControlsViewController : CSCoverSheetViewControllerBase <MRUCoverSheetViewControllerDelegate, CSAdjunctItemHosting>

 {
    MRUCoverSheetViewController *_mediaRemoteViewController;
    NSInteger _mediaRemoteLayout;
    CGSize _containerSize;
}


@property (nonatomic) CGFloat containerCornerRadius;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSArray *requiredVisualStyleCategories;
@property (readonly) Class superclass;


+(Class)viewClass;
-(BOOL)handleEvent:(id)arg0 ;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(CGFloat)_preferredMediaRemoteHeight;
-(NSInteger)presentationPriority;
-(NSInteger)presentationType;
-(id)init;
-(id)visualStylingProviderForCategory:(NSInteger)arg0 ;
-(struct CGRect )_suggestedFrameForMediaControls;
-(void)_layoutMediaControls;
-(void)_updatePersistentUpdatesEnabled:(BOOL)arg0 ;
-(void)_updatePreferredContentSize;
-(void)coverSheetViewController:(id)arg0 didReceiveInteractionEvent:(id)arg1 ;
// -(void)coverSheetViewController:(id)arg0 willChangeToLayout:(NSInteger)arg1 animations:(id)arg2 completion:(unk)arg3  ;
-(void)setContainerSize:(struct CGSize )arg0 ;
-(void)setVisualStylingProvider:(id)arg0 forCategory:(NSInteger)arg1 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif