// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSUIBUBBLETIPVIEWCONTROLLER_H
#define AMSUIBUBBLETIPVIEWCONTROLLER_H

@class UIViewController, NSString, AMSBinaryPromise, UIImage, AMSDialogRequest;
@protocol AMSUICommonTextViewDelegate, AMSUIMessageViewController, AMSUIMessageViewControllerDelegate;


#import "AMSUIBubbleTipInlineAnchorInfo.h"
#import "AMSUIBubbleTipAppearance.h"

@interface AMSUIBubbleTipViewController : UIViewController <AMSUICommonTextViewDelegate, AMSUIMessageViewController>



@property CGPoint anchorPoint; // ivar: _anchorPoint
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AMSUIMessageViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didEnqueueMetrics; // ivar: _didEnqueueMetrics
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) AMSUIBubbleTipInlineAnchorInfo *inlineAnchorInfo; // ivar: _inlineAnchorInfo
@property (nonatomic) BOOL isLoadingImage; // ivar: _isLoadingImage
@property (nonatomic) BOOL isSelfSizing; // ivar: _isSelfSizing
@property (retain, nonatomic) AMSBinaryPromise *loadPromise; // ivar: _loadPromise
@property (retain, nonatomic) UIImage *loadedImage; // ivar: _loadedImage
@property (retain, nonatomic) AMSUIBubbleTipAppearance *preferredAppearance; // ivar: _preferredAppearance
@property (retain, nonatomic) AMSDialogRequest *request; // ivar: _request
@property (retain, nonatomic) AMSUIBubbleTipAppearance *requestAppearance; // ivar: _requestAppearance
@property (nonatomic) BOOL shouldAutomaticallyReportMetrics; // ivar: _shouldAutomaticallyReportMetrics
@property (readonly) Class superclass;


-(NSInteger)_primaryImageRenderingMode;
-(NSUInteger)_messageViewStyle;
-(NSUInteger)directionForAMSUIPopoverArrowDirection:(NSUInteger)arg0 ;
-(id)_messageLabelAttributes;
-(id)_titleLabelAttributes;
-(id)initWithRequest:(id)arg0 ;
-(id)messageView;
-(struct CGSize )preferredContentSize;
-(void)_commitAppearance;
-(void)_didTapActionButton:(id)arg0 ;
-(void)_endObservations;
-(void)_notifyMetricsFields:(id)arg0 ;
-(void)_preloadImageIfNeeded;
-(void)_setDialogRequest:(id)arg0 ;
-(void)_setImageWithURL:(id)arg0 ;
-(void)_startObservations;
-(void)_updateArrowProperties;
-(void)_updateSelfSizedContentSize;
-(void)_updateTextWithAttributes;
-(void)ams_textViewDidUpdatePreferredContentSizeCategory:(id)arg0 ;
-(void)dealloc;
-(void)enqueueImpressionMetrics;
-(void)loadView;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)setPreferredContentSize:(struct CGSize )arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif