// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDDISMISSEDDRUGINTERACTIONRESULTINSERTOPERATION_H
#define HDDISMISSEDDRUGINTERACTIONRESULTINSERTOPERATION_H

@class HDJournalableOperation, NSArray;



@interface HDDismissedDrugInteractionResultInsertOperation : HDJournalableOperation {
    NSArray *_dismissedResults;
}




+(BOOL)supportsSecureCoding;
-(BOOL)performWithProfile:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDismissedDrugInteractionResults:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif