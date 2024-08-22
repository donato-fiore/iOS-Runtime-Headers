// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UICOLLECTIONCOMPOSITIONALLAYOUTSOLVERRESOLVERESULT_H
#define _UICOLLECTIONCOMPOSITIONALLAYOUTSOLVERRESOLVERESULT_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface _UICollectionCompositionalLayoutSolverResolveResult : NSObject {
    NSMutableDictionary *_insertedSupplementaryElementKindIndexPathsDict;
    NSMutableDictionary *_insertedDecorationElementKindIndexPathsDict;
    NSMutableDictionary *_deletedSupplementaryElementKindIndexPathsDict;
    NSMutableDictionary *_deletedDecorationElementKindIndexPathsDict;
}


@property (nonatomic) CGPoint contentOffsetAdjustment; // ivar: _contentOffsetAdjustment
@property (nonatomic) BOOL sectionsWereRequeried; // ivar: _sectionsWereRequeried


-(id)description;
-(id)init;


@end


#endif