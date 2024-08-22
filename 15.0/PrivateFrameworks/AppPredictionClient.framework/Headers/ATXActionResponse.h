// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXACTIONRESPONSE_H
#define ATXACTIONRESPONSE_H

@class NSIndexSet, NSArray, NSUUID, NSData, NSDate, NSString, NSError;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "ATXAction.h"

@interface ATXActionResponse : NSObject <NSSecureCoding>

 {
    NSIndexSet *_shownActionIndices;
    NSIndexSet *_explicitlyDismissedActionIndices;
    NSArray *_shownActionsCache;
    BOOL _containsRouteInternal;
}


@property (readonly, nonatomic) NSArray *actions;
@property (readonly, nonatomic) NSUUID *blendingModelUICacheUpdateUUID; // ivar: _blendingModelUICacheUpdateUUID
@property (readonly, nonatomic) NSData *cacheFileData; // ivar: _cacheFileData
@property (readonly, nonatomic) unsigned char consumerSubType; // ivar: _consumerSubType
@property (readonly, nonatomic) NSDate *donatedIntentDate; // ivar: _donatedIntentDate
@property (readonly, nonatomic) ATXAction *engagedAction; // ivar: _engagedAction
@property (readonly, nonatomic) NSString *engagedAppString; // ivar: _engagedAppString
@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) NSArray *explicitlyDismissedActions;
@property (readonly, nonatomic) NSUInteger feedbackStage; // ivar: _feedbackStage
@property (readonly, nonatomic) ATXAction *matchingIntentDonatedAction; // ivar: _matchingIntentDonatedAction
@property (readonly, nonatomic) BOOL matchingIntentWasCompleteMatch; // ivar: _matchingIntentWasCompleteMatch
@property (readonly, nonatomic) NSDate *predictionDate; // ivar: _predictionDate
@property (readonly, nonatomic) NSArray *proactiveSuggestions; // ivar: _proactiveSuggestions
@property (readonly, nonatomic) NSArray *scoredActions; // ivar: _scoredActions
@property (readonly, nonatomic) NSUInteger searchedActionType; // ivar: _searchedActionType
@property (readonly, nonatomic) NSArray *shownActions;
@property (readonly, nonatomic) NSDate *uiFeedbackDate; // ivar: _uiFeedbackDate
@property (readonly, nonatomic) NSUUID *uuid; // ivar: _uuid


+(BOOL)supportsSecureCoding;
-(BOOL)containsExternalRoute;
-(BOOL)indexWasShown:(NSUInteger)arg0 ;
-(BOOL)isActionSpotlightCaptureRateAppEngagementType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToActionResponse:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProactiveSuggestions:(id)arg0 blendingModelUICacheUpdateUUID:(id)arg1 consumerSubType:(unsigned char)arg2 error:(id)arg3 ;
-(id)initWithScoredActions:(id)arg0 cacheFileData:(id)arg1 consumerSubType:(unsigned char)arg2 error:(id)arg3 ;
-(id)initWithScoredActions:(id)arg0 cacheFileData:(id)arg1 proactiveSuggestions:(id)arg2 blendingModelUICacheUpdateUUID:(id)arg3 consumerSubType:(unsigned char)arg4 predictionDate:(id)arg5 error:(id)arg6 ;
-(id)json;
-(id)jsonData;
-(id)jsonDescription;
-(id)routeDestinationTypeString;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setContainsExternalRoute:(BOOL)arg0 ;
-(void)updateConsumerSubType:(unsigned char)arg0 engagedAction:(id)arg1 shownActions:(id)arg2 feedbackStage:(NSUInteger)arg3 explicitlyDismissedActions:(id)arg4 searchedActionType:(NSUInteger)arg5 engagedAppString:(id)arg6 uiFeedbackDate:(id)arg7 ;
-(void)updateWithMatchingIntentDonatedAction:(id)arg0 intentDonationDate:(id)arg1 matchingIntentWasCompleteMatch:(BOOL)arg2 ;


@end


#endif