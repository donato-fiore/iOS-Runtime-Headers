// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXPEOPLESUGGESTIONMANAGER_H
#define PXPEOPLESUGGESTIONMANAGER_H

@class NSMutableSet, NSArray;
@protocol PXPeopleSuggestionManagerDataSource, PXPeopleSuggestionManagerDelegate, PXPerson;

#import <Foundation/Foundation.h>

#import "PXPeoplePagingSuggestionProvider.h"
#import "PXSuggestionToken.h"

@interface PXPeopleSuggestionManager : NSObject

@property (nonatomic) NSUInteger autoConfirmationsCount; // ivar: _autoConfirmationsCount
@property (readonly, nonatomic) BOOL canUndo;
@property (nonatomic) unsigned int confirmNoSoundID; // ivar: _confirmNoSoundID
@property (nonatomic) unsigned int confirmYesSoundID; // ivar: _confirmYesSoundID
@property (retain, nonatomic) NSMutableSet *confirmedSuggestions; // ivar: _confirmedSuggestions
@property (readonly, nonatomic) NSArray *currentSuggestions;
@property (retain, nonatomic) NSObject<PXPeopleSuggestionManagerDataSource> *dataSource; // ivar: _dataSource
@property (weak, nonatomic) NSObject<PXPeopleSuggestionManagerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL didReachEnd; // ivar: _didReachEnd
@property (readonly, nonatomic) BOOL isLoading;
@property (nonatomic) BOOL mute; // ivar: _mute
@property (retain, nonatomic) NSObject<PXPerson> *person; // ivar: _person
@property (retain, nonatomic) NSMutableSet *rejectedSuggestions; // ivar: _rejectedSuggestions
@property (retain, nonatomic) NSMutableSet *skippedSuggestions; // ivar: _skippedSuggestions
@property (retain, nonatomic) PXPeoplePagingSuggestionProvider *suggestionProvider; // ivar: _suggestionProvider
@property (retain, nonatomic) PXSuggestionToken *suggestionToken; // ivar: _suggestionToken
@property (nonatomic) NSUInteger userConfirmationsCount; // ivar: _userConfirmationsCount


-(BOOL)_fetchingSuggestions;
-(BOOL)isSuggestionConfirmed:(id)arg0 ;
-(id)_nonSkippedSuggestionsForSuggestions:(id)arg0 ;
-(id)commitUserResponsesToPerson:(id)arg0 ;
-(id)init;
-(id)initWithPerson:(id)arg0 ;
-(unsigned int)_soundIdWithFilename:(id)arg0 ;
-(void)_loadMoreSuggestionsWithCompletion:(id)arg0 ;
-(void)_notifyDelegateWeHaveMoreSuggestions:(BOOL)arg0 ;
-(void)_playConfirmNoSound;
-(void)_playConfirmYesSound;
-(void)cancelPendingSuggestionLoading;
-(void)commitUserResponses;
-(void)dealloc;
-(void)markSuggestions:(id)arg0 confirmed:(BOOL)arg1 wantsSound:(BOOL)arg2 ;
-(void)markSuggestionsAsSkipped:(id)arg0 ;
-(void)preloadSounds;
-(void)removeAllSuggestions;
-(void)requestNextSuggestion;
-(void)requestNextSuggestionsWithPageLimit:(NSUInteger)arg0 ;
-(void)undo;


@end


#endif