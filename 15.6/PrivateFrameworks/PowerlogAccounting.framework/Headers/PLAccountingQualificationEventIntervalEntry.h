// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLACCOUNTINGQUALIFICATIONEVENTINTERVALENTRY_H
#define PLACCOUNTINGQUALIFICATIONEVENTINTERVALENTRY_H



#import "PLAccountingQualificationEventEntry.h"

@interface PLAccountingQualificationEventIntervalEntry : PLAccountingQualificationEventEntry



+(id)entryKey;
+(int)classDirectionality;
+(void)load;
-(id)initWithQualificationID:(id)arg0 withChildNodeIDs:(id)arg1 withStartDate:(id)arg2 withEndDate:(id)arg3 ;
-(id)initWithQualificationID:(id)arg0 withChildNodeNames:(id)arg1 withStartDate:(id)arg2 withEndDate:(id)arg3 ;


@end


#endif