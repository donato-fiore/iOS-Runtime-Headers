// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RLMCOLLECTIONCHANGE_H
#define RLMCOLLECTIONCHANGE_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface RLMCollectionChange : NSObject {
    CollectionChangeSet _indices;
}


@property (readonly, nonatomic) NSArray *deletions;
@property (readonly, nonatomic) NSArray *insertions;
@property (readonly, nonatomic) NSArray *modifications;


-(id)deletionsInSection:(NSUInteger)arg0 ;
-(id)initWithChanges:(struct CollectionChangeSet )arg0 ;
-(id)insertionsInSection:(NSUInteger)arg0 ;
-(id)modificationsInSection:(NSUInteger)arg0 ;


@end


#endif