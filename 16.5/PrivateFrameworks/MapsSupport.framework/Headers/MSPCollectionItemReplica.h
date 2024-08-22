// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSPCOLLECTIONITEMREPLICA_H
#define MSPCOLLECTIONITEMREPLICA_H

@class NSArray, NSString;
@protocol MSPContainerStateSnapshot, NSCopying;


#import "MSPOrderedReplica.h"

@interface MSPCollectionItemReplica : MSPOrderedReplica <MSPContainerStateSnapshot, NSCopying>



@property (readonly, copy, nonatomic) NSArray *contents;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)itemReplicaWithData:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)data;
-(id)replicaByMergingWithReplica:(id)arg0 mergeOptions:(id)arg1 userVisibleEffectiveContentsChanged:(*BOOL)arg2 ;


@end


#endif