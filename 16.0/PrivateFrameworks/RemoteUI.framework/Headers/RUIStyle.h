// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RUISTYLE_H
#define RUISTYLE_H

@class UIColor, UIFont;

#import <Foundation/Foundation.h>


@interface RUIStyle : NSObject

@property (retain, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (retain, nonatomic) UIColor *buttonRowTextColor; // ivar: _buttonRowTextColor
@property (retain, nonatomic) UIColor *detailHeaderLabelTextColor; // ivar: _detailHeaderLabelTextColor
@property (retain, nonatomic) UIColor *focusedRowTextColor; // ivar: _focusedRowTextColor
@property (retain, nonatomic) UIFont *footerFont; // ivar: _footerFont
@property (nonatomic) NSInteger footerLabelAlignment; // ivar: _footerLabelAlignment
@property (retain, nonatomic) UIColor *footerLabelTextColor; // ivar: _footerLabelTextColor
@property (nonatomic) NSInteger footerLinkAlignment; // ivar: _footerLinkAlignment
@property (nonatomic) CGFloat footerTopMargin; // ivar: _footerTopMargin
@property (nonatomic) CGFloat headerContainerSideMargin; // ivar: _headerContainerSideMargin
@property (nonatomic) CGFloat headerImagePadding; // ivar: _headerImagePadding
@property (nonatomic) NSInteger headerLabelAlignment; // ivar: _headerLabelAlignment
@property (retain, nonatomic) UIColor *headerLabelTextColor; // ivar: _headerLabelTextColor
@property (nonatomic) UIEdgeInsets headerMargin; // ivar: _headerMargin
@property (nonatomic) NSInteger labelRowTextAlignment; // ivar: _labelRowTextAlignment
@property (retain, nonatomic) UIColor *labelRowTextColor; // ivar: _labelRowTextColor
@property (nonatomic) CGFloat minimumHeightOfAdaptiveSheet; // ivar: _minimumHeightOfAdaptiveSheet
@property (nonatomic) CGFloat multiChoiceStackViewElementSpacing; // ivar: _multiChoiceStackViewElementSpacing
@property (nonatomic) CGFloat multiChoiceStackViewTopAndBottomMargin; // ivar: _multiChoiceStackViewTopAndBottomMargin
@property (readonly, nonatomic) NSInteger navBarActivityIndicatorStyle;
@property (retain, nonatomic) UIFont *navBarButtonLabelFont; // ivar: _navBarButtonLabelFont
@property (nonatomic) CGFloat navBarLabelSpacingWithImage; // ivar: _navBarLabelSpacingWithImage
@property (retain, nonatomic) UIColor *radioGroupSelectedColor; // ivar: _radioGroupSelectedColor
@property (nonatomic) CGFloat sectionHeaderHeight; // ivar: _sectionHeaderHeight
@property (nonatomic) CGFloat sectionSpacing; // ivar: _sectionSpacing
@property (retain, nonatomic) UIColor *selectPageDetailTextColor; // ivar: _selectPageDetailTextColor
@property (retain, nonatomic) UIColor *spinnerLabelColor; // ivar: _spinnerLabelColor
@property (retain, nonatomic) UIFont *spinnerLabelFont; // ivar: _spinnerLabelFont
@property (nonatomic) NSInteger subHeaderLabelAlignment; // ivar: _subHeaderLabelAlignment
@property (retain, nonatomic) UIColor *subHeaderLabelTextColor; // ivar: _subHeaderLabelTextColor
@property (nonatomic) CGFloat subHeaderTopMargin; // ivar: _subHeaderTopMargin
@property (readonly, nonatomic) NSInteger tableViewStyle;
@property (retain, nonatomic) UIColor *tintColor; // ivar: _tintColor
@property (retain, nonatomic) UIColor *titleLabelTextColor; // ivar: _titleLabelTextColor
@property (nonatomic) BOOL useNonOBStyleButton; // ivar: _useNonOBStyleButton


+(id)_staticButtonTitleColorWithTintColor:(id)arg0 ;
+(id)defaultStyle;
+(id)frontRowStyle;
+(id)osloStyle;
+(id)setupAssistantModalStyle;
+(id)setupAssistantStyle;
+(id)sharedInstance;
+(id)watchDefaultStyle;
-(id)boldButtonTitleColorWithTintColor:(id)arg0 ;
-(id)init;
-(void)applyToLabel:(id)arg0 ;
-(void)applyToNavigationBar:(id)arg0 ;
-(void)applyToNavigationController:(id)arg0 ;
-(void)applyToObjectModel:(id)arg0 ;


@end


#endif