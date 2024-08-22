// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXACTIVITY_H
#define ATXACTIVITY_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface ATXActivity : NSObject

@property (readonly, nonatomic) NSUInteger activityType; // ivar: _activityType
@property (readonly, nonatomic) BOOL allowsSmartEntry; // ivar: _allowsSmartEntry
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *localizedSuggestionReason;
@property (readonly, nonatomic) NSUInteger location; // ivar: _location
@property (readonly, copy, nonatomic) NSString *modeUUID; // ivar: _modeUUID
@property (readonly, nonatomic) NSInteger origin; // ivar: _origin
@property (readonly, copy, nonatomic) NSString *originAnchorType; // ivar: _originAnchorType
@property (readonly, copy, nonatomic) NSString *originBundleId; // ivar: _originBundleId
@property (readonly, nonatomic) BOOL shouldSuggestTriggers; // ivar: _shouldSuggestTriggers
@property (readonly, copy, nonatomic) NSString *suggestionUUID; // ivar: _suggestionUUID
@property (readonly, nonatomic) NSArray *triggers; // ivar: _triggers
@property (readonly, copy, nonatomic) NSString *userModeName; // ivar: _userModeName


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToATXActivity:(id)arg0 ;
-(NSUInteger)hash;
-(id)_anchorSuggestionReasonLocalizationKey;
-(id)_heuristicSuggestionReasonLocalizationKey;
-(id)_suggestionReasonLocalizationKey;
-(id)init;
-(id)initWithBMInferredModeEvent:(id)arg0 ;
-(id)initWithModeUUID:(id)arg0 userModeName:(id)arg1 activityType:(NSUInteger)arg2 origin:(NSInteger)arg3 originBundleId:(id)arg4 originAnchorType:(id)arg5 allowsSmartEntry:(BOOL)arg6 suggestionUUID:(id)arg7 triggers:(id)arg8 location:(NSUInteger)arg9 shouldSuggestTriggers:(BOOL)arg10 ;


@end


#endif