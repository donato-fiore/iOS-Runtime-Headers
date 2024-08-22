// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SEARCHUICOMPLETIONSTRINGVIEW_H
#define SEARCHUICOMPLETIONSTRINGVIEW_H

@class NUIContainerStackView, SFCardSection, NSString, UIFont, SFSearchResult, UIColor;
@protocol TLKImageViewDelegate;


#import "SearchUICompletion.h"
#import "SearchUIImageView.h"
#import "SearchUIMaskedLabelsStackView.h"
#import "SearchUICompletionStringModel.h"

@interface SearchUICompletionStringView : NUIContainerStackView <TLKImageViewDelegate>



@property (retain) SFCardSection *cardSection; // ivar: _cardSection
@property (retain) SearchUICompletion *completion; // ivar: _completion
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
@property (retain) SearchUIMaskedLabelsStackView *labelsStackView; // ivar: _labelsStackView
@property (retain) SFSearchResult *result; // ivar: _result
@property (retain, nonatomic) SearchUICompletionStringModel *searchFieldModel; // ivar: _searchFieldModel
@property (retain, nonatomic) UIColor *selectionHighlightColor; // ivar: _selectionHighlightColor
@property (readonly) Class superclass;
@property (retain, nonatomic) UIColor *textColorForCompletionLabel;
@property (readonly) CGFloat trailingPaddingForFieldEditor;


+(BOOL)supportsImages;
-(id)bridgeLabel;
-(id)extensionLabel;
-(id)init;
-(void)didFailToLoadImage;
-(void)didUpdateWithImage:(id)arg0 ;
-(void)updateFields;
-(void)updateLabelStackVisibility;
-(void)updateWithResult:(id)arg0 cardSection:(id)arg1 focusIsOnFirstResult:(BOOL)arg2 ;


@end


#endif