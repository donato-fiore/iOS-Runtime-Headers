// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NMSINITIALCLOUDLIBRARYIMPORTOBSERVER_H
#define NMSINITIALCLOUDLIBRARYIMPORTOBSERVER_H

@class NSMutableArray, ICCloudClient;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NMSInitialCloudLibraryImportObserver : NSObject {
    NSMutableArray *_initialImportBlocks;
    BOOL _isObserving;
    ICCloudClient *_cloudClient;
    NSObject<OS_dispatch_queue> *_internalQueue;
}




-(id)init;
-(void)_handleInitialCloudLibraryImportCompleted;
-(void)_performInitialImportBlocks;
-(void)performBlockWhenLibraryIsReady:(id)arg0 ;


@end


#endif