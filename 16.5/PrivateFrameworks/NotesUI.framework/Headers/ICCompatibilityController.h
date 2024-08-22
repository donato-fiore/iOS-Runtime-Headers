// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICCOMPATIBILITYCONTROLLER_H
#define ICCOMPATIBILITYCONTROLLER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ICCompatibilityController : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


+(id)sharedController;
-(id)cachedDevicesDateForAccount:(id)arg0 ;
-(id)cachedDevicesForAccount:(id)arg0 ;
-(id)fetchDevicesForAccount:(id)arg0 ;
-(id)init;
-(void)cacheDevices:(id)arg0 forAccount:(id)arg1 ;
-(void)clearCachedDevices;
-(void)devicesForAccount:(id)arg0 completionHandler:(id)arg1 ;
-(void)messageForAccount:(id)arg0 minimumNotesVersion:(NSUInteger)arg1 completionHandler:(id)arg2 ;


@end


#endif