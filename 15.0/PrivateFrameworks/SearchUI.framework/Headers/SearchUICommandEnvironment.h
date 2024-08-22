// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SEARCHUICOMMANDENVIRONMENT_H
#define SEARCHUICOMMANDENVIRONMENT_H

@class SFButtonItem, UIViewController, NSString, SFResultSection, UIView;
@protocol NSCopying, SearchUICommandDelegate, SearchUIFeedbackDelegate, SearchUIResultsViewDelegate, SearchUIRowModelViewDelegate, SearchUIShowMoreSectionsDelegate;

#import <Foundation/Foundation.h>

#import "SearchUISectionModel.h"

@interface SearchUICommandEnvironment : NSObject <NSCopying>



@property (retain, nonatomic) SFButtonItem *buttonItem; // ivar: _buttonItem
@property (weak, nonatomic) NSObject<SearchUICommandDelegate> *commandDelegate; // ivar: _commandDelegate
@property (weak, nonatomic) NSObject<SearchUIFeedbackDelegate> *feedbackDelegate; // ivar: _feedbackDelegate
@property (nonatomic) BOOL isPop; // ivar: _isPop
@property (weak, nonatomic) SearchUISectionModel *lastEngagedSection; // ivar: _lastEngagedSection
@property (retain, nonatomic) UIViewController *presentingViewController; // ivar: _presentingViewController
@property (nonatomic) NSUInteger queryId; // ivar: _queryId
@property (weak, nonatomic) NSObject<SearchUIResultsViewDelegate> *resultsViewDelegate; // ivar: _resultsViewDelegate
@property (weak, nonatomic) NSObject<SearchUIRowModelViewDelegate> *rowModelViewDelegate; // ivar: _rowModelViewDelegate
@property (copy, nonatomic) NSString *searchString; // ivar: _searchString
@property (retain, nonatomic) SFResultSection *section; // ivar: _section
@property (copy, nonatomic) NSString *sectionTitle; // ivar: _sectionTitle
@property (nonatomic) NSInteger selectableGridPunchoutIndex; // ivar: _selectableGridPunchoutIndex
@property (nonatomic) BOOL shouldUseInsetRoundedSections; // ivar: _shouldUseInsetRoundedSections
@property (nonatomic) BOOL shouldUseStandardSectionInsets; // ivar: _shouldUseStandardSectionInsets
@property (weak, nonatomic) NSObject<SearchUIShowMoreSectionsDelegate> *showMoreSectionsDelegate; // ivar: _showMoreSectionsDelegate
@property (weak, nonatomic) UIView *sourceView; // ivar: _sourceView
@property (nonatomic) BOOL threeDTouchEnabled; // ivar: _threeDTouchEnabled


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif