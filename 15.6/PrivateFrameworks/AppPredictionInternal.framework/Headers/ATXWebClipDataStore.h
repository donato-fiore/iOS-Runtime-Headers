// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXWEBCLIPDATASTORE_H
#define ATXWEBCLIPDATASTORE_H

@protocol ATXAppClipLaunchListenerProtocol;

#import <Foundation/Foundation.h>

#import "_ATXDataStore.h"

@interface ATXWebClipDataStore : NSObject

@property (readonly, nonatomic) NSObject<ATXAppClipLaunchListenerProtocol> *appClipUsageUpdateListener; // ivar: _appClipUsageUpdateListener
@property (readonly, nonatomic) _ATXDataStore *dataStore; // ivar: _dataStore


-(id)init;
-(id)initWithDataStore:(id)arg0 ;
-(id)initWithDataStore:(id)arg0 contextUpdateListener:(id)arg1 ;
-(id)webClipBundleIdsForAppClip:(id)arg0 ;
-(void)updateWithUsageEvent:(id)arg0 ;


@end


#endif