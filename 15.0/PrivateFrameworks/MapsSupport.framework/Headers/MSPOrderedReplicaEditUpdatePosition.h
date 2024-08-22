// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MSPORDEREDREPLICAEDITUPDATEPOSITION_H
#define MSPORDEREDREPLICAEDITUPDATEPOSITION_H



#import "MSPReplicaEdit.h"
#import "MSPPosition.h"
#import "MSPVectorTimestamp.h"

@interface MSPOrderedReplicaEditUpdatePosition : MSPReplicaEdit

@property (readonly, nonatomic) MSPPosition *position; // ivar: _position
@property (readonly, nonatomic) MSPVectorTimestamp *positionTimestamp; // ivar: _positionTimestamp


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initToMoveRecordWithIdentifier:(id)arg0 toPosition:(id)arg1 positionTimestamp:(id)arg2 ;
-(id)_initWithIdentifierOfAffectedRecord:(id)arg0 ;
-(id)description;


@end


#endif