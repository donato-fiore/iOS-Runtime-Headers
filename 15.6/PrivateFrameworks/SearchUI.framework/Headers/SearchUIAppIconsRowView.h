// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SEARCHUIAPPICONSROWVIEW_H
#define SEARCHUIAPPICONSROWVIEW_H

@class UIView, NUIGridArrangement, NSString, NSMutableArray;
@protocol SearchUIHomeScreenEngagementDelegate, NUIGridArrangementDataSource, NUIArrangementContainer, SearchUIFeedbackDelegate;



@interface SearchUIAppIconsRowView : UIView <SearchUIHomeScreenEngagementDelegate, NUIGridArrangementDataSource, NUIArrangementContainer>



@property (retain, nonatomic) NUIGridArrangement *arrangment; // ivar: _arrangment
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<SearchUIFeedbackDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMutableArray *endsSpacingHelpers; // ivar: _endsSpacingHelpers
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableArray *iconViews; // ivar: _iconViews
@property (retain, nonatomic) NSMutableArray *itemAtIndex; // ivar: _itemAtIndex
@property (retain, nonatomic) NSMutableArray *spacerDebuggerViews; // ivar: _spacerDebuggerViews
@property (retain, nonatomic) NSMutableArray *spacingHelpers; // ivar: _spacingHelpers
@property (readonly) Class superclass;


+(CGFloat)numberOfIcons;
-(NSInteger)numberOfItemsInGridArrangement:(id)arg0 ;
-(id)gridArrangement:(id)arg0 itemAtIndex:(NSInteger)arg1 columns:(struct _NSRange *)arg2 rows:(struct _NSRange *)arg3 horizontalAlignment:(*NSInteger)arg4 verticalAlignment:(*NSInteger)arg5 ;
-(id)init;
-(struct CGRect )layoutFrameForArrangedSubview:(id)arg0 withProposedContentFrame:(struct CGRect )arg1 ;
-(struct CGSize )contentLayoutSizeFittingSize:(struct CGSize )arg0 forArrangedSubview:(id)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct CGSize )systemLayoutSizeFittingSize:(struct CGSize )arg0 ;
-(void)didUpdateKeyboardFocusToResult:(id)arg0 cardSection:(id)arg1 ;
-(void)layoutSubviews;
-(void)updateWithResultsForRow:(id)arg0 ;


@end


#endif