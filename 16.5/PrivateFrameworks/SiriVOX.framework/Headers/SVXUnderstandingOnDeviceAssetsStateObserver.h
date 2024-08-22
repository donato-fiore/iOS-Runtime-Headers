// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SVXUNDERSTANDINGONDEVICEASSETSSTATEOBSERVER_H
#define SVXUNDERSTANDINGONDEVICEASSETSSTATEOBSERVER_H

@class AFSettingsConnection;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SVXUnderstandingOnDeviceAssetsStateObserver : NSObject

@property (retain, nonatomic) AFSettingsConnection *settingsConnection; // ivar: _settingsConnection
@property (nonatomic) BOOL understandingOnDeviceAssetsAvailable; // ivar: _understandingOnDeviceAssetsAvailable
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *uodAssetsqueue; // ivar: _uodAssetsqueue


-(id)init;
-(void)_setUODAssetsAvailable:(BOOL)arg0 ;
-(void)_updateState;
-(void)dealloc;


@end


#endif