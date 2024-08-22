// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNCALCULATESMULTIVALUEDIFF_H
#define CNCALCULATESMULTIVALUEDIFF_H

@class NSArray, NSOrderedSet, NSMutableOrderedSet, NSMutableArray;

#import <Foundation/Foundation.h>


@interface CNCalculatesMultiValueDiff : NSObject {
    NSArray *_multiValue1;
    NSArray *_multiValue2;
    NSOrderedSet *_originalIdentifiers;
    NSOrderedSet *_finalIdentifiers;
    NSMutableOrderedSet *_addedIdentifiers;
    NSMutableOrderedSet *_removedIdentifiers;
    NSMutableOrderedSet *_sameIdentifiers;
    NSMutableOrderedSet *_calculatedFinalIdentifiers;
    NSMutableArray *_updates;
}




+(id)diffMultiValue:(id)arg0 toMultiValue:(id)arg1 ;
-(id)initWithMultiValue1:(id)arg0 multiValue2:(id)arg1 ;
-(id)updates;
-(void)appendAddUpdates;
-(void)appendRemoveUpdates;
-(void)appendReorderUpdates;
-(void)appendReplaceUpdates;
-(void)calculateDiff;
-(void)setupAddedIdentifiers;
-(void)setupCalculatedFinalIdentifiers;
-(void)setupFinalIdentifiers;
-(void)setupOriginalIdentifiers;
-(void)setupRemovedIdentifiers;
-(void)setupSameIdentifiers;


@end


#endif