// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UICOLLECTIONCOMPOSITIONALLAYOUTSOLVERRESOLVERESULT_H
#define _UICOLLECTIONCOMPOSITIONALLAYOUTSOLVERRESOLVERESULT_H

@class NSMutableDictionary, NSString;
@protocol _UICollectionCompositionalLayoutSolverResolveResult;

#import <Foundation/Foundation.h>


@interface _UICollectionCompositionalLayoutSolverResolveResult : NSObject <_UICollectionCompositionalLayoutSolverResolveResult>

 {
    NSMutableDictionary *_insertedSupplementaryElementKindIndexPathsDict;
    NSMutableDictionary *_insertedDecorationElementKindIndexPathsDict;
    NSMutableDictionary *_deletedSupplementaryElementKindIndexPathsDict;
    NSMutableDictionary *_deletedDecorationElementKindIndexPathsDict;
}


@property (nonatomic) CGPoint contentOffsetAdjustment; // ivar: _contentOffsetAdjustment
@property (nonatomic) CGSize contentSizeAdjustment; // ivar: _contentSizeAdjustment
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL sectionsWereRequeried; // ivar: _sectionsWereRequeried
@property (readonly) Class superclass;


-(id)indexPathsForDeletedDecorationsForElementKind:(id)arg0 ;
-(id)indexPathsForDeletedSupplememtariesForElementKind:(id)arg0 ;
-(id)indexPathsForInsertedDecorationsForElementKind:(id)arg0 ;
-(id)indexPathsForInsertedSupplememtariesForElementKind:(id)arg0 ;
-(id)init;


@end


#endif