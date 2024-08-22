// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MSPREPLICAEDITUPDATECONTENTS_H
#define MSPREPLICAEDITUPDATECONTENTS_H

@class NSData;


#import "MSPReplicaEdit.h"
#import "MSPVectorTimestamp.h"

@interface MSPReplicaEditUpdateContents : MSPReplicaEdit

@property (readonly, nonatomic) NSData *contents; // ivar: _contents
@property (readonly, nonatomic) MSPVectorTimestamp *contentsTimestamp; // ivar: _contentsTimestamp


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initToMoveRecordWithIdentifier:(id)arg0 toContents:(id)arg1 contentsTimestamp:(id)arg2 ;
-(id)_initToTurnIntoTombstoneRecordWithIdentifier:(id)arg0 ;
-(id)_initWithIdentifierOfAffectedRecord:(id)arg0 ;
-(id)description;


@end


#endif