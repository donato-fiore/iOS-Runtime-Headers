// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDRECORDSSAVEDLOGEVENT_H
#define HMDRECORDSSAVEDLOGEVENT_H



#import "HMDRecordOperationLogEvent.h"

@interface HMDRecordsSavedLogEvent : HMDRecordOperationLogEvent



+(id)legacyRecordsSaved:(id)arg0 ;
+(id)recordsSaved:(id)arg0 ;
-(id)initWithSavedRecords:(id)arg0 isLegacy:(BOOL)arg1 ;


@end


#endif