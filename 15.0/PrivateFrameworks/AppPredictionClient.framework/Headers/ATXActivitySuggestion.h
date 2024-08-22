// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXACTIVITYSUGGESTION_H
#define ATXACTIVITYSUGGESTION_H

@class NSString, NSArray;
@protocol ATXActivitySuggestion;

#import <Foundation/Foundation.h>

#import "ATXActivity.h"

@interface ATXActivitySuggestion : NSObject <ATXActivitySuggestion>



@property (readonly, nonatomic) ATXActivity *activity; // ivar: _activity
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger location;
@property (readonly, copy, nonatomic) NSString *suggestionUUID;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *triggers;
@property (readonly, copy, nonatomic) NSString *uuidString;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToATXActivitySuggestion:(id)arg0 ;
-(id)init;
-(id)initWithActivity:(id)arg0 ;


@end


#endif