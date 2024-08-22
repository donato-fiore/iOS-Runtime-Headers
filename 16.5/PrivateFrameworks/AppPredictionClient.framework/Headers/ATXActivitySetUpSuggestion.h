// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXACTIVITYSETUPSUGGESTION_H
#define ATXACTIVITYSETUPSUGGESTION_H

@class NSString, NSArray;
@protocol ATXActivitySuggestion;

#import <Foundation/Foundation.h>

#import "ATXActivity.h"

@interface ATXActivitySetUpSuggestion : NSObject <ATXActivitySuggestion>



@property (readonly, nonatomic) ATXActivity *activity; // ivar: _activity
@property (readonly, nonatomic) NSUInteger activityType;
@property (readonly, nonatomic) BOOL allowsSetUpWithoutConfiguration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger location;
@property (readonly, copy, nonatomic) NSString *suggestionUUID;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *triggers;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToATXActivitySetUpSuggestion:(id)arg0 ;
-(id)init;
-(id)initWithActivity:(id)arg0 ;


@end


#endif