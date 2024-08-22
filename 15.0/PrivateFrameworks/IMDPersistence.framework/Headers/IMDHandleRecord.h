// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMDHANDLERECORD_H
#define IMDHANDLERECORD_H



#import "IMDRecord.h"

@interface IMDHandleRecord : IMDRecord



+(id)allocWithZone:(struct _NSZone *)arg0 ;
-(NSUInteger)_cfTypeID;
-(id)init;
-(struct _IMDHandleRecordStruct *)cfHandleRecord;


@end


#endif