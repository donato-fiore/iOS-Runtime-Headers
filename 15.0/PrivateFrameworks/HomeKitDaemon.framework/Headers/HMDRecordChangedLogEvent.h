// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDRECORDCHANGEDLOGEVENT_H
#define HMDRECORDCHANGEDLOGEVENT_H



#import "HMDRecordOperationLogEvent.h"

@interface HMDRecordChangedLogEvent : HMDRecordOperationLogEvent



+(id)legacyRecordChanged:(id)arg0 ;
+(id)recordChanged:(id)arg0 ;
-(id)initWithChangedRecord:(id)arg0 isLegacy:(BOOL)arg1 ;


@end


#endif