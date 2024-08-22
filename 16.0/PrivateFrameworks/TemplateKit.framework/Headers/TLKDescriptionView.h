// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TLKDESCRIPTIONVIEW_H
#define TLKDESCRIPTIONVIEW_H

@class NSString, UIView, NUIContainerBoxView, UIBezierPath;
@protocol NUIContainerViewDelegate, TLKDescriptionViewDelegate;


#import "TLKView.h"
#import "TLKTextView.h"
#import "TLKTextButton.h"
#import "TLKStackView.h"
#import "TLKImage.h"
#import "TLKImageView.h"
#import "TLKMultilineText.h"
#import "TLKLabel.h"

@interface TLKDescriptionView : TLKView <NUIContainerViewDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<TLKDescriptionViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) TLKTextView *detailsTextView; // ivar: _detailsTextView
@property (retain, nonatomic) TLKTextButton *footnoteButton; // ivar: _footnoteButton
@property (retain, nonatomic) UIView *footnoteButtonStackDummyView; // ivar: _footnoteButtonStackDummyView
@property (retain, nonatomic) TLKStackView *footnoteButtonStackView; // ivar: _footnoteButtonStackView
@property (retain, nonatomic) NSString *footnoteButtonText; // ivar: _footnoteButtonText
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) TLKImage *image; // ivar: _image
@property (retain, nonatomic) NUIContainerBoxView *imageAndDescriptionBoxView; // ivar: _imageAndDescriptionBoxView
@property (retain, nonatomic) TLKImageView *imageView; // ivar: _imageView
@property (retain, nonatomic) UIBezierPath *imageViewExclusionPath; // ivar: _imageViewExclusionPath
@property (retain, nonatomic) TLKTextButton *moreButton; // ivar: _moreButton
@property (retain, nonatomic) UIBezierPath *moreButtonExclusionPath; // ivar: _moreButtonExclusionPath
@property (retain, nonatomic) NSString *moreButtonText; // ivar: _moreButtonText
@property (retain, nonatomic) TLKStackView *stackView; // ivar: _stackView
@property (readonly) Class superclass;
@property (retain, nonatomic) TLKMultilineText *text; // ivar: _text
@property (retain, nonatomic) TLKMultilineText *title; // ivar: _title
@property (retain, nonatomic) TLKLabel *titleLabel; // ivar: _titleLabel
@property (retain, nonatomic) TLKTextButton *trailingFootnoteButton; // ivar: _trailingFootnoteButton
@property (retain, nonatomic) NSString *trailingFootnoteButtonText; // ivar: _trailingFootnoteButtonText


-(BOOL)shouldHideMoreButtonForTextView:(id)arg0 ;
-(NSInteger)numberOfLines;
-(id)detailTextViewText;
-(id)exclusionPathsForTextView;
-(id)setupContentView;
-(id)viewForFirstBaselineLayout;
-(struct CGSize )textSizeForTextView:(id)arg0 width:(CGFloat)arg1 lineCount:(NSUInteger)arg2 ;
-(struct UIEdgeInsets )defaultBaselineRelativeLayoutMargins;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)containerView:(id)arg0 willMeasureArrangedSubviewsFittingSize:(struct CGSize )arg1 forReason:(NSInteger)arg2 ;
-(void)containerViewDidLayoutArrangedSubviews:(id)arg0 ;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)observedPropertiesChanged;
-(void)setExclusionPathInContainer:(id)arg0 includeMoreButton:(BOOL)arg1 ;
-(void)simulateMoreButtonPress;
-(void)tlk_updateForAppearance:(id)arg0 ;
-(void)trailingFootnoteButtonPressed:(id)arg0 ;


@end


#endif