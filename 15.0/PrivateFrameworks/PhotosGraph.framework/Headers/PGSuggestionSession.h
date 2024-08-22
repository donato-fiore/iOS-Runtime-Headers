// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGSUGGESTIONSESSION_H
#define PGSUGGESTIONSESSION_H

@class NSDate, NSArray, CLSCurationContext, PHPhotoLibrary;
@protocol OS_os_log;

#import <Foundation/Foundation.h>

#import "PGSuggestionNotificationProfile.h"
#import "PGManagerWorkingContext.h"

@interface PGSuggestionSession : NSObject {
    NSDate *_universalToday;
}


@property (retain, nonatomic) NSArray *collidableMemories; // ivar: _collidableMemories
@property (readonly, nonatomic) CLSCurationContext *curationContext; // ivar: _curationContext
@property (retain, nonatomic) NSArray *deniedSuggestions; // ivar: _deniedSuggestions
@property (retain, nonatomic) NSArray *existingSuggestions; // ivar: _existingSuggestions
@property (readonly, nonatomic) NSObject<OS_os_log> *loggingConnection; // ivar: _loggingConnection
@property (readonly, nonatomic) PGSuggestionNotificationProfile *notificationProfile; // ivar: _notificationProfile
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) unsigned char profile; // ivar: _profile
@property (readonly, nonatomic) PGManagerWorkingContext *workingContext; // ivar: _workingContext


+(id)availableSuggestionTypeInfosWithProfile:(unsigned char)arg0 ;
+(id)suggesterClassesWithProfile:(unsigned char)arg0 ;
+(id)suggestionSubtypesWithProfile:(unsigned char)arg0 ;
+(id)suggestionTypesWithProfile:(unsigned char)arg0 ;
-(BOOL)_suggestionIsColliding:(id)arg0 relaxCollisionRules:(BOOL)arg1 ;
-(BOOL)suggesterClass:(Class)arg0 supportsOptions:(id)arg1 ;
-(BOOL)suggestion:(id)arg0 collidesWithMemories:(id)arg1 ;
-(BOOL)suggestion:(id)arg0 isEqualToSuggestion:(id)arg1 ;
-(BOOL)supportsRelaxedCollisionRulesForSuggester:(id)arg0 ;
-(NSUInteger)deniedSuggestion:(id)arg0 collidesWithSuggestion:(id)arg1 ;
-(NSUInteger)outstanderSuggestion:(id)arg0 collidesWithSuggestion:(id)arg1 relaxCollisionRules:(BOOL)arg2 ;
-(NSUInteger)reasonForSuggestion:(id)arg0 collidingWithSuggestion:(id)arg1 relaxCollisionRules:(BOOL)arg2 ;
-(NSUInteger)singleAssetSuggestion:(id)arg0 collidesWithSuggestion:(id)arg1 ;
-(id)activeSuggestersWithOptions:(id)arg0 ;
-(id)anySuggestionCollidingWithSuggestion:(id)arg0 inSuggestions:(id)arg1 relaxCollisionRules:(BOOL)arg2 collisionReason:(*NSUInteger)arg3 ;
-(id)bestSuggestionBetween:(id)arg0 and:(id)arg1 ;
-(id)coordinatedSuggestionsWithOptions:(id)arg0 progress:(id)arg1 ;
-(id)electedSuggestionsFromSuggestions:(id)arg0 options:(id)arg1 progress:(id)arg2 ;
-(id)existingSuggestionsWithState:(unsigned short)arg0 count:(NSUInteger)arg1 ;
-(id)infoWithSuggestion:(id)arg0 ;
-(id)infosWithSuggestions:(id)arg0 ;
-(id)initWithProfile:(unsigned char)arg0 workingContext:(id)arg1 ;
-(id)suggesterClasses;
-(id)suggestionsByCollisionReasonCollidingWithSuggestion:(id)arg0 inSuggestions:(id)arg1 relaxCollisionRules:(BOOL)arg2 ;
-(id)suggestionsWithOptions:(id)arg0 progress:(id)arg1 ;
-(id)uncoordinatedSuggestionsWithOptions:(id)arg0 progress:(id)arg1 ;


@end


#endif