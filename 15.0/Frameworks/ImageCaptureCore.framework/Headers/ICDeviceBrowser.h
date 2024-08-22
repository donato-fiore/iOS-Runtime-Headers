// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICDEVICEBROWSER_H
#define ICDEVICEBROWSER_H

@class NSArray;
@protocol ICDeviceBrowserDelegate;

#import <Foundation/Foundation.h>


@interface ICDeviceBrowser : NSObject {
    id *_privateData;
}


@property NSUInteger browsedDeviceTypeMask; // ivar: _browsedDeviceTypeMask
@property (readonly, getter=isBrowsing) BOOL browsing;
@property NSObject<ICDeviceBrowserDelegate> *delegate;
@property (nonatomic) NSArray *devices; // ivar: _devices
@property (nonatomic, getter=isSuspended) BOOL suspended;


-(BOOL)suspended;
-(id)contentsAuthorizationStatus;
-(id)controlAuthorizationStatus;
-(id)init;
-(id)internalDevices;
-(void)dealloc;
-(void)requestContentsAuthorizationWithCompletion:(id)arg0 ;
-(void)requestControlAuthorizationWithCompletion:(id)arg0 ;
-(void)resetContentsAuthorizationWithCompletion:(id)arg0 ;
-(void)resetControlAuthorizationWithCompletion:(id)arg0 ;
-(void)start;
-(void)stop;


@end


#endif