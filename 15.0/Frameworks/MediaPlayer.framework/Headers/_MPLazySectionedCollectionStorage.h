// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MPLAZYSECTIONEDCOLLECTIONSTORAGE_H
#define _MPLAZYSECTIONEDCOLLECTIONSTORAGE_H

@class NSCache;

#import <Foundation/Foundation.h>


@interface _MPLazySectionedCollectionStorage : NSObject {
    vector<long, std::allocator<long>> _cachedNumberOfItemsInSections;
    NSInteger _cachedNumberOfSections;
    BOOL _hasValidCachedNumberOfSections;
    NSCache *_itemsCache;
    map<long, MPIdentifierSet *, std::less<long>, std::allocator<std::pair<const long, MPIdentifierSet *>>> _itemIdentifierSetMap;
    NSCache *_sectionsCache;
    map<long, MPIdentifierSet *, std::less<long>, std::allocator<std::pair<const long, MPIdentifierSet *>>> _sectionIdentifierSetMap;
}






@end


#endif