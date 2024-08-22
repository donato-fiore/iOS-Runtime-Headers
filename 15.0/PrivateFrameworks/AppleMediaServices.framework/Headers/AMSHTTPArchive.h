// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSHTTPARCHIVE_H
#define AMSHTTPARCHIVE_H

@class NSData, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AMSHTTPArchive : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSData *JSONData; // ivar: _JSONData
@property (retain, nonatomic) NSData *backingJSONData; // ivar: _backingJSONData
@property (nonatomic, getter=isCompressed) BOOL compressed; // ivar: _compressed
@property (retain, nonatomic) NSString *urlString; // ivar: _urlString


+(BOOL)supportsSecureCoding;
+(CGFloat)_timeIntervalFromFilename:(id)arg0 ;
+(id)_createJSONObjectForEntries:(id)arg0 ;
+(id)_createJSONObjectForTaskMetrics:(id)arg0 requestData:(id)arg1 responseData:(id)arg2 ;
+(id)_dateFormatterForTimeZone:(id)arg0 ;
+(id)_generateCommentsStringForMetrics:(id)arg0 ;
+(id)_generateContentDictionaryForResponse:(id)arg0 responseData:(id)arg1 ;
+(id)_generateHeadersArrayForHTTPHeaders:(id)arg0 ;
+(id)_generateRequestDictionaryForMetrics:(id)arg0 requestData:(id)arg1 ;
+(id)_generateResponseDictionaryForMetrics:(id)arg0 responseData:(id)arg1 ;
+(id)directory;
+(id)merge:(id)arg0 ;
+(id)merge:(id)arg0 withEstimatedFileSizeLimit:(NSUInteger)arg1 ;
+(void)removeHTTPArchiveFilesOlderThanDate:(id)arg0 ;
-(BOOL)writeToDiskWithError:(*id)arg0 compressed:(BOOL)arg1 ;
-(BOOL)writeToDiskWithError:(*id)arg0 compressed:(BOOL)arg1 appendCombined:(BOOL)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithHTTPArchiveTaskInfo:(id)arg0 ;
-(id)initWithJSONObject:(id)arg0 ;
-(id)initWithMetrics:(id)arg0 requestData:(id)arg1 responseData:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)logHARData;


@end


#endif