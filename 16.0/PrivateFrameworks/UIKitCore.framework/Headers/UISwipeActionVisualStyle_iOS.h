// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UISWIPEACTIONVISUALSTYLE_IOS_H
#define UISWIPEACTIONVISUALSTYLE_IOS_H

@class NSString;
@protocol UISwipeActionVisualStyle;

#import <Foundation/Foundation.h>

#import "UIColor.h"

@interface UISwipeActionVisualStyle_iOS : NSObject <UISwipeActionVisualStyle>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIColor *defaultButtonBackgroundColor;
@property (readonly, nonatomic) CGFloat defaultButtonWidth;
@property (readonly, nonatomic) NSUInteger defaultCollectionViewCompositionalLayoutSwipeStyle;
@property (readonly, nonatomic) UIColor *defaultTintColor;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat horizontalPadding;
@property (readonly, nonatomic) CGFloat iconToTitleSpacing;
@property (readonly, nonatomic) CGFloat maxButtonWidth;
@property (readonly, nonatomic) CGFloat maxFontSize;
@property (readonly, nonatomic) NSUInteger maxLines;
@property (readonly, nonatomic) CGFloat minFontSize;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat titleFontWeight;


-(CGFloat)buttonCornerRadiusForStyle:(NSUInteger)arg0 view:(id)arg1 ;
-(CGFloat)defaultContentHeightForView:(id)arg0 ;
-(CGFloat)interButtonPaddingForStyle:(NSUInteger)arg0 ;
-(CGFloat)interitemButtonCornerRadiusForStyle:(NSUInteger)arg0 ;
-(CGFloat)paddingToSwipeViewForStyle:(NSUInteger)arg0 ;
-(NSUInteger)defaultSwipeActionUIStyleForUITableViewStyle:(NSInteger)arg0 ;


@end


#endif