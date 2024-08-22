// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXBLENDINGBIOMESTREAMLOGGERCONTEXT_H
#define ATXBLENDINGBIOMESTREAMLOGGERCONTEXT_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "ATXBiomeStreamCacheUpdateContext.h"
#import "ATXScreenLogUnlockSessionContext.h"
#import "ATXSingleSuggestionSessionTrackingContext.h"
#import "ATXStackSystemSuggestTrackingContext.h"

@interface ATXBlendingBiomeStreamLoggerContext : NSObject <NSSecureCoding>



@property (retain, nonatomic) ATXBiomeStreamCacheUpdateContext *cacheUpdateContext; // ivar: _cacheUpdateContext
@property (retain, nonatomic) ATXScreenLogUnlockSessionContext *screenLogUnlockSessionContext; // ivar: _screenLogUnlockSessionContext
@property (retain, nonatomic) ATXSingleSuggestionSessionTrackingContext *sessionTrackingContext; // ivar: _sessionTrackingContext
@property (retain, nonatomic) ATXStackSystemSuggestTrackingContext *stackSuggestTrackingContext; // ivar: _stackSuggestTrackingContext


+(BOOL)supportsSecureCoding;
-(BOOL)checkAndReportDecodingFailureIfNeededForid:(id)arg0 key:(id)arg1 coder:(id)arg2 errorDomain:(id)arg3 errorCode:(NSInteger)arg4 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToATXBlendingBiomeStreamLoggerContext:(id)arg0 ;
-(NSUInteger)hash;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSessionTrackingContext:(id)arg0 cacheUpdateContext:(id)arg1 stackSuggestTrackingContext:(id)arg2 screenLogUnlockSessionContext:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateWithBlendingUICacheUpdate:(id)arg0 ;
-(void)updateWithClientModelCacheUpdate:(id)arg0 ;
-(void)updateWithUIEvent:(id)arg0 ;


@end


#endif