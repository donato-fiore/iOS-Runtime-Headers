// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SPUICOMPLETIONSTRINGVIEW_H
#define SPUICOMPLETIONSTRINGVIEW_H

@class NUIContainerStackView, SFCardSection, NSString, UIFont, SearchUIImageView, SFSearchResult, UIColor;
@protocol TLKImageViewDelegate;


#import "SPUICompletion.h"
#import "SPUIMaskedLabelsStackView.h"
#import "SPUICompletionStringModel.h"

@interface SPUICompletionStringView : NUIContainerStackView <TLKImageViewDelegate>



@property (retain) SFCardSection *cardSection; // ivar: _cardSection
@property (retain) SPUICompletion *completion; // ivar: _completion
@property (readonly) BOOL completionResultIsPotentiallyPunchout;
@property (readonly) NSString *completionText;
@property (readonly) NSString *copyableString;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property BOOL focusIsOnFirstResult; // ivar: _focusIsOnFirstResult
@property (retain, nonatomic) UIFont *fontForCompletionLabel;
@property (readonly) BOOL hasContent;
@property (readonly) BOOL hasPrefix;
@property (readonly) NSUInteger hash;
@property (retain) SearchUIImageView *imageView; // ivar: _imageView
@property (retain) SPUIMaskedLabelsStackView *labelsStackView; // ivar: _labelsStackView
@property (retain) SFSearchResult *result; // ivar: _result
@property (retain, nonatomic) SPUICompletionStringModel *searchFieldModel; // ivar: _searchFieldModel
@property (retain, nonatomic) UIColor *selectionHighlightColor; // ivar: _selectionHighlightColor
@property (readonly) Class superclass;
@property (retain, nonatomic) UIColor *textColorForCompletionLabel;
@property (readonly) CGFloat trailingPaddingForFieldEditor;


-(id)bridgeLabel;
-(id)extensionLabel;
-(id)init;
-(void)didFailToLoadImage;
-(void)didUpdateWithImage:(id)arg0 ;
-(void)updateFields;
-(void)updateLayoutMargins;
-(void)updateWithResult:(id)arg0 cardSection:(id)arg1 focusIsOnFirstResult:(BOOL)arg2 ;


@end


#endif