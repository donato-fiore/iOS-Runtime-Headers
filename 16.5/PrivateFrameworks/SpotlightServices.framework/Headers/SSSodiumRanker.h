// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSSODIUMRANKER_H
#define SSSODIUMRANKER_H


#import <Foundation/Foundation.h>


@interface SSSodiumRanker : NSObject

@property (nonatomic) float freshnessWeight; // ivar: _freshnessWeight
@property (nonatomic) float textScoreWeight; // ivar: _textScoreWeight


-(CGFloat)_computeFreshnessScore:(CGFloat)arg0 withQueryTime:(CGFloat)arg1 ;
-(NSInteger)compare:(id)arg0 to:(id)arg1 currentTime:(CGFloat)arg2 ;
-(id)init;
-(void)sortAndFilterRankedItems:(id)arg0 maxCount:(NSInteger)arg1 bundleID:(id)arg2 userQuery:(id)arg3 queryID:(NSInteger)arg4 currentTime:(CGFloat)arg5 ;
-(void)updateScoresForItems:(id)arg0 withBundle:(id)arg1 userQuery:(id)arg2 currentTime:(CGFloat)arg3 ;


@end


#endif