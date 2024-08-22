// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLTITLEDSUMMARYPLATTERVIEW_H
#define PLTITLEDSUMMARYPLATTERVIEW_H

@class UIView, NSString, UIImage;
@protocol PLSummaryPlatter;


#import "PLTitledPlatterView.h"
#import "PLSummaryContentView.h"

@interface PLTitledSummaryPlatterView : PLTitledPlatterView <PLSummaryPlatter>

 {
    PLSummaryContentView *_summaryContentView;
}


@property (retain, nonatomic) UIView *accessoryView;
@property (nonatomic, getter=isBackgroundBlurred) BOOL backgroundBlurred;
@property (readonly, nonatomic) UIView *customContentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasShadow;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger messageNumberOfLines;
@property (retain, nonatomic) NSString *primarySubtitleText;
@property (retain, nonatomic) NSString *primaryText;
@property (retain, nonatomic) NSString *secondaryText;
@property (retain, nonatomic) NSString *summaryText;
@property (readonly) Class superclass;
@property (retain, nonatomic) UIImage *thumbnail;


-(BOOL)adjustForContentSizeCategoryChange;
-(BOOL)adjustsFontForContentSizeCategory;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct CGSize )sizeThatFitsContentWithSize:(struct CGSize )arg0 ;
-(void)_configureSummaryContentViewIfNecessary;
-(void)_layoutSummaryContentView;
-(void)layoutSubviews;
-(void)setAdjustsFontForContentSizeCategory:(BOOL)arg0 ;
-(void)setBackgroundView:(id)arg0 ;


@end


#endif