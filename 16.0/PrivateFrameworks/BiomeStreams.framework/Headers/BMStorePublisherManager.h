// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMSTOREPUBLISHERMANAGER_H
#define BMSTOREPUBLISHERMANAGER_H

@class BMStoreConfig, NSString, BMStreamDatastoreReader, NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "BMStreamsAccessClient.h"

@interface BMStorePublisherManager : NSObject {
    BMStoreConfig *_config;
    NSString *_streamIdentifier;
    BMStreamsAccessClient *_accessClient;
    BMStreamDatastoreReader *_localDatastore;
    NSMutableDictionary *_remoteDatastores;
}




-(id)_openStreamReaderWithStoreLocation:(NSInteger)arg0 remoteStreamName:(id)arg1 ;
-(id)_publisherWithStoreLocation:(NSInteger)arg0 remoteStreamName:(id)arg1 ;
-(id)_publishersForRemoteDevices:(id)arg0 includeLocal:(BOOL)arg1 ;
-(id)_streamReaderWithStoreLocation:(NSInteger)arg0 remoteStreamName:(id)arg1 ;
-(id)initWithStreamIdentifier:(id)arg0 streamConfig:(id)arg1 accessClient:(id)arg2 ;
-(id)publisher;
-(id)publisherFromStartTime:(CGFloat)arg0 ;
-(id)publisherWithStartTime:(id)arg0 endTime:(id)arg1 maxEvents:(id)arg2 lastN:(id)arg3 reversed:(BOOL)arg4 ;
-(id)publisherWithStartTime:(id)arg0 endTime:(id)arg1 maxEvents:(id)arg2 reversed:(BOOL)arg3 ;
-(id)publisherWithStartTime:(id)arg0 withEndTime:(id)arg1 withMaxEvents:(id)arg2 reversed:(BOOL)arg3 ;
-(id)publishersForRemoteDevices:(id)arg0 startTime:(CGFloat)arg1 includeLocal:(BOOL)arg2 pipeline:(id)arg3 ;
-(id)publishersForRemoteDevices:(id)arg0 startTime:(id)arg1 endTime:(id)arg2 maxEvents:(id)arg3 lastN:(id)arg4 reversed:(BOOL)arg5 includeLocal:(BOOL)arg6 pipeline:(id)arg7 ;


@end


#endif