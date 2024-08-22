// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NCDIGESTONBOARDINGSUGGESTIONVIEWCONTROLLER_H
#define NCDIGESTONBOARDINGSUGGESTIONVIEWCONTROLLER_H

@class UIViewController, NSString, NSArray, UIImage, UIView;
@protocol NCDigestOnboardingSuggestionContentDisplaying, MTMaterialGrouping;



@interface NCDigestOnboardingSuggestionViewController : UIViewController <NCDigestOnboardingSuggestionContentDisplaying, MTMaterialGrouping>



@property (nonatomic) BOOL adjustsFontForContentSizeCategory;
@property (copy, nonatomic) id *buttonActionBlock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *dismissActionBlock;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat horizontalInset; // ivar: _horizontalInset
@property (copy, nonatomic) NSString *materialGroupNameBase;
@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (readonly, copy, nonatomic) NSArray *requiredVisualStyleCategories;
@property (copy, nonatomic) NSString *suggestionButtonTitle;
@property (retain, nonatomic) UIImage *suggestionImage;
@property (copy, nonatomic) NSString *suggestionMessage;
@property (retain, nonatomic) UIView *suggestionPictogramView;
@property (copy, nonatomic) NSString *suggestionTitle;
@property (readonly) Class superclass;


-(BOOL)_canShowWhileLocked;
-(BOOL)adjustForContentSizeCategoryChange;
-(id)_viewIfLoaded;
-(id)platterView;
-(void)_updatePreferredContentSizeForContainerWidth:(CGFloat)arg0 ;
-(void)loadView;
-(void)setContainerSize:(struct CGSize )arg0 ;
-(void)setVisualStylingProvider:(id)arg0 forCategory:(NSInteger)arg1 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif