// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UICOLLECTIONSECTIONSOLUTIONBOOKMARK_H
#define _UICOLLECTIONSECTIONSOLUTIONBOOKMARK_H

@class NSCollectionLayoutSection;
@protocol _UICollectionLayoutSectionSolver, _UIContentInsetsEnvironment;

#import <Foundation/Foundation.h>

#import "_UICollectionPreferredSizes.h"
#import "_UICompositionalLayoutSolverSectionContainerDescriptor.h"

@interface _UICollectionSectionSolutionBookmark : NSObject {
    id<_UICollectionLayoutSectionSolver> *_solution;
    NSCollectionLayoutSection *_section;
    CGRect _globalFrame;
    CGRect _globalPinningFrame;
    id<_UIContentInsetsEnvironment> *_insetEnvironment;
    id<_UIContentInsetsEnvironment> *_supplementaryInsetEnvironment;
    CGSize _contentSize;
    _UICollectionPreferredSizes *_preferredSizes;
    _UICompositionalLayoutSolverSectionContainerDescriptor *_memoizedContainerDescriptor;
}




-(id)description;


@end


#endif