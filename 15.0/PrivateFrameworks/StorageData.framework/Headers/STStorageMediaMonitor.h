// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STSTORAGEMEDIAMONITOR_H
#define STSTORAGEMEDIAMONITOR_H

@class NSDate, NSDictionary;
@protocol OS_dispatch_semaphore;

#import <Foundation/Foundation.h>


@interface STStorageMediaMonitor : NSObject {
    BOOL _isMonitoring;
    id *_photosLibToken;
    NSDate *_mediaLibDate;
}


@property (retain) NSDictionary *atcDict; // ivar: _atcDict
@property (readonly) NSDictionary *atcDictionary;
@property BOOL isUpdating; // ivar: _isUpdating
@property (retain) NSObject<OS_dispatch_semaphore> *loadSemaphore; // ivar: _loadSemaphore


+(id)sharedMonitor;
-(id)init;
-(void)loadingComplete:(id)arg0 ;
-(void)mpLibraryChanged:(id)arg0 ;
-(void)startMonitor;
-(void)stopMonitor;
-(void)sync;
-(void)updateATCData;


@end


#endif