// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef KVPROFILEBUILDER_H
#define KVPROFILEBUILDER_H

@class NSOutputStream, NSURL;
@protocol KVProfileWriter;

#import <Foundation/Foundation.h>

#import "KVProfileInfo.h"
#import "KVDatasetBuilder.h"

@interface KVProfileBuilder : NSObject {
    NSOutputStream *_stream;
    KVProfileInfo *_profileInfo;
    NSObject<KVProfileWriter> *_writer;
    KVDatasetBuilder *_activeDataset;
    unsigned int _datasetCount;
    NSURL *_fileURL;
}




+(id)builderWithProfileInfo:(id)arg0 format:(unsigned char)arg1 error:(*id)arg2 ;
+(id)fileWriterWithProfileInfo:(id)arg0 targetDirectory:(id)arg1 filename:(id)arg2 format:(unsigned char)arg3 error:(*id)arg4 ;
+(id)fileWriterWithProfileInfo:(id)arg0 targetDirectory:(id)arg1 format:(unsigned char)arg2 error:(*id)arg3 ;
+(void)initalize;
-(BOOL)_finishWithError:(*id)arg0 ;
-(id)_buildWithError:(*id)arg0 ;
-(id)_fileURL;
-(id)addDataset:(id)arg0 error:(*id)arg1 ;
-(id)buildWithError:(*id)arg0 ;
-(id)finishWritingWithError:(*id)arg0 ;
-(id)init;
-(id)initWithProfileInfo:(id)arg0 outputStream:(id)arg1 fileURL:(id)arg2 format:(unsigned char)arg3 provider:(id)arg4 error:(*id)arg5 ;


@end


#endif