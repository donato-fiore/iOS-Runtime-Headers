// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UISEARCHTEXTFIELDVISUALSTYLE_H
#define _UISEARCHTEXTFIELDVISUALSTYLE_H

@class NSNumber, UIFont;
@protocol _UIVisualStyleProviding;

#import <Foundation/Foundation.h>

#import "UIColor.h"
#import "UISearchTextField.h"

@interface _UISearchTextFieldVisualStyle : NSObject <_UIVisualStyleProviding>



@property (readonly, nonatomic) CGFloat backgroundCornerRadius;
@property (readonly, nonatomic) NSNumber *clearButtonInnerInset;
@property (readonly, nonatomic) NSNumber *clearButtonOuterInset;
@property (readonly, nonatomic) CGFloat defaultHeight;
@property (readonly, nonatomic) UIColor *defaultLeftViewTintColor;
@property (readonly, nonatomic) UIFont *dynamicSearchFieldFont;
@property (readonly, nonatomic) CGFloat leftViewInset;
@property (readonly, nonatomic) CGFloat leftViewInsetAddition;
@property (readonly, nonatomic) CGFloat leftViewToPlaceholderCenteredMargin;
@property (readonly, nonatomic) CGFloat rightViewInset;
@property (readonly, nonatomic) CGFloat searchBookmarkButtonOffset;
@property (readonly, nonatomic) CGFloat searchResultsListButtonOffset;
@property (readonly, weak, nonatomic) UISearchTextField *searchTextField; // ivar: _searchTextField
@property (readonly, nonatomic) CGFloat searchTextResultsPadding;
@property (readonly, nonatomic) CGFloat textLeadingInset;
@property (readonly, nonatomic) CGFloat textLeftInsetLegacy;
@property (readonly, nonatomic) CGFloat textRightInset;
@property (readonly, nonatomic) BOOL usesCustomIntrinsicSize;


-(id)initWithInstance:(id)arg0 ;


@end


#endif