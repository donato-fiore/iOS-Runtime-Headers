// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDMNLULOGUTIL_H
#define CDMNLULOGUTIL_H


#import <Foundation/Foundation.h>


@interface CDMNluLogUtil : NSObject



+(BOOL)saveCLIResult:(id)arg0 protobufFile:(id)arg1 preprocess:(BOOL)arg2 saveBinary:(BOOL)arg3 error:(*id)arg4 ;
+(BOOL)savePreprocessingWrapperJson:(id)arg0 toFile:(id)arg1 error:(*id)arg2 ;
+(BOOL)saveProtoFile:(id)arg0 protobufFile:(id)arg1 error:(*id)arg2 ;
+(BOOL)saveResponseToProtobuf2:(id)arg0 protobufFile:(id)arg1 error:(*id)arg2 ;
+(BOOL)saveResponseToProtobuf:(id)arg0 protobufFile:(id)arg1 error:(*id)arg2 ;
+(BOOL)saveSpanMatchResponseToProtobuf:(id)arg0 protobufFile:(id)arg1 error:(*id)arg2 ;
+(BOOL)saveString:(id)arg0 toFile:(id)arg1 error:(*id)arg2 ;
+(id)getLogBasePath;
+(id)loadOverrideSpansFromProtobuf2File:(id)arg0 error:(*id)arg1 ;
+(id)loadRequestFromProtobuf2File:(id)arg0 error:(*id)arg1 ;
+(id)prettyPrintProtoResponse:(id)arg0 ;
+(id)prettyPrintResponse:(id)arg0 ;
+(id)writeLVCRequestToDisk:(id)arg0 error:(*id)arg1 ;
+(id)writeLVCResponseToDisk:(id)arg0 error:(*id)arg1 ;
+(id)writeMDRequestToDisk:(id)arg0 error:(*id)arg1 ;
+(id)writeMDResponseToDisk:(id)arg0 error:(*id)arg1 ;
+(id)writeMRRequestToDisk:(id)arg0 error:(*id)arg1 ;
+(id)writeMRResponseToDisk:(id)arg0 error:(*id)arg1 ;
+(id)writeNlv4RequestToDisk:(id)arg0 error:(*id)arg1 ;
+(id)writeNlv4ResponseToDisk:(id)arg0 error:(*id)arg1 ;
+(id)writePSCRequestToDisk:(id)arg0 error:(*id)arg1 ;
+(id)writePSCResponseToDisk:(id)arg0 error:(*id)arg1 ;
+(id)writeSNLCRequestToDisk:(id)arg0 error:(*id)arg1 ;
+(id)writeSNLCResponseToDisk:(id)arg0 error:(*id)arg1 ;
+(id)writeSSURequestToDisk:(id)arg0 error:(*id)arg1 ;
+(id)writeSSUResponseToDisk:(id)arg0 error:(*id)arg1 ;
+(id)writeUaaPRequestToDisk:(id)arg0 error:(*id)arg1 ;
+(id)writeUaaPResponseToDisk:(id)arg0 error:(*id)arg1 ;


@end


#endif