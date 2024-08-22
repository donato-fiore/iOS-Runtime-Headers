// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UICOLLECTIONLAYOUTSOLVERESULT_H
#define _UICOLLECTIONLAYOUTSOLVERESULT_H

@class NSMutableIndexSet, NSMutableDictionary, NSString, NSSet, NSIndexSet;
@protocol _UICollectionLayoutSolveResult;

#import <Foundation/Foundation.h>


@interface _UICollectionLayoutSolveResult : NSObject <_UICollectionLayoutSolveResult>

 {
    NSMutableIndexSet *_invalidatedIndexes;
    NSMutableDictionary *_invalidatedAuxillaryIndexesDict;
}


@property (nonatomic) CGPoint contentOffsetAdjustment; // ivar: _contentOffsetAdjustment
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSSet *invalidatedAuxillaryKinds;
@property (readonly, nonatomic) NSIndexSet *invalidatedIndexes;
@property (readonly) Class superclass;


-(id)indexesForInvalidatedAuxillariesOfKind:(id)arg0 ;
-(id)init;
-(id)invalidatedAuxillaryOffsets;


@end


#endif