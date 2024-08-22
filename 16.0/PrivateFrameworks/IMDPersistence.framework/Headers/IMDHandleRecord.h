// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMDHANDLERECORD_H
#define IMDHANDLERECORD_H

@class NSString;
@protocol IMDBridgedRecord;


#import "IMDRecord.h"

@interface IMDHandleRecord : IMDRecord <IMDBridgedRecord>



@property (readonly, copy, nonatomic) NSString *canonicalizedURIString;
@property (readonly, copy, nonatomic) NSString *countryCodeString;
@property (readonly, nonatomic) NSInteger rowID;
@property (readonly, copy, nonatomic) NSString *uncanonicalizedURIString;


+(id)allocWithZone:(struct _NSZone *)arg0 ;
-(*void)_fetchUpdatedRecord;
-(NSUInteger)_cfTypeID;
-(id)init;
-(int)_propertyIDForProperty:(NSInteger)arg0 ;
-(struct ? )_propertyDescriptorForProperty:(NSInteger)arg0 ;
-(struct _IMDHandleRecordStruct *)cfHandleRecord;
-(struct __CFArray *)_localCache;


@end


#endif