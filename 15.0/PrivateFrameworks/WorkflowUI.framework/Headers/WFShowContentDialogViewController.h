// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFSHOWCONTENTDIALOGVIEWCONTROLLER_H
#define WFSHOWCONTENTDIALOGVIEWCONTROLLER_H

@class WFContentCollection, NSString;
@protocol WFCompactContentPreviewViewControllerDelegate, QLPreviewControllerDelegate;


#import "WFCompactDialogViewController.h"
#import "WFCompactHighlightedView.h"
#import "WFCompactContentPreviewViewController.h"

@interface WFShowContentDialogViewController : WFCompactDialogViewController <WFCompactContentPreviewViewControllerDelegate, QLPreviewControllerDelegate>



@property (retain, nonatomic) WFContentCollection *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) WFCompactHighlightedView *highlightView; // ivar: _highlightView
@property (copy, nonatomic) id *installThumbnailHandler; // ivar: _installThumbnailHandler
@property (retain, nonatomic) WFCompactContentPreviewViewController *previewViewController; // ivar: _previewViewController
@property (readonly) Class superclass;


-(CGFloat)contentHeightForWidth:(CGFloat)arg0 withMaximumVisibleHeight:(CGFloat)arg1 ;
-(CGFloat)contentHeightWithPreferredHeight:(CGFloat)arg0 maxVisibleHeight:(CGFloat)arg1 ;
-(CGFloat)targetHeightForAnimatingPreviewViewController:(id)arg0 toProposedHeight:(CGFloat)arg1 ;
-(id)previewController:(id)arg0 transitionViewForPreviewItem:(id)arg1 ;
-(id)sourceViewForQuickLook;
-(struct CGRect )previewController:(id)arg0 frameForPreviewItem:(id)arg1 inSourceView:(*id)arg2 ;
-(void)handleTapGesture:(id)arg0 ;
-(void)loadView;
-(void)prepareForPresentationWithCompletionHandler:(id)arg0 ;
-(void)presentFullScreenPreview;
-(void)previewViewControllerDidInvalidateSize:(id)arg0 ;
-(void)updateActions;
-(void)viewDidAppear:(BOOL)arg0 ;


@end


#endif