// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCHPROPERTYMUTATIONINDIRECTTUPLE_H
#define TSCHPROPERTYMUTATIONINDIRECTTUPLE_H



#import "TSCHPropertyMutationTuple.h"

@interface TSCHPropertyMutationIndirectTuple : TSCHPropertyMutationTuple

@property (readonly, nonatomic) NSUInteger index; // ivar: _styleOwnerIndex
@property (readonly, nonatomic) int type; // ivar: _styleOwnerType


-(id)indirectTuple;
-(id)initWithStyleOwner:(id)arg0 mutations:(id)arg1 ;
-(id)initWithStyleOwnerType:(int)arg0 index:(NSUInteger)arg1 inChart:(id)arg2 mutations:(id)arg3 ;
-(id)styleOwner;
-(id)styleOwnerRef;


@end


#endif