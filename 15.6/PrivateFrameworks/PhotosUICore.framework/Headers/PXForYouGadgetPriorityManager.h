// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXFORYOUGADGETPRIORITYMANAGER_H
#define PXFORYOUGADGETPRIORITYMANAGER_H

@class NSDate, NSMutableDictionary;
@protocol PXGadgetRankStorage;

#import <Foundation/Foundation.h>


@interface PXForYouGadgetPriorityManager : NSObject

@property (retain, nonatomic) NSDate *baseNewDate; // ivar: _baseNewDate
@property (readonly, nonatomic) NSMutableDictionary *currentEntries; // ivar: _currentEntries
@property (nonatomic) BOOL needsSorting; // ivar: _needsSorting
@property (nonatomic) NSInteger nestedRegistration; // ivar: _nestedRegistration
@property (readonly, nonatomic) NSObject<PXGadgetRankStorage> *rankStorage; // ivar: _rankStorage
@property (nonatomic) NSInteger sortingAlgorithm; // ivar: _sortingAlgorithm


-(BOOL)invalidateRanks;
-(NSInteger)rankForGadgetType:(NSUInteger)arg0 ;
-(id)_sortingKeyForOldEntries;
-(id)initWithStorage:(id)arg0 ;
-(void)_persistSortedEntries:(id)arg0 ;
-(void)_sortCurrentEntries;
-(void)_sortCurrentEntriesIfNeeded;
-(void)_splitCurrentEntriesIntoNew:(id)arg0 andOld:(id)arg1 ;
-(void)endRegistration;
-(void)registerRankable:(id)arg0 ;
-(void)resetToDefaultPriorities;
-(void)startRegistration;


@end


#endif