// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDINSERTORUPDATESHARINGRELATIONSHIPOPERATION_H
#define HDINSERTORUPDATESHARINGRELATIONSHIPOPERATION_H

@class NSArray;


#import "HDJournalableOperation.h"

@interface HDInsertOrUpdateSharingRelationshipOperation : HDJournalableOperation {
    NSArray *_relationships;
    NSInteger _syncProvenance;
}




+(BOOL)supportsSecureCoding;
-(BOOL)performWithProfile:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;
-(id)initWithCodableSharingRelationships:(id)arg0 syncProvenance:(NSInteger)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif