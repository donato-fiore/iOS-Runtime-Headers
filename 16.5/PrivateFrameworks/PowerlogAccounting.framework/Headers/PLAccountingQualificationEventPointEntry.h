// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLACCOUNTINGQUALIFICATIONEVENTPOINTENTRY_H
#define PLACCOUNTINGQUALIFICATIONEVENTPOINTENTRY_H



#import "PLAccountingQualificationEventEntry.h"

@interface PLAccountingQualificationEventPointEntry : PLAccountingQualificationEventEntry



+(id)entryKey;
+(int)classDirectionality;
+(void)load;
-(id)initWithQualificationID:(id)arg0 withChildNodeNames:(id)arg1 withStartDate:(id)arg2 ;


@end


#endif