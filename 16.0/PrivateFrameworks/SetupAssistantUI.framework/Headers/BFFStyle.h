// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BFFSTYLE_H
#define BFFSTYLE_H


#import <Foundation/Foundation.h>


@interface BFFStyle : NSObject



+(id)sharedStyle;
-(CGFloat)baselineInsetForHeaderTitle;
-(CGFloat)headerIconBaselineOffset;
-(CGFloat)headerIconBaselineOffsetForView:(id)arg0 ;
-(CGFloat)headerSubheaderBaselineSpacingForView:(id)arg0 ;
-(CGFloat)headerTitleBaselineOffsetForView:(id)arg0 hasIcon:(BOOL)arg1 ;
-(CGFloat)headerTitleBaselineOffsetForView:(id)arg0 iconSize:(struct CGSize )arg1 ;
-(CGFloat)headerTitleBaselineOffsetHasIcon:(BOOL)arg0 ;
-(CGFloat)headerYOffsetForIcon:(id)arg0 inView:(id)arg1 ;
-(CGFloat)headerYOffsetForIconSize:(struct CGSize )arg0 inView:(id)arg1 ;
-(CGFloat)horizontalMarginForView:(id)arg0 ;
-(CGFloat)nonTableHorizontalMargin;
-(CGFloat)screenHeaderFooterSideInsetForView:(id)arg0 ;
-(CGFloat)screenHeaderHeightForView:(id)arg0 ;
-(CGFloat)singleLineCellHeightForTable:(id)arg0 ;
-(CGFloat)tallRowHeight;
-(id)backgroundColor;
-(id)continueButtonWithTitle:(id)arg0 inView:(id)arg1 ;
-(id)headerTitleFont;
-(id)tableCellFont;
-(struct CGSize )_effectiveSizeForIconSize:(struct CGSize )arg0 inView:(id)arg1 ;
-(struct CGSize )sizeForContinueButtonInAncestor:(id)arg0 ;
-(struct UIEdgeInsets )edgeInsetsForHeaderView:(id)arg0 ;
-(struct UIEdgeInsets )edgeInsetsForTable:(id)arg0 ;
-(struct UIEdgeInsets )horizontalInsetsForContainingInView:(id)arg0 width:(CGFloat)arg1 ;
-(void)applyAutomaticScrollToEdgeBehaviorOnNavgationItem:(id)arg0 ;
-(void)applyThemeToAllTableViews;
-(void)applyThemeToLabel:(id)arg0 ;
-(void)applyThemeToNavigationController:(id)arg0 ;
-(void)applyThemeToNavigationController:(id)arg0 allowUnderlap:(BOOL)arg1 ;
-(void)applyThemeToRemoteUIWebViewController:(id)arg0 ;
-(void)applyThemeToSectionHeaderLabel:(id)arg0 ;
-(void)applyThemeToTableCell:(id)arg0 ;
-(void)applyThemeToTextView:(id)arg0 ;
-(void)applyThemeToTitleLabel:(id)arg0 ;


@end


#endif