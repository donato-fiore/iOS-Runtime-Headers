// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRKORDEREDONETOMANYKVOACCUMULATORRESULTS_H
#define CRKORDEREDONETOMANYKVOACCUMULATORRESULTS_H

@class NSIndexSet, NSArray;

#import <Foundation/Foundation.h>


@interface CRKOrderedOneToManyKVOAccumulatorResults : NSObject

@property (retain, nonatomic) NSIndexSet *deletions; // ivar: _deletions
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (retain, nonatomic) NSIndexSet *insertions; // ivar: _insertions
@property (retain, nonatomic) NSArray *moves; // ivar: _moves
@property (readonly, nonatomic) NSInteger netCountChange;
@property (retain, nonatomic) NSIndexSet *replacements; // ivar: _replacements


-(id)description;
-(id)resultsByExcludingLocalDeletions:(id)arg0 ;


@end


#endif