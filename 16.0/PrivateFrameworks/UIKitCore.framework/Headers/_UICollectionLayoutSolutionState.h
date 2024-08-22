// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UICOLLECTIONLAYOUTSOLUTIONSTATE_H
#define _UICOLLECTIONLAYOUTSOLUTIONSTATE_H

@class NSArray, NSDictionary;

#import <Foundation/Foundation.h>

#import "_UICollectionLayoutSectionGeometryTranslator.h"
#import "_UIRTree.h"
#import "_UIOrderedRangeIndexer.h"

@interface _UICollectionLayoutSolutionState : NSObject {
    _UICollectionLayoutSectionGeometryTranslator *_sectionGeometryTranslator;
    NSArray *_bookmarks;
    _UIRTree *_geometricIndexer;
    _UIOrderedRangeIndexer *_itemRangeIndexer;
    NSDictionary *_auxillaryRangeIndexerKindDict;
}




-(id)description;


@end


#endif