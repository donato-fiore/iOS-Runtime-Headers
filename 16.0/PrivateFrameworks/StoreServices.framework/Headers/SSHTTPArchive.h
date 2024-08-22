// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSHTTPARCHIVE_H
#define SSHTTPARCHIVE_H

@class NSData, NSDictionary, NSString;

#import <Foundation/Foundation.h>


@interface SSHTTPArchive : NSObject

@property (readonly, nonatomic) NSData *JSONData;
@property (readonly, nonatomic) NSDictionary *JSONObject;
@property (readonly, nonatomic) NSString *JSONString;
@property (retain, nonatomic) NSData *backingJSONData; // ivar: _backingJSONData
@property (nonatomic) BOOL compressed; // ivar: _compressed


+(CGFloat)_timeIntervalFromFilename:(id)arg0 ;
+(id)_JSONObjectForEntries:(id)arg0 ;
+(id)_JSONObjectForTaskMetrics:(id)arg0 requestData:(id)arg1 responseData:(id)arg2 ;
+(id)_contentDictionaryForResponse:(id)arg0 responseData:(id)arg1 ;
+(id)_creatorDictionary;
+(id)_dateFormatterForTimeZone:(id)arg0 ;
+(id)_entriesArrayForTaskMetrics:(id)arg0 requestData:(id)arg1 responseData:(id)arg2 ;
+(id)_entryDictionaryForTaskMetrics:(id)arg0 requestData:(id)arg1 responseData:(id)arg2 ;
+(id)_generateCommentsForTaskMetrics:(id)arg0 ;
+(id)_headersArrayForHTTPHeaders:(id)arg0 ;
+(id)_localIPAddress;
+(id)_requestDictionaryForTaskTransactionMetrics:(id)arg0 requestData:(id)arg1 ;
+(id)_responseDictionaryForTaskMetrics:(id)arg0 responseData:(id)arg1 ;
+(id)_stringFromDate:(id)arg0 ;
+(id)merge:(id)arg0 ;
+(id)merge:(id)arg0 withEstimatedFileSizeLimit:(NSUInteger)arg1 ;
+(id)outputDirectoryForLogConfig:(id)arg0 ;
+(void)removeLogsWithLogConfig:(id)arg0 olderThanDate:(id)arg1 ;
+(void)sendWriteAllLogsToDiskNotification;
-(BOOL)writeToDiskError:(*id)arg0 ;
-(BOOL)writeToDiskWithLogConfig:(id)arg0 compressed:(BOOL)arg1 error:(*id)arg2 ;
-(id)description;
-(id)initWithJSONObject:(id)arg0 ;
-(id)initWithTaskMetrics:(id)arg0 requestData:(id)arg1 responseData:(id)arg2 ;


@end


#endif