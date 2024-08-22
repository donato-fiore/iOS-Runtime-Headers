// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UICOLLECTIONSECTIONSOLUTIONBOOKMARK_H
#define _UICOLLECTIONSECTIONSOLUTIONBOOKMARK_H

@protocol _UICollectionLayoutSectionSolver, _UIContentInsetsEnvironment;

#import <Foundation/Foundation.h>

#import "NSCollectionLayoutSection.h"
#import "_UICollectionPreferredSizes.h"

@interface _UICollectionSectionSolutionBookmark : NSObject {
    id<_UICollectionLayoutSectionSolver> *_solution;
    NSCollectionLayoutSection *_section;
    CGRect _globalFrame;
    CGRect _globalPinningFrame;
    id<_UIContentInsetsEnvironment> *_insetEnvironment;
    CGSize _contentSize;
    _UICollectionPreferredSizes *_preferredSizes;
}




-(id)description;


@end


#endif