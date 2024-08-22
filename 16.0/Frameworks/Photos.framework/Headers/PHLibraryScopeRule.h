// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHLIBRARYSCOPERULE_H
#define PHLIBRARYSCOPERULE_H

@class PLLibraryScopeRule;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PHLibraryScopeRule : NSObject <NSCopying>



@property (readonly, nonatomic) PLLibraryScopeRule *plRepresentation;
@property (retain, nonatomic) PLLibraryScopeRule *proxyObject; // ivar: _proxyObject


+(BOOL)generateDefaultRulesForLibraryScope:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
+(NSUInteger)estimatedAssetCountForRules:(id)arg0 autoSharePolicy:(short)arg1 imageCount:(*NSUInteger)arg2 videoCount:(*NSUInteger)arg3 audioCount:(*NSUInteger)arg4 itemCount:(*NSUInteger)arg5 options:(id)arg6 error:(*id)arg7 ;
+(id)_estimatedAssetsForRules:(id)arg0 autoSharePolicy:(short)arg1 options:(id)arg2 error:(*id)arg3 ;
+(id)dataFromRules:(id)arg0 ;
+(id)fetchLibraryScopeRulesForLibraryScope:(id)arg0 options:(id)arg1 ;
+(id)suggestedStartDateForRules:(id)arg0 autoSharePolicy:(short)arg1 options:(id)arg2 error:(*id)arg3 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dateRangeCondition;
-(id)description;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)init;
-(id)initWithProxyObject:(id)arg0 ;
-(id)initWithQuery:(id)arg0 ;
-(id)personCondition;
-(id)unknownConditions;
-(void)addCondition:(id)arg0 ;
-(void)removeConditionOfType:(Class)arg0 ;


@end


#endif