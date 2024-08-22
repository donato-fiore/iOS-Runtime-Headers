// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMDCHATRECORD_H
#define IMDCHATRECORD_H

@class NSString, NSArray, NSDictionary;
@protocol IMDBridgedRecord;


#import "IMDRecord.h"
#import "IMDMessageRecord.h"

@interface IMDChatRecord : IMDRecord <IMDBridgedRecord>



@property (readonly, copy, nonatomic) NSString *cloudKitRecordID;
@property (readonly, copy, nonatomic) NSString *groupID;
@property (readonly, copy, nonatomic) NSString *groupName;
@property (readonly, copy, nonatomic) NSString *guid;
@property (readonly, nonatomic) NSArray *handleRecords;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) IMDMessageRecord *lastMessageRecord;
@property (readonly, copy, nonatomic) NSDictionary *properties;
@property (readonly, nonatomic, getter=isRecovered) BOOL recovered;
@property (readonly, nonatomic) NSInteger rowID;
@property (readonly, copy, nonatomic) NSString *serviceName;


+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)keyPathsToColumns;
-(*void)_fetchUpdatedRecord;
-(NSUInteger)_cfTypeID;
-(id)init;
-(int)_propertyIDForProperty:(NSInteger)arg0 ;
-(struct ? )_propertyDescriptorForProperty:(NSInteger)arg0 ;
-(struct _IMDChatRecordStruct *)cfChatRecord;
-(struct __CFArray *)_localCache;


@end


#endif