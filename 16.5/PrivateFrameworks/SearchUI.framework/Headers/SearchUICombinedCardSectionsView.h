// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SEARCHUICOMBINEDCARDSECTIONSVIEW_H
#define SEARCHUICOMBINEDCARDSECTIONSVIEW_H

@class NUIContainerStackView, NSMutableDictionary, NSMutableArray;
@protocol SearchUIFeedbackDelegate;


#import "SearchUICombinedCardSectionRowModel.h"

@interface SearchUICombinedCardSectionsView : NUIContainerStackView

@property (retain, nonatomic) NSMutableDictionary *cardSectionsMapping; // ivar: _cardSectionsMapping
@property (weak, nonatomic) NSObject<SearchUIFeedbackDelegate> *feedbackDelegate; // ivar: _feedbackDelegate
@property BOOL hasAttributionFooter; // ivar: _hasAttributionFooter
@property (retain, nonatomic) SearchUICombinedCardSectionRowModel *rowModel; // ivar: _rowModel
@property (retain, nonatomic) NSMutableArray *separatorViews; // ivar: _separatorViews
@property (retain, nonatomic) NSMutableArray *uncacheableViews; // ivar: _uncacheableViews


-(id)init;
-(id)initWithRowModel:(id)arg0 feedbackDelegate:(id)arg1 ;
-(void)layoutAllSeparators;
-(void)layoutSubviews;


@end


#endif