// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SASUNDERSTANDINGONDEVICEASSETSSTATE_H
#define SASUNDERSTANDINGONDEVICEASSETSSTATE_H

@class AFSettingsConnection;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SASUnderstandingOnDeviceAssetsState : NSObject

@property (retain, nonatomic) AFSettingsConnection *settingsConnection; // ivar: _settingsConnection
@property (readonly) BOOL understandingOnDeviceAssetsAvailable;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *uodAssetsqueue; // ivar: _uodAssetsqueue


-(id)init;
-(void)_setUODAssetsAvailable:(BOOL)arg0 ;
-(void)updateState;


@end


#endif