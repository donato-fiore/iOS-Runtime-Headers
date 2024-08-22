// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUISPOTLIGHTCONTROLLER_H
#define SUISPOTLIGHTCONTROLLER_H

@class SPClientSession, NSString;
@protocol SUISpotlightControllerSearchAppDelegate, SFFeedbackListener, SUISpotlightControllerResultsViewDelegate, SUISpotlightControllerSearchFieldDelegate;

#import <Foundation/Foundation.h>


@interface SUISpotlightController : NSObject

@property (weak) NSObject<SUISpotlightControllerSearchAppDelegate> *appDelegate; // ivar: _appDelegate
@property (retain, nonatomic) SPClientSession *clientSession; // ivar: _clientSession
@property (retain, nonatomic) NSString *currentSearchString; // ivar: _currentSearchString
@property (weak) NSObject<SFFeedbackListener> *feedbackDelegate; // ivar: _feedbackDelegate
@property (weak) NSObject<SUISpotlightControllerResultsViewDelegate> *resultsViewDelegate; // ivar: _resultsViewDelegate
@property (weak) NSObject<SUISpotlightControllerSearchFieldDelegate> *searchFieldDelegate; // ivar: _searchFieldDelegate


-(id)init;
-(void)startQueryTaskWithSearchString:(id)arg0 queryOptions:(NSUInteger)arg1 sourceResult:(id)arg2 triggerEvent:(NSUInteger)arg3 languages:(id)arg4 currentKeyboardLanguage:(id)arg5 queryId:(NSUInteger)arg6 ;
-(void)updateWithCommand:(id)arg0 triggerEvent:(NSUInteger)arg1 ;
-(void)updateWithSections:(id)arg0 ;
-(void)updateWithSuggestionResult:(id)arg0 triggerEvent:(NSUInteger)arg1 languages:(id)arg2 currentKeyboardLanguage:(id)arg3 queryId:(NSUInteger)arg4 ;


@end


#endif