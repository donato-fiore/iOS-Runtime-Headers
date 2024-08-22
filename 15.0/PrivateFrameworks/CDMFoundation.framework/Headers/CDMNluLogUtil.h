// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CDMNLULOGUTIL_H
#define CDMNLULOGUTIL_H


#import <Foundation/Foundation.h>


@interface CDMNluLogUtil : NSObject



+(BOOL)saveCLIResult:(id)arg0 protobufFile:(id)arg1 preprocess:(BOOL)arg2 saveBinary:(BOOL)arg3 error:(*id)arg4 ;
+(BOOL)saveProtoFile:(id)arg0 protobufFile:(id)arg1 error:(*id)arg2 ;
+(BOOL)saveResponseToProtobuf2:(id)arg0 protobufFile:(id)arg1 error:(*id)arg2 ;
+(BOOL)saveResponseToProtobuf:(id)arg0 protobufFile:(id)arg1 error:(*id)arg2 ;
+(BOOL)saveSpanMatchResponseToProtobuf:(id)arg0 protobufFile:(id)arg1 error:(*id)arg2 ;
+(BOOL)saveString:(id)arg0 toFile:(id)arg1 error:(*id)arg2 ;
+(id)getLogBasePath;
+(id)loadOverrideSpansFromProtobuf2File:(id)arg0 error:(*id)arg1 ;
+(id)loadRequestFromProtobuf2File:(id)arg0 error:(*id)arg1 ;
+(id)loadRequestFromProtobufFile:(id)arg0 error:(*id)arg1 ;
+(id)loadRequestFromXmlFile:(id)arg0 ;
+(id)loadResponseFromXmlFile:(id)arg0 ;
+(id)logNlv4RequestToTmp:(id)arg0 error:(*id)arg1 ;
+(id)logNlv4ResponseToTmp:(id)arg0 error:(*id)arg1 ;
+(id)logRequestToTmp:(id)arg0 error:(*id)arg1 ;
+(id)logResponseToTmp:(id)arg0 error:(*id)arg1 ;
+(id)logSNLCRequestToTmp:(id)arg0 error:(*id)arg1 ;
+(id)logSNLCResponseToTmp:(id)arg0 error:(*id)arg1 ;
+(id)prettyPrintProtoResponse:(id)arg0 ;
+(id)prettyPrintResponse:(id)arg0 ;
+(id)stringForTopParseUserStatedTask:(id)arg0 ;


@end


#endif