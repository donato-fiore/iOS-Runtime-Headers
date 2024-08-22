// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VUICOLLECTIONCHANGE_H
#define VUICOLLECTIONCHANGE_H

@class NSIndexSet;

#import <Foundation/Foundation.h>

#import "VUICollectionChangeSet.h"

@interface VUICollectionChange : NSObject

@property (readonly, nonatomic) NSUInteger changeKind; // ivar: _changeKind
@property (readonly, copy, nonatomic) NSIndexSet *destinationIndexes; // ivar: _destinationIndexes
@property (readonly, copy, nonatomic) NSIndexSet *sourceIndexes; // ivar: _sourceIndexes
@property (retain, nonatomic) VUICollectionChangeSet *updateChangeSet; // ivar: _updateChangeSet


-(id)description;
-(id)init;
-(id)initWithChangeKind:(NSUInteger)arg0 sourceIndexes:(id)arg1 destinationIndexes:(id)arg2 ;


@end


#endif