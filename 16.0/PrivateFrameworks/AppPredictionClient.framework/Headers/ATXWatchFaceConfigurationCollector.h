// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXWATCHFACECONFIGURATIONCOLLECTOR_H
#define ATXWATCHFACECONFIGURATIONCOLLECTOR_H

@class ATXGenericFileBasedCache, NSXPCConnection, NSArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ATXWatchFaceConfigurationCollector : NSObject {
    ATXGenericFileBasedCache *_fileCache;
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_outputQueue;
    NSArray *_queue_watchFaces;
}


@property (readonly, copy, nonatomic) NSArray *watchFaces;


+(id)_watchFaceFromJSONObject:(id)arg0 ;
+(id)sharedInstance;
-(id)_queue_readWatchFacesFromDisk;
-(id)init;
-(void)_queue_writeWatchFacesToDisk:(id)arg0 ;
-(void)refreshWithCompletion:(id)arg0 ;


@end


#endif