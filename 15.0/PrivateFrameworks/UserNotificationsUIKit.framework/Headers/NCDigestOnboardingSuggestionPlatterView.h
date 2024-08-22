// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NCDIGESTONBOARDINGSUGGESTIONPLATTERVIEW_H
#define NCDIGESTONBOARDINGSUGGESTIONPLATTERVIEW_H

@class PLPlatterView, NSString, NSArray, UIImage, UIView;
@protocol NCDigestOnboardingSuggestionContentDisplaying;


#import "NCDigestOnboardingSuggestionContentView.h"

@interface NCDigestOnboardingSuggestionPlatterView : PLPlatterView <NCDigestOnboardingSuggestionContentDisplaying>

 {
    NCDigestOnboardingSuggestionContentView *_contentView;
    NSString *_materialGroupNameBase;
}


@property (nonatomic) BOOL adjustsFontForContentSizeCategory;
@property (copy, nonatomic) id *buttonActionBlock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *dismissActionBlock;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (readonly, copy, nonatomic) NSArray *requiredVisualStyleCategories;
@property (copy, nonatomic) NSString *suggestionButtonTitle;
@property (retain, nonatomic) UIImage *suggestionImage;
@property (copy, nonatomic) NSString *suggestionMessage;
@property (retain, nonatomic) UIView *suggestionPictogramView;
@property (copy, nonatomic) NSString *suggestionTitle;
@property (readonly) Class superclass;


-(BOOL)adjustForContentSizeCategoryChange;
-(id)initWithRecipe:(NSInteger)arg0 ;
-(id)materialGroupNameBase;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_configureContentViewIfNecessary;
-(void)didMoveToSuperview;
-(void)setMaterialGroupNameBase:(id)arg0 ;
-(void)setVisualStylingProvider:(id)arg0 forCategory:(NSInteger)arg1 ;


@end


#endif