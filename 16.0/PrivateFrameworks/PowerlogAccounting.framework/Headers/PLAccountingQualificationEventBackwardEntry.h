// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLACCOUNTINGQUALIFICATIONEVENTBACKWARDENTRY_H
#define PLACCOUNTINGQUALIFICATIONEVENTBACKWARDENTRY_H



#import "PLAccountingQualificationEventEntry.h"

@interface PLAccountingQualificationEventBackwardEntry : PLAccountingQualificationEventEntry



+(id)entryKey;
+(int)classDirectionality;
+(void)load;
-(id)initWithQualificationID:(id)arg0 withChildNodeNames:(id)arg1 withEndDate:(id)arg2 ;


@end


#endif