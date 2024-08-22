// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STSTORAGEMEDIAMONITOR_H
#define STSTORAGEMEDIAMONITOR_H

@class NSDictionary, NSArray;
@protocol OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface STStorageMediaMonitor : NSObject

@property (copy, nonatomic) NSDictionary *atcDictionary; // ivar: _atcDictionary
@property (nonatomic) BOOL isAsynchronouslyLoaded; // ivar: _isAsynchronouslyLoaded
@property (nonatomic) BOOL isMonitoring; // ivar: _isMonitoring
@property (nonatomic) BOOL isUpdating; // ivar: _isUpdating
@property (retain, nonatomic) id *photosLibToken; // ivar: _photosLibToken
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *refreshQueue; // ivar: _refreshQueue
@property (nonatomic) NSUInteger refreshStartTimestamp; // ivar: _refreshStartTimestamp
@property (retain, nonatomic) NSObject<OS_dispatch_source> *refreshTimer; // ivar: _refreshTimer
@property (copy, nonatomic) NSArray *usedDataClasses; // ivar: _usedDataClasses


+(id)listOfUsedDataClassesInOverrides:(id)arg0 ;
+(id)sharedMonitor;
-(id)init;
-(void)_updateATCData;
-(void)loadingComplete:(id)arg0 ;
-(void)mpLibraryChanged:(id)arg0 ;
-(void)startMonitor;
-(void)stopMonitor;
-(void)sync;
-(void)updateATCData;


@end


#endif