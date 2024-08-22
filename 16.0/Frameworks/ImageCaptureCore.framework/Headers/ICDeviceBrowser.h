// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICDEVICEBROWSER_H
#define ICDEVICEBROWSER_H

@class NSArray, NSMutableArray;
@protocol ICDeviceBrowserDelegate;

#import <Foundation/Foundation.h>


@interface ICDeviceBrowser : NSObject

@property NSUInteger browsedDeviceTypeMask;
@property (getter=isBrowsing) BOOL browsing; // ivar: _browsing
@property NSObject<ICDeviceBrowserDelegate> *delegate; // ivar: _delegate
@property (readonly) NSArray *devices;
@property os_unfair_lock_s devicesLock; // ivar: _devicesLock
@property NSUInteger internalBrowsedDeviceTypeMask; // ivar: _internalBrowsedDeviceTypeMask
@property (retain) NSMutableArray *internalDevices; // ivar: _internalDevices
@property (nonatomic, getter=isSuspended) BOOL suspended; // ivar: _suspended


-(BOOL)containsDevice:(id)arg0 ;
-(id)contentsAuthorizationStatus;
-(id)controlAuthorizationStatus;
-(id)deviceWithRef:(id)arg0 ;
-(id)init;
-(id)preferredDevice;
-(void)addDevice:(id)arg0 moreComing:(BOOL)arg1 ;
-(void)dealloc;
-(void)removeDevice:(id)arg0 moreGoing:(BOOL)arg1 ;
-(void)requestContentsAuthorizationWithCompletion:(id)arg0 ;
-(void)requestControlAuthorizationWithCompletion:(id)arg0 ;
-(void)resetContentsAuthorizationWithCompletion:(id)arg0 ;
-(void)resetControlAuthorizationWithCompletion:(id)arg0 ;
-(void)start;
-(void)stop;


@end


#endif