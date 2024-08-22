// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STSTORAGEMEDIAMONITOR_H
#define STSTORAGEMEDIAMONITOR_H

@class NSDate, NSDictionary, NSArray;
@protocol OS_dispatch_semaphore, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface STStorageMediaMonitor : NSObject {
    BOOL _isMonitoring;
    id *_photosLibToken;
    NSDate *_mediaLibDate;
}


@property (retain) NSDictionary *atcDict; // ivar: _atcDict
@property (readonly) NSDictionary *atcDictionary;
@property BOOL isAsynchronouslyLoaded; // ivar: _isAsynchronouslyLoaded
@property BOOL isUpdating; // ivar: _isUpdating
@property (retain) NSObject<OS_dispatch_semaphore> *loadSemaphore; // ivar: _loadSemaphore
@property (retain) NSObject<OS_dispatch_source> *refreshTimer; // ivar: _refreshTimer
@property (copy) NSArray *usedDataClasses; // ivar: _usedDataClasses


+(id)listOfUsedDataClassesInOverrides:(id)arg0 ;
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