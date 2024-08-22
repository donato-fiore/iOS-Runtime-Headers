// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGCURATOR_H
#define PGCURATOR_H

@protocol OS_os_log;

#import <Foundation/Foundation.h>


@interface PGCurator : NSObject

@property (retain, nonatomic) NSObject<OS_os_log> *loggingConnection; // ivar: _loggingConnection


+(NSUInteger)maximumNumberOfItemsToElectWithTotalNumberOfItems:(NSUInteger)arg0 spanningNumberOfDays:(CGFloat)arg1 options:(id)arg2 ;
+(NSUInteger)numberOfExtraItemsNeededWithNumberOfChosenItems:(NSUInteger)arg0 totalNumberOfItems:(NSUInteger)arg1 options:(id)arg2 ;
+(NSUInteger)numberOfItemsToShaveOffWithNumberOfItems:(NSUInteger)arg0 maximumNumberOfItems:(NSUInteger)arg1 options:(id)arg2 ;
-(CGFloat)evaluatedDurationWithItems:(id)arg0 options:(id)arg1 ;
-(CGFloat)maximumDurationWithItems:(id)arg0 options:(id)arg1 ;
-(NSUInteger)targetDurationBasedNumberOfItemsToElectFromItems:(id)arg0 options:(id)arg1 ;
-(id)bestItemIdentifiersWithItems:(id)arg0 options:(id)arg1 debugInfo:(*id)arg2 ;
-(id)bestItemsForFeeder:(id)arg0 options:(id)arg1 debugInfo:(id)arg2 progressBlock:(id)arg3 ;
-(id)completedItems:(id)arg0 withNumberOfItems:(NSUInteger)arg1 fromAllItems:(id)arg2 avoidingItems:(id)arg3 options:(id)arg4 debugInfo:(id)arg5 progressBlock:(id)arg6 ;
-(id)deduplicatedItems:(id)arg0 options:(id)arg1 debugInfo:(id)arg2 progressBlock:(id)arg3 ;
-(id)defaultItemSortDescriptors;
-(id)focusedItemsInItems:(id)arg0 withOptions:(id)arg1 ;
-(id)init;
-(id)newMovieDeduperWithOptions:(id)arg0 ;
-(id)newSemanticalDeduperWithOptions:(id)arg0 ;
-(id)shaveItems:(id)arg0 downToNumberOfItems:(NSUInteger)arg1 options:(id)arg2 debugInfo:(id)arg3 progressBlock:(id)arg4 ;
-(id)summarizedItemsFromCluster:(id)arg0 withBeautifier:(id)arg1 debugInfo:(id)arg2 progressBlock:(id)arg3 ;
-(void)_checkRequiredItemsWithIdentifiers:(id)arg0 inItems:(id)arg1 ;
-(void)completeItems:(id)arg0 withFavoriteItemsFromItems:(id)arg1 upToNumberOfItems:(NSUInteger)arg2 debugInfo:(id)arg3 progressBlock:(id)arg4 ;
-(void)completeItems:(id)arg0 withItems:(id)arg1 forPersonLocalIdentifiers:(id)arg2 options:(id)arg3 nonRemovableItems:(id)arg4 debugInfo:(id)arg5 progressBlock:(id)arg6 ;
-(void)lastPassToCompleteItems:(id)arg0 fromFeeder:(id)arg1 options:(id)arg2 maximumNumberOfItems:(NSUInteger)arg3 debugInfo:(id)arg4 ;


@end


#endif