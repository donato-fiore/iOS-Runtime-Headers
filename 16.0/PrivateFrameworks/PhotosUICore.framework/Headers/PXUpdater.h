// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXUPDATER_H
#define PXUPDATER_H

@class NSMutableIndexSet;

#import <Foundation/Foundation.h>


@interface PXUpdater : NSObject {
    *SEL _orderedUpdateSelectors;
    NSUInteger _orderedUpdateSelectorsCapacity;
    NSUInteger _orderedUpdateSelectorsCount;
    NSMutableIndexSet *_updateSelectorsNeedingUpdate;
    NSMutableIndexSet *_updateSelectorsAlreadyUpdated;
    BOOL _isPerformingUpdates;
    BOOL _hasUpdatedForCurrentPass;
}


@property (nonatomic) BOOL extraChecksEnabled; // ivar: _extraChecksEnabled
@property (nonatomic) SEL needsUpdateSelector; // ivar: _needsUpdateSelector
@property (readonly, weak, nonatomic) id *target; // ivar: _target
@property (nonatomic, getter=isUpdatePassScheduled) BOOL updatePassScheduled; // ivar: _updatePassScheduled


-(id)init;
-(id)initWithTarget:(id)arg0 ;
-(id)initWithTarget:(id)arg0 needsUpdateSelector:(SEL)arg1 ;
-(void)_scheduleUpdatePassIfNeeded;
-(void)addUpdateSelector:(SEL)arg0 ;
-(void)addUpdateSelector:(SEL)arg0 needsUpdate:(BOOL)arg1 ;
-(void)dealloc;
-(void)setNeedsUpdateOf:(SEL)arg0 ;
-(void)updateIfNeeded;


@end


#endif