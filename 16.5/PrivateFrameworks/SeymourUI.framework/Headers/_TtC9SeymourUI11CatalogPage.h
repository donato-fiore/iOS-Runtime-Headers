// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC9SEYMOURUI11CATALOGPAGE_H
#define _TTC9SEYMOURUI11CATALOGPAGE_H

@class UICollectionView;

#import <Foundation/Foundation.h>


@interface _TtC9SeymourUI11CatalogPage : NSObject {
    ? delegate;
    ? dataSource;
    ? shouldAutomaticallyDeselectItem;
    ? currentSnapshotBacking;
    ? previousSnapshotBacking;
    ? collectionView;
    ? identifier;
    ? impressionsTracker;
    ? layoutSections;
    ? locationStore;
    ? platform;
    ? shelves;
    ? pendingUpdatesCount;
    ? registrationProviderByShelfID;
    ? snapshotTimestamps;
    ? shelfOffsetPerLayoutSection;
    ? storefrontRTLHandlingCellsFlag;
    ? viewFactory;
}


@property (nonatomic, readonly) UICollectionView *accessibilityCollectionView;


-(id)init;


@end


#endif