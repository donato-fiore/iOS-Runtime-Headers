// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBRECENTDISPLAYITEMSDATASTORE_H
#define SBRECENTDISPLAYITEMSDATASTORE_H

@class NSArray, NSOrderedSet;
@protocol SBRecentDisplayItemsPersistenceDelegate;

#import <Foundation/Foundation.h>


@interface SBRecentDisplayItemsDataStore : NSObject {
    NSArray *_recentLayouts;
    BOOL _shouldFallbackToRecentAppLayouts;
}


@property (copy, nonatomic) NSOrderedSet *displayItems;
@property (weak, nonatomic) NSObject<SBRecentDisplayItemsPersistenceDelegate> *persistenceDelegate; // ivar: _persistenceDelegate


-(id)_displayItemsFromRecentAppLayouts:(id)arg0 ;
-(id)init;
-(id)initWithRecentLayouts:(id)arg0 fallbackToRecentAppLayouts:(BOOL)arg1 ;


@end


#endif