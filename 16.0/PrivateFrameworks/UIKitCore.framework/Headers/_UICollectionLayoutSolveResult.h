// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UICOLLECTIONLAYOUTSOLVERESULT_H
#define _UICOLLECTIONLAYOUTSOLVERESULT_H

@class NSMutableIndexSet, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface _UICollectionLayoutSolveResult : NSObject {
    NSMutableIndexSet *_invalidatedIndexes;
    NSMutableDictionary *_invalidatedAuxillaryIndexesDict;
}




-(id)init;


@end


#endif