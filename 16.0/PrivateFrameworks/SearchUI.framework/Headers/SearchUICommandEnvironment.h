// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SEARCHUICOMMANDENVIRONMENT_H
#define SEARCHUICOMMANDENVIRONMENT_H

@class UIViewController, NSString, SFResultSection, UIView;
@protocol NSCopying, SearchUICardViewDelegate, SearchUICommandDelegate, SearchUIFeedbackDelegate, SearchUIResultsViewDelegate, SearchUIRowModelViewDelegate, SearchUIWatchListDelegate;

#import <Foundation/Foundation.h>

#import "SearchUISectionModel.h"

@interface SearchUICommandEnvironment : NSObject <NSCopying>



@property (weak, nonatomic) NSObject<SearchUICardViewDelegate> *cardViewDelegate; // ivar: _cardViewDelegate
@property (weak, nonatomic) NSObject<SearchUICommandDelegate> *commandDelegate; // ivar: _commandDelegate
@property (weak, nonatomic) NSObject<SearchUIFeedbackDelegate> *feedbackDelegate; // ivar: _feedbackDelegate
@property (weak, nonatomic) SearchUISectionModel *lastEngagedSection; // ivar: _lastEngagedSection
@property (weak, nonatomic) UIViewController *presentingViewController; // ivar: _presentingViewController
@property (nonatomic) NSUInteger queryId; // ivar: _queryId
@property (weak, nonatomic) NSObject<SearchUIResultsViewDelegate> *resultsViewDelegate; // ivar: _resultsViewDelegate
@property (weak, nonatomic) NSObject<SearchUIRowModelViewDelegate> *rowModelViewDelegate; // ivar: _rowModelViewDelegate
@property (copy, nonatomic) NSString *searchString; // ivar: _searchString
@property (retain, nonatomic) SFResultSection *section; // ivar: _section
@property (copy, nonatomic) NSString *sectionTitle; // ivar: _sectionTitle
@property (nonatomic) NSInteger selectableGridPunchoutIndex; // ivar: _selectableGridPunchoutIndex
@property (nonatomic) BOOL shouldUseInsetRoundedSections; // ivar: _shouldUseInsetRoundedSections
@property (nonatomic) BOOL shouldUseStandardSectionInsets; // ivar: _shouldUseStandardSectionInsets
@property (weak, nonatomic) UIView *sourceView; // ivar: _sourceView
@property (nonatomic) BOOL threeDTouchEnabled; // ivar: _threeDTouchEnabled
@property (weak, nonatomic) NSObject<SearchUIWatchListDelegate> *watchListDelegate; // ivar: _watchListDelegate


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif