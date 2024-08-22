// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSPREPLICAEDITINSERTRECORD_H
#define MSPREPLICAEDITINSERTRECORD_H

@protocol MSPReplicaRecord;


#import "MSPReplicaEdit.h"

@interface MSPReplicaEditInsertRecord : MSPReplicaEdit

@property (readonly, nonatomic) NSObject<MSPReplicaRecord> *recordWithInformationToInsert; // ivar: _recordWithInformationToInsert


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithIdentifierOfAffectedRecord:(id)arg0 ;
-(id)_initWithRecordToInsert:(id)arg0 identifier:(id)arg1 ;
-(id)description;


@end


#endif