// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPAYMENTAUTHORIZATIONSUMMARYITEMSVIEW_H
#define PKPAYMENTAUTHORIZATIONSUMMARYITEMSVIEW_H

@class UIView, NSMutableArray, UILabel, UIFont, NSString;


#import "PKPaymentAuthorizationLayout.h"

@interface PKPaymentAuthorizationSummaryItemsView : UIView {
    NSMutableArray *_labelViews;
    NSMutableArray *_valueViews;
    NSMutableArray *_titleViews;
    NSMutableArray *_hasBottomPadding;
    NSMutableArray *_usesLargeFont;
    UILabel *_titleLabel;
    UIFont *_titleFont;
    UIFont *_labelLargeFont;
    UIFont *_labelRegularFont;
    UIView *_separatorView;
}


@property (weak, nonatomic) PKPaymentAuthorizationLayout *layout; // ivar: _layout
@property (nonatomic) BOOL occludesBodyView; // ivar: _occludesBodyView
@property (nonatomic) BOOL showsBoldValueText; // ivar: _showsBoldValueText
@property (nonatomic) BOOL showsTopSeparator; // ivar: _showsTopSeparator
@property (retain, nonatomic) NSString *title; // ivar: _title


-(id)_labelAttributedStringWithString:(id)arg0 withDarkColor:(BOOL)arg1 largeFont:(BOOL)arg2 ;
-(id)_valueAttributedStringWithString:(id)arg0 type:(NSUInteger)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithLayout:(id)arg0 ;
-(id)makeTitleLabel;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 andLayout:(BOOL)arg1 ;
-(void)addLabel:(id)arg0 value:(id)arg1 title:(id)arg2 itemType:(NSUInteger)arg3 maxLabelLines:(NSInteger)arg4 maxValueLines:(NSInteger)arg5 hasBottomPadding:(BOOL)arg6 useDarkColor:(BOOL)arg7 useLargeFont:(BOOL)arg8 ;
-(void)dealloc;
-(void)removeLabelsAndValues;


@end


#endif