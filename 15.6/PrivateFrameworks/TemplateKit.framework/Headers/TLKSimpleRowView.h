// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TLKSIMPLEROWVIEW_H
#define TLKSIMPLEROWVIEW_H

@class NUIContainerGridView, NSString;
@protocol NUIContainerViewDelegate;


#import "TLKView.h"
#import "TLKImage.h"
#import "TLKImageView.h"
#import "TLKRichText.h"
#import "TLKLabel.h"

@interface TLKSimpleRowView : TLKView <NUIContainerViewDelegate>



@property (retain, nonatomic) NUIContainerGridView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) TLKImage *leadingImage; // ivar: _leadingImage
@property (retain, nonatomic) TLKImageView *leadingImageView; // ivar: _leadingImageView
@property (retain, nonatomic) TLKRichText *leadingSubtitle; // ivar: _leadingSubtitle
@property (retain, nonatomic) TLKLabel *leadingSubtitleLabel; // ivar: _leadingSubtitleLabel
@property (retain, nonatomic) TLKRichText *leadingTitle; // ivar: _leadingTitle
@property (retain, nonatomic) TLKLabel *leadingTitleLabel; // ivar: _leadingTitleLabel
@property (readonly) Class superclass;
@property (retain, nonatomic) TLKImage *trailingImage; // ivar: _trailingImage
@property (retain, nonatomic) TLKImageView *trailingImageView; // ivar: _trailingImageView
@property (retain, nonatomic) TLKRichText *trailingSubtitle; // ivar: _trailingSubtitle
@property (retain, nonatomic) TLKLabel *trailingSubtitleLabel; // ivar: _trailingSubtitleLabel
@property (retain, nonatomic) TLKRichText *trailingTitle; // ivar: _trailingTitle
@property (retain, nonatomic) TLKLabel *trailingTitleLabel; // ivar: _trailingTitleLabel


+(CGFloat)naturalWidthOfLabel:(id)arg0 inFittingSize:(struct CGSize )arg1 ;
+(void)applyText:(id)arg0 toLabel:(id)arg1 ;
-(BOOL)hasSubtitles;
-(BOOL)usesDefaultLayoutMargins;
-(CGFloat)widthOfColumnAtIndex:(NSUInteger)arg0 ;
-(id)bottomRowViews;
-(id)fontForTextInLabel:(id)arg0 ;
-(id)gridOfAllViews;
-(id)leadingTextView;
-(id)setupContentView;
-(id)stringForLabel:(id)arg0 ;
-(id)topRowViews;
-(struct CGRect )containerView:(id)arg0 layoutFrameForArrangedSubview:(id)arg1 withProposedFrame:(struct CGRect )arg2 ;
-(void)containerView:(id)arg0 willMeasureArrangedSubviewsFittingSize:(struct CGSize )arg1 forReason:(NSInteger)arg2 ;
-(void)observedPropertiesChanged;


@end


#endif