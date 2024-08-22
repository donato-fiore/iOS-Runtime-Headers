// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDDISCARDWORKOUTOPERATION_H
#define HDDISCARDWORKOUTOPERATION_H

@class NSUUID;


#import "HDJournalableOperation.h"

@interface HDDiscardWorkoutOperation : HDJournalableOperation

@property (readonly, copy, nonatomic) NSUUID *builderIdentifier; // ivar: _builderIdentifier


-(BOOL)performWithProfile:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;
-(id)initWithBuilderIdentifier:(id)arg0 ;


@end


#endif