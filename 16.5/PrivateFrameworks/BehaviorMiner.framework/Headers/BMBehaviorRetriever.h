// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMBEHAVIORRETRIEVER_H
#define BMBEHAVIORRETRIEVER_H


#import <Foundation/Foundation.h>

#import "BMBehaviorStorage.h"

@interface BMBehaviorRetriever : NSObject

@property (nonatomic) NSUInteger fetchLimit; // ivar: _fetchLimit
@property (retain, nonatomic) BMBehaviorStorage *storage; // ivar: _storage


-(id)init;
-(id)initWithURL:(id)arg0 ;
-(id)initWithURL:(id)arg0 taskSpecificItemTypes:(id)arg1 ;
-(id)retrieveRulesWithAbsoluteSupport:(NSUInteger)arg0 support:(CGFloat)arg1 confidence:(CGFloat)arg2 conviction:(CGFloat)arg3 lift:(CGFloat)arg4 rulePowerFactor:(CGFloat)arg5 uniqueDaysLastWeek:(NSUInteger)arg6 uniqueDaysTotal:(NSUInteger)arg7 filters:(id)arg8 error:(*id)arg9 ;
-(id)retrieveRulesWithFilters:(id)arg0 ;
-(id)retrieveRulesWithSupport:(CGFloat)arg0 confidence:(CGFloat)arg1 filters:(id)arg2 ;
-(id)retrieveRulesWithSupport:(CGFloat)arg0 confidence:(CGFloat)arg1 filters:(id)arg2 error:(*id)arg3 ;


@end


#endif