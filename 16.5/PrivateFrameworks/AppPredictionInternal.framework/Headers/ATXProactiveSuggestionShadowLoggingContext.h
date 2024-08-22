// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXPROACTIVESUGGESTIONSHADOWLOGGINGCONTEXT_H
#define ATXPROACTIVESUGGESTIONSHADOWLOGGINGCONTEXT_H

@class NSMutableDictionary, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "ATXPredictionContext.h"

@interface ATXProactiveSuggestionShadowLoggingContext : NSObject <NSSecureCoding>

 {
    NSMutableDictionary *_clientModelCacheUpdates;
}


@property (readonly, nonatomic) NSDictionary *clientModelCacheUpdates;
@property (readonly, nonatomic) ATXPredictionContext *context; // ivar: _context


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToATXProactiveSuggestionShadowLoggingContext:(id)arg0 ;
-(NSUInteger)hash;
-(id)init;
-(id)initWithClientModelCacheUpdates:(id)arg0 context:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateWithClientModelCacheUpdate:(id)arg0 ;
-(void)updateWithContext:(id)arg0 ;


@end


#endif