// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSUIBUBBLETIPVIEWCONTROLLER_H
#define AMSUIBUBBLETIPVIEWCONTROLLER_H

@class NSString, AMSBinaryPromise;
@protocol AMSUICommonTextViewDelegate, AMSUIMessageViewController;


#import "AMSUIBaseMessageViewController.h"
#import "AMSUIBubbleTipInlineAnchorInfo.h"
#import "AMSUIBubbleTipAppearance.h"

@interface AMSUIBubbleTipViewController : AMSUIBaseMessageViewController <AMSUICommonTextViewDelegate, AMSUIMessageViewController>



@property CGPoint anchorPoint; // ivar: _anchorPoint
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger impressionsReportingFrequency;
@property (retain, nonatomic) AMSUIBubbleTipInlineAnchorInfo *inlineAnchorInfo; // ivar: _inlineAnchorInfo
@property (nonatomic) BOOL isSelfSizing; // ivar: _isSelfSizing
@property (retain, nonatomic) AMSBinaryPromise *loadPromise;
@property (retain, nonatomic) AMSUIBubbleTipAppearance *preferredAppearance; // ivar: _preferredAppearance
@property (retain, nonatomic) AMSUIBubbleTipAppearance *requestAppearance; // ivar: _requestAppearance
@property (nonatomic) BOOL shouldAutomaticallyReportMetrics;
@property (readonly) Class superclass;


-(NSInteger)_primaryImageRenderingMode;
-(NSUInteger)_messageStyle;
-(NSUInteger)directionForAMSUIPopoverArrowDirection:(NSUInteger)arg0 ;
-(id)_defaultPreferredImageSymbolConfiguration;
-(id)_effectiveImageSymbolConfiguration;
-(id)_messageLabelAttributes;
-(id)_messageLabelAttributesCompatibleWith:(id)arg0 ;
-(id)_titleLabelAttributes;
-(id)_titleLabelAttributesCompatibleWith:(id)arg0 ;
-(id)initWithRequest:(id)arg0 ;
-(id)initWithRequest:(id)arg0 bag:(id)arg1 account:(id)arg2 ;
-(struct CGSize )preferredContentSize;
-(void)_commitAppearance;
-(void)_endObservations;
-(void)_setDialogRequest:(id)arg0 ;
-(void)_startObservations;
-(void)_updateArrowProperties;
-(void)_updateSelfSizedContentSize;
-(void)ams_textViewDidUpdatePreferredContentSizeCategory:(id)arg0 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)setPreferredContentSize:(struct CGSize )arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif