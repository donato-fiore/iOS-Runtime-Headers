// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMDATTACHMENTRECORD_H
#define IMDATTACHMENTRECORD_H

@class NSString;
@protocol IMDBridgedRecord;


#import "IMDRecord.h"

@interface IMDAttachmentRecord : IMDRecord <IMDBridgedRecord>



@property (readonly, copy, nonatomic) NSString *filename;
@property (readonly, nonatomic) NSInteger rowID;
@property (readonly, nonatomic) NSInteger transferState;


+(id)allocWithZone:(struct _NSZone *)arg0 ;
-(*void)_fetchUpdatedRecord;
-(NSUInteger)_cfTypeID;
-(id)init;
-(int)_propertyIDForProperty:(NSInteger)arg0 ;
-(struct ? )_propertyDescriptorForProperty:(NSInteger)arg0 ;
-(struct _IMDAttachmentRecordStruct *)cfAttachmentRecord;
-(struct __CFArray *)_localCache;


@end


#endif