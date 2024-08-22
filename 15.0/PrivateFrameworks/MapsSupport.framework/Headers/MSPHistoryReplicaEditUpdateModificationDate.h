// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MSPHISTORYREPLICAEDITUPDATEMODIFICATIONDATE_H
#define MSPHISTORYREPLICAEDITUPDATEMODIFICATIONDATE_H

@class NSDate;


#import "MSPReplicaEditRemoveTombstone.h"

@interface MSPHistoryReplicaEditUpdateModificationDate : MSPReplicaEditRemoveTombstone

@property (readonly, nonatomic) NSDate *modificationDate; // ivar: _modificationDate


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initToMoveRecordWithIdentifier:(id)arg0 toModificationDate:(id)arg1 ;
-(id)_initWithIdentifierOfAffectedRecord:(id)arg0 ;
-(id)description;


@end


#endif