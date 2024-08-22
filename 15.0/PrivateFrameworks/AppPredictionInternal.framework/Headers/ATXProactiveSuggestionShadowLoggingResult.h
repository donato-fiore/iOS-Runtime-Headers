// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXPROACTIVESUGGESTIONSHADOWLOGGINGRESULT_H
#define ATXPROACTIVESUGGESTIONSHADOWLOGGINGRESULT_H

@class ATXClientModelCacheUpdate, NSDate;
@protocol NSSecureCoding, BMStoreData;

#import <Foundation/Foundation.h>

#import "ATXPredictionContext.h"

@interface ATXProactiveSuggestionShadowLoggingResult : NSObject <NSSecureCoding>



@property (readonly, nonatomic) ATXClientModelCacheUpdate *clientModelCacheUpdate; // ivar: _clientModelCacheUpdate
@property (readonly, nonatomic) ATXPredictionContext *context; // ivar: _context
@property (readonly, nonatomic) NSObject<BMStoreData> *shadowEvent; // ivar: _shadowEvent
@property (readonly, nonatomic) NSDate *shadowEventDate; // ivar: _shadowEventDate


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToATXProactiveSuggestionShadowLoggingResult:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithShadowEvent:(id)arg0 shadowEventDate:(id)arg1 clientModelCacheUpdate:(id)arg2 context:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif