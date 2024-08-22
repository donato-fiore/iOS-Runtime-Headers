// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TLKTEXTAREAVIEW_H
#define TLKTEXTAREAVIEW_H

@class UIView, NSMutableArray, NSString, NUIContainerStackView, NSArray;
@protocol NUIContainerViewDelegate, TLKTextAreaViewTesting, TLKTextAreaViewDelegate;


#import "TLKView.h"
#import "TLKEmbossedLabel.h"
#import "TLKRichText.h"
#import "TLKStackView.h"
#import "TLKTextButton.h"
#import "TLKRichTextField.h"
#import "TLKLabel.h"
#import "TLKImage.h"
#import "TLKTitleContainerView.h"

@interface TLKTextAreaView : TLKView <NUIContainerViewDelegate, TLKTextAreaViewTesting>



@property (retain, nonatomic) UIView *accessoryView; // ivar: _accessoryView
@property (retain, nonatomic) TLKEmbossedLabel *bannerBadgeView; // ivar: _bannerBadgeView
@property (retain, nonatomic) TLKRichText *bannerText; // ivar: _bannerText
@property (retain, nonatomic) NSMutableArray *bulletFields; // ivar: _bulletFields
@property (weak) NSObject<TLKTextAreaViewDelegate> *buttonDelegate; // ivar: _buttonDelegate
@property (retain, nonatomic) TLKStackView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NUIContainerStackView *detailFieldAndFootnoteStackView; // ivar: _detailFieldAndFootnoteStackView
@property (retain, nonatomic) NUIContainerStackView *detailFieldFootnoteAndAccessoryStackView; // ivar: _detailFieldFootnoteAndAccessoryStackView
@property (retain, nonatomic) NUIContainerStackView *detailFieldStackView; // ivar: _detailFieldStackView
@property (retain, nonatomic) NSArray *detailTexts; // ivar: _detailTexts
@property (retain, nonatomic) NSMutableArray *detailsFields; // ivar: _detailsFields
@property (nonatomic) BOOL disableAllObservers; // ivar: _disableAllObservers
@property (retain, nonatomic) TLKRichText *footnote; // ivar: _footnote
@property (retain, nonatomic) TLKTextButton *footnoteButton; // ivar: _footnoteButton
@property (retain, nonatomic) NSString *footnoteButtonText; // ivar: _footnoteButtonText
@property (retain, nonatomic) NUIContainerStackView *footnoteContainer; // ivar: _footnoteContainer
@property (retain, nonatomic) TLKRichTextField *footnoteLabel; // ivar: _footnoteLabel
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) TLKLabel *hyphenField; // ivar: _hyphenField
@property (nonatomic) BOOL isAccessoryViewBottomAligned; // ivar: _isAccessoryViewBottomAligned
@property (nonatomic) BOOL isHorizontallyCompressed; // ivar: _isHorizontallyCompressed
@property (retain, nonatomic) TLKRichText *secondaryTitle; // ivar: _secondaryTitle
@property (retain, nonatomic) TLKImage *secondaryTitleImage; // ivar: _secondaryTitleImage
@property (nonatomic) BOOL secondaryTitleIsDetached; // ivar: _secondaryTitleIsDetached
@property (readonly) Class superclass;
@property (retain, nonatomic) TLKRichText *title; // ivar: _title
@property (retain, nonatomic) TLKTitleContainerView *titleContainer; // ivar: _titleContainer
@property (nonatomic) BOOL truncateTitleMiddle; // ivar: _truncateTitleMiddle
@property (nonatomic) BOOL useCompactMode; // ivar: _useCompactMode


+(id)footNoteLabelFont;
-(id)detailsStrings;
-(id)detailsViews;
-(id)setupContentView;
-(id)viewForFirstBaselineLayout;
-(id)viewForLastBaselineLayout;
-(void)insertDetailsStackViewIfNeeded;
-(void)internalTextFieldsInBatchUpdate:(BOOL)arg0 ;
-(void)performBatchUpdates:(id)arg0 ;
-(void)propertiesDidChange;
-(void)updateBannerBadge;
-(void)updateDetailFieldStackViewVisibility;
-(void)updateDetails;
-(void)updateFootnote;


@end


#endif