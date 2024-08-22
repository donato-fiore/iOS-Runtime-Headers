// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NCNOTIFICATIONAPPSECTIONLISTSUMMARIZEDCONTENTVIEW_H
#define NCNOTIFICATIONAPPSECTIONLISTSUMMARIZEDCONTENTVIEW_H

@class UILabel, UIView, NSArray, UITapGestureRecognizer, NSString;
@protocol NCNotificationAppSectionListSummarizedContentViewDelegate;


#import "NCNotificationListBaseContentView.h"

@interface NCNotificationAppSectionListSummarizedContentView : NCNotificationListBaseContentView {
    UILabel *_titleLabel;
    UILabel *_countLabel;
    UIView *_countBackgroundView;
    UIView *_backgroundView;
    NSArray *_titleAndContentStringLabels;
    UIView *_attachmentImageBoundingView;
    UITapGestureRecognizer *_tapGestureRecognizer;
}


@property (copy, nonatomic) NSArray *attachmentImageViews; // ivar: _attachmentImageViews
@property (nonatomic) NSUInteger count; // ivar: _count
@property (weak, nonatomic) NSObject<NCNotificationAppSectionListSummarizedContentViewDelegate> *delegate; // ivar: _delegate
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSArray *titleAndContentStrings; // ivar: _titleAndContentStrings


-(CGFloat)_allowedWidthForTextInRect:(struct CGRect )arg0 ;
-(CGFloat)_countBackgroundDimensionInRect:(struct CGRect )arg0 ;
-(NSUInteger)_maximumNumberOfLinesForContentText;
-(NSUInteger)_maximumNumberOfLinesForTitleText;
-(NSUInteger)_numberOfLinesForContentTextInFrame:(struct CGRect )arg0 ;
-(NSUInteger)_numberOfLinesForTitleTextInFrame:(struct CGRect )arg0 ;
-(id)_newContentStringLabelForText:(id)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_configureBackgroundViewIfNecessary;
-(void)_configureShadowForAttachmentView:(id)arg0 ;
-(void)_configureTapGestureRecognizerIfNecessary;
-(void)_layoutAttachmentImageViews;
-(void)_layoutBackgroundView;
-(void)_layoutCountLabel;
-(void)_layoutTitleAndContentStringLabels;
-(void)_layoutTitleLabel;
-(void)_updateTextAttributes;
-(void)_updateTextAttributesForCountLabel;
-(void)_updateTextAttributesForTitleAndContentStringLabels;
-(void)_updateTextAttributesForTitleLabel;
-(void)_visualStylingProviderDidChange:(id)arg0 forCategory:(NSInteger)arg1 outgoingProvider:(id)arg2 ;
-(void)didMoveToWindow;
-(void)handleTap:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif