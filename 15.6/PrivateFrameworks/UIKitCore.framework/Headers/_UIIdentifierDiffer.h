// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIIDENTIFIERDIFFER_H
#define _UIIDENTIFIERDIFFER_H

@class NSOrderedSet, NSIndexSet, NSSet, NSOrderedCollectionDifference, NSString;
@protocol _UIIdentifierDiffer;

#import <Foundation/Foundation.h>


@interface _UIIdentifierDiffer : NSObject <_UIIdentifierDiffer>

 {
    NSOrderedSet *_beforeIdentifiers;
    NSOrderedSet *_afterIdentifiers;
    NSIndexSet *_insertedIndexes;
    NSIndexSet *_deletedIndexes;
    NSSet *_movePairs;
    BOOL _identifiersAreUnique;
    NSOrderedCollectionDifference *_collectionDifference;
}


@property (readonly, nonatomic) NSOrderedSet *afterIdentifiers;
@property (readonly, nonatomic) NSOrderedSet *beforeIdentifiers;
@property (readonly, nonatomic) NSOrderedCollectionDifference *collectionDifference;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSIndexSet *deletedIndexes;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasChanges;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSIndexSet *insertedIndexes;
@property (readonly, nonatomic) NSSet *movePairs;
@property (readonly) Class superclass;


-(id)initWithBeforeIdentifiers:(id)arg0 afterIdentifiers:(id)arg1 ;
-(id)initWithBeforeIdentifiers:(id)arg0 afterIdentifiers:(id)arg1 collectionDifference:(id)arg2 ;
-(void)_performDiffWithOptions:(NSInteger)arg0 ;
-(void)_performFoundationDiffWithOptions:(NSInteger)arg0 ;
-(void)_performHeckelDiffWithOptions:(NSInteger)arg0 ;
-(void)_prepareDiffResultsFromCollectionDifference:(id)arg0 ;
-(void)performDiff;
-(void)performDiffWithOptions:(NSInteger)arg0 ;


@end


#endif