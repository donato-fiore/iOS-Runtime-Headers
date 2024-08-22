// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXPROACTIVESUGGESTIONSHADOWLOGGINGCONTEXTEVENTTUPLE_H
#define ATXPROACTIVESUGGESTIONSHADOWLOGGINGCONTEXTEVENTTUPLE_H

@class BMStoreEvent;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "ATXProactiveSuggestionShadowLoggingContext.h"

@interface ATXProactiveSuggestionShadowLoggingContextEventTuple : NSObject <NSSecureCoding>



@property (readonly, nonatomic) BMStoreEvent *event; // ivar: _event
@property (readonly, nonatomic) ATXProactiveSuggestionShadowLoggingContext *shadowLoggingContext; // ivar: _shadowLoggingContext


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToATXProactiveSuggestionShadowLoggingContextEventTuple:(id)arg0 ;
-(NSUInteger)hash;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEvent:(id)arg0 shadowLoggingContext:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif