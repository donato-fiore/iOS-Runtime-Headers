// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMAPPLAUNCHSTREAM_H
#define BMAPPLAUNCHSTREAM_H

@class NSString;
@protocol BMSourceStream, BMTimeBasedPublisherStream, BMSyncableStream;

#import <Foundation/Foundation.h>

#import "BMStoreStream.h"

@interface BMAppLaunchStream : NSObject <BMSourceStream, BMTimeBasedPublisherStream, BMSyncableStream>

 {
    BMStoreStream *_storeStream;
}


@property (readonly, nonatomic) NSString *identifier;


-(id)init;
-(id)initWithConfig:(id)arg0 ;
-(id)publisher;
-(id)publisherFromStartTime:(CGFloat)arg0 ;
-(id)publisherWithStartTime:(id)arg0 endTime:(id)arg1 maxEvents:(id)arg2 lastN:(id)arg3 reversed:(BOOL)arg4 ;
-(id)publisherWithStartTime:(id)arg0 endTime:(id)arg1 maxEvents:(id)arg2 reversed:(BOOL)arg3 ;
-(id)publishersForRemoteDevices:(id)arg0 startTime:(CGFloat)arg1 includeLocal:(BOOL)arg2 pipeline:(id)arg3 ;
-(id)publishersForRemoteDevices:(id)arg0 startTime:(id)arg1 endTime:(id)arg2 maxEvents:(id)arg3 lastN:(id)arg4 reversed:(BOOL)arg5 includeLocal:(BOOL)arg6 pipeline:(id)arg7 ;
-(id)remoteDevices;
-(id)source;


@end


#endif