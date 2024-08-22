// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMDCHATRECORD_H
#define IMDCHATRECORD_H

@class NSString, NSDictionary;
@protocol IMDBridgedRecord;


#import "IMDRecord.h"

@interface IMDChatRecord : IMDRecord <IMDBridgedRecord>



@property (readonly, copy, nonatomic) NSString *groupID;
@property (readonly, copy, nonatomic) NSString *guid;
@property (readonly, copy, nonatomic) NSDictionary *properties;
@property (readonly, nonatomic) NSInteger rowID;
@property (readonly, copy, nonatomic) NSString *serviceName;


+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)keyPathsToColumns;
-(*void)_fetchUpdatedRecord;
-(?)cfChatRecord;
-(NSUInteger)_cfTypeID;
-(id)init;
-(int)_propertyIDForProperty:(NSInteger)arg0 ;
-(struct ? )_propertyDescriptorForProperty:(NSInteger)arg0 ;
-(struct __CFArray *)_localCache;


@end


#endif