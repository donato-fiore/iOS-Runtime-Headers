// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MFMESSAGEHEADERVIEWBLOCK_H
#define MFMESSAGEHEADERVIEWBLOCK_H

@class UIView, NSString, NSLayoutConstraint, UILayoutGuide;
@protocol MFReusable, EFCancelable;


#import "MFMessageDisplayMetrics.h"
#import "SeparatorLayer.h"
#import "MessageHeaderViewModel.h"

@interface MFMessageHeaderViewBlock : UIView <MFReusable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) MFMessageDisplayMetrics *displayMetrics; // ivar: _displayMetrics
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL interactivelyResizing; // ivar: _interactivelyResizing
@property (retain, nonatomic) NSObject<EFCancelable> *observableCancelable; // ivar: _observableCancelable
@property (retain, nonatomic) SeparatorLayer *separator; // ivar: _separator
@property (nonatomic) BOOL separatorDrawsFlushWithLeadingEdge; // ivar: _separatorDrawsFlushWithLeadingEdge
@property (nonatomic) BOOL separatorDrawsFlushWithTrailingEdge; // ivar: _separatorDrawsFlushWithTrailingEdge
@property (nonatomic) BOOL separatorIsHidden; // ivar: _separatorIsHidden
@property (retain, nonatomic) NSLayoutConstraint *separatorLeading; // ivar: _separatorLeading
@property (retain, nonatomic) NSLayoutConstraint *separatorTrailing; // ivar: _separatorTrailing
@property (readonly) Class superclass;
@property (retain, nonatomic) UILayoutGuide *trailingAccessoryViewLayoutGuide; // ivar: _trailingAccessoryViewLayoutGuide
@property (retain, nonatomic) NSLayoutConstraint *trailingAccessoryViewLayoutGuideTrailing; // ivar: _trailingAccessoryViewLayoutGuideTrailing
@property (retain, nonatomic) NSLayoutConstraint *trailingAccessoryViewLayoutGuideWidth; // ivar: _trailingAccessoryViewLayoutGuideWidth
@property (nonatomic) BOOL usingLargeTextLayout; // ivar: _usingLargeTextLayout
@property (retain, nonatomic) MessageHeaderViewModel *viewModel; // ivar: _viewModel


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)createPrimaryViews;
-(void)displayMessageUsingViewModel:(id)arg0 ;
-(void)initializePrimaryLayoutConstraints;
-(void)prepareForReuse;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateConstraints;


@end


#endif