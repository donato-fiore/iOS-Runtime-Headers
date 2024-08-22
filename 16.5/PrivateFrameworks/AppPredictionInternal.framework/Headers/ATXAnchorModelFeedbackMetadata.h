// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXANCHORMODELFEEDBACKMETADATA_H
#define ATXANCHORMODELFEEDBACKMETADATA_H

@class NSMutableDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ATXAnchorModelFeedbackMetadata : NSObject <NSSecureCoding>

 {
    NSMutableDictionary *_suggestionUUIDToAnchorPredictionMapping;
}




+(BOOL)supportsSecureCoding;
+(id)anchorFeedbackMetadataFromArchivedData:(id)arg0 ;
+(id)archivedDataForAnchorFeedbackMetadata:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToATXAnchorModelFeedbackMetadata:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)numberOfAnchorModelPredictions;
-(id)anchorModelPredictionForProactiveSuggestion:(id)arg0 ;
-(id)init;
-(id)initWithAnchorSuggestionTuples:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSuggestionUUIDToAnchorPredictionMapping:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif