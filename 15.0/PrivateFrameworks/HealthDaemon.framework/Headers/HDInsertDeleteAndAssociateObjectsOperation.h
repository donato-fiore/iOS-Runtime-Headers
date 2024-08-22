// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDINSERTDELETEANDASSOCIATEOBJECTSOPERATION_H
#define HDINSERTDELETEANDASSOCIATEOBJECTSOPERATION_H

@class NSDictionary, NSArray;


#import "HDJournalableOperation.h"

@interface HDInsertDeleteAndAssociateObjectsOperation : HDJournalableOperation

@property (readonly, copy, nonatomic) NSDictionary *associations; // ivar: _associations
@property (readonly, copy, nonatomic) NSArray *objectsToDelete; // ivar: _objectsToDelete
@property (readonly, copy, nonatomic) NSDictionary *objectsToInsertByDataProvenance; // ivar: _objectsToInsertByDataProvenance


+(BOOL)supportsSecureCoding;
-(BOOL)performWithProfile:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithObjectsToInsertByDataProvenance:(id)arg0 objectsToDelete:(id)arg1 associations:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif