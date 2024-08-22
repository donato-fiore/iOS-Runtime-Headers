// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXSTACKSYSTEMSUGGESTTRACKINGCONTEXT_H
#define ATXSTACKSYSTEMSUGGESTTRACKINGCONTEXT_H

@class NSMutableArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "ATXStackRotationSessionManager.h"

@interface ATXStackSystemSuggestTrackingContext : NSObject <NSSecureCoding>



@property (readonly, nonatomic) ATXStackRotationSessionManager *sessionManager; // ivar: _sessionManager
@property (readonly, nonatomic) NSMutableArray *systemSuggestBlendingCaches; // ivar: _systemSuggestBlendingCaches


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToATXStackSystemSuggestTrackingContext:(id)arg0 ;
-(NSUInteger)hash;
-(id)blendingCacheWithUUID:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRotationSessionManager:(id)arg0 systemSuggestBlendingCaches:(id)arg1 ;
-(id)removeAllAndReturnCompletedSystemSuggestSessions;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateWithBlendingUICacheUpdate:(id)arg0 ;
-(void)updateWithClientModelCacheUpdate:(id)arg0 ;
-(void)updateWithUIEvent:(id)arg0 ;


@end


#endif