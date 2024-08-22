// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EMLISTUNSUBSCRIBESUGGESTION_H
#define EMLISTUNSUBSCRIBESUGGESTION_H

@class NSString, SGSuggestionPresenter;
@protocol SGSuggestion, SGSuggestionCategory, SGSuggestionDelegate;

#import <Foundation/Foundation.h>

#import "EMListUnsubscribeCommand.h"

@interface EMListUnsubscribeSuggestion : NSObject <SGSuggestion, SGSuggestionCategory>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) EMListUnsubscribeCommand *listUnsubscribeCommand; // ivar: _listUnsubscribeCommand
@property (readonly, nonatomic) NSObject<SGSuggestion> *suggestion;
@property (weak, nonatomic) NSObject<SGSuggestionDelegate> *suggestionDelegate; // ivar: suggestionDelegate
@property (weak, nonatomic) SGSuggestionPresenter *suggestionPresenter; // ivar: _suggestionPresenter
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *unsubscribeMessageAlertString;


+(id)unsubscribeTitleAlertString;
-(BOOL)isEqual:(id)arg0 ;
-(id)suggestionCategoryLocalizedCountOfItems:(id)arg0 ;
-(id)suggestionCategorySubtitleForItems:(id)arg0 ;
-(id)suggestionCategoryTitleForItems:(id)arg0 ;
-(void)_sendAnalyticsForUnsubscribe:(NSInteger)arg0 ;
-(void)ignore;
-(void)unsubscribe;


@end


#endif