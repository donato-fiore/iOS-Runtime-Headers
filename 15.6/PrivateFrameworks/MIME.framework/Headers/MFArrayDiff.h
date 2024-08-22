// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MFARRAYDIFF_H
#define MFARRAYDIFF_H

@class NSIndexSet;

#import <Foundation/Foundation.h>


@interface MFArrayDiff : NSObject

@property (retain, nonatomic) NSIndexSet *addedIndexes; // ivar: _addedIndexes
@property (retain, nonatomic) NSIndexSet *commonIndexes; // ivar: _commonIndexes
@property (retain, nonatomic) NSIndexSet *removedIndexes; // ivar: _removedIndexes


-(id)debugDescription;


@end


#endif