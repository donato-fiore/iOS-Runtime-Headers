// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPCHARSEQUENCE_H
#define CPCHARSEQUENCE_H

@protocol NSCopying, CPCopying, CPDisposable;

#import <Foundation/Foundation.h>

#import "CPMemoryOwner.h"

@interface CPCharSequence : NSObject <NSCopying, CPCopying, CPDisposable>

 {
    unsigned int length;
    ? charArray;
    unsigned int previousSize;
    unsigned int size;
    CPMemoryOwner *sharedMemory;
    BOOL wasMerged;
}




-(?)addChar;
-(?)addChars:(?)arg0 length:(?)arg1 ifTruepassing;
-(?)addCharslength;
-(?)charArray;
-(?)initWithCharslength;
-(?)replaceCharAtIndexwithChar;
-(BOOL)map:(*unk)arg0 passing:(*void)arg1 ;
-(BOOL)map:(*unk)arg0 whereNeighborsWith:(id)arg1 passing:(*void)arg2 ;
-(BOOL)mapToPairs:(*unk)arg0 passing:(*void)arg1 ;
-(BOOL)mapToPairsWithIndex:(*unk)arg0 passing:(*void)arg1 ;
-(BOOL)mapWithIndex:(*unk)arg0 from:(unsigned int)arg1 length:(unsigned int)arg2 passing:(*void)arg3 ;
-(BOOL)mapWithIndex:(*unk)arg0 passing:(*void)arg1 ;
-(BOOL)removeSubsequences:(id)arg0 whereTrue:(*unk)arg1 passing:(*void)arg2 ;
-(BOOL)removeToSubsequence:(id)arg0 ifTrue:(*unk)arg1 passing:(*void)arg2 ;
-(BOOL)wasMerged;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initSuper;
-(id)initWithSizeFor:(unsigned int)arg0 ;
-(id)newSubsequenceFrom:(unsigned int)arg0 length:(unsigned int)arg1 ;
-(struct CGRect )bounds;
-(struct CGRect )boundsFrom:(unsigned int)arg0 length:(unsigned int)arg1 ;
-(struct CPPDFChar *)charAtIndex:(unsigned int)arg0 ;
-(unsigned int)length;
-(void)addCharsFromSequence:(id)arg0 ;
-(void)copyToSubsequence:(id)arg0 from:(unsigned int)arg1 length:(unsigned int)arg2 ;
-(void)copyToSubsequence:(id)arg0 ifTrue:(*unk)arg1 passing:(*void)arg2 ;
-(void)dealloc;
-(void)dispose;
-(void)finalize;
-(void)merge:(id)arg0 by:(*unk)arg1 ;
-(void)mergeByAnchorXIncreasingYDecreasing:(id)arg0 ;
-(void)mergeByAnchorYDecreasingXIncreasing:(id)arg0 ;
-(void)removeAllChars;
-(void)removeChar;
-(void)removeCharAtIndex:(unsigned int)arg0 ;
-(void)removeFrom:(unsigned int)arg0 ;
-(void)resize:(unsigned int)arg0 ;
-(void)sortBy:(*unk)arg0 ;
-(void)sortByAnchorXIncreasingYDecreasing;
-(void)sortByAnchorYDecreasingXIncreasing;
-(void)splitToSubsequences:(id)arg0 whereTrue:(*unk)arg1 passing:(*void)arg2 ;


@end


#endif