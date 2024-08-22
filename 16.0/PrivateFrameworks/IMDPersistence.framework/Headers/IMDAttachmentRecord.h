// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMDATTACHMENTRECORD_H
#define IMDATTACHMENTRECORD_H

@class NSDictionary, NSString;
@protocol IMDBridgedRecord;


#import "IMDRecord.h"
#import "IMDMessageRecord.h"

@interface IMDAttachmentRecord : IMDRecord <IMDBridgedRecord>



@property (readonly, nonatomic) NSDictionary *attributionInfo;
@property (readonly, nonatomic, getter=isCommSafetySensitive) BOOL commSafetySensitive;
@property (readonly, copy, nonatomic) NSString *guid;
@property (readonly, nonatomic) IMDMessageRecord *messageRecord;
@property (readonly, nonatomic, getter=isOutgoing) BOOL outgoing;
@property (readonly, copy, nonatomic) NSString *path;
@property (readonly, nonatomic) NSInteger rowID;
@property (readonly, nonatomic, getter=isSticker) BOOL sticker;
@property (readonly, copy, nonatomic) NSString *transferName;
@property (readonly, nonatomic) NSInteger transferState;
@property (readonly, copy, nonatomic) NSString *utiString;


+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)keyPathsToColumns;
-(*void)_fetchUpdatedRecord;
-(NSUInteger)_cfTypeID;
-(id)init;
-(int)_propertyIDForProperty:(NSInteger)arg0 ;
-(struct ? )_propertyDescriptorForProperty:(NSInteger)arg0 ;
-(struct _IMDAttachmentRecordStruct *)cfAttachmentRecord;
-(struct __CFArray *)_localCache;


@end


#endif