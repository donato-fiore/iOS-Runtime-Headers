// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UICOLLECTIONCOMPOSITIONALLAYOUTSOLVERUPDATE_H
#define _UICOLLECTIONCOMPOSITIONALLAYOUTSOLVERUPDATE_H

@class NSArray;
@protocol _UICollectionViewUpdateTranslating;

#import <Foundation/Foundation.h>

#import "_UIDataSourceSnapshotter.h"

@interface _UICollectionCompositionalLayoutSolverUpdate : NSObject {
    NSArray *_updateItems;
    id<_UICollectionViewUpdateTranslating> *_updateTranslator;
    _UIDataSourceSnapshotter *_finalDataSourceSnapshot;
    CGRect _visibleBounds;
}






@end


#endif