// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDCONCEPTINDEXRESETOPERATION_H
#define HDCONCEPTINDEXRESETOPERATION_H



#import "HDJournalableOperation.h"

@interface HDConceptIndexResetOperation : HDJournalableOperation



+(BOOL)supportsSecureCoding;
-(BOOL)performWithProfile:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif