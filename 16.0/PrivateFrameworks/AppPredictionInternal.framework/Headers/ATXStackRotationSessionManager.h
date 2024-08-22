// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXSTACKROTATIONSESSIONMANAGER_H
#define ATXSTACKROTATIONSESSIONMANAGER_H

@class NSMutableArray, NSMutableSet, NSMutableDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ATXStackRotationSessionManager : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSMutableArray *completedSessions; // ivar: _completedSessions
@property (readonly, nonatomic) NSMutableSet *nPlusOneSuggestionUUIDsWithFirstRotation; // ivar: _nPlusOneSuggestionUUIDsWithFirstRotation
@property (readonly, nonatomic) NSMutableArray *recentHomeScreenCachedSuggestions; // ivar: _recentHomeScreenCachedSuggestions
@property (readonly, nonatomic) NSMutableDictionary *stackIdToStackRotationSessions; // ivar: _stackIdToStackRotationSessions


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToATXStackRotationSessionManager:(id)arg0 ;
-(NSUInteger)hash;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStackIdToStackRotationSessions:(id)arg0 completedSessions:(id)arg1 recentHomeScreenCachedSuggestions:(id)arg2 nPlusOneSuggestionUUIDsWithFirstRotation:(id)arg3 ;
-(id)removeAllAndReturnCompletedSystemSuggestSessions;
-(id)removeAndReturnCompletedSessions;
-(id)uuidsOfNPlusOneSuggestionsFromCachedSuggestions:(id)arg0 ;
-(void)_tryEndStackRotationSessionWithStackId:(id)arg0 homeScreenEvent:(id)arg1 ;
-(void)_tryPruneSessionsOverMaxLimit;
-(void)_tryStartStackRotationSessionWithStackId:(id)arg0 homeScreenEvent:(id)arg1 ;
-(void)_tryUpdateNPlusOneStatusForSession:(id)arg0 stackId:(id)arg1 ;
-(void)_tryUpdateStackRotationSessionWithSystemSuggestLayout:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateWithBlendingUICacheUpdate:(id)arg0 ;
-(void)updateWithUIEvent:(id)arg0 ;


@end


#endif