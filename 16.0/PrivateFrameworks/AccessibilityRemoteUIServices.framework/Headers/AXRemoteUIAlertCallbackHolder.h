// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXREMOTEUIALERTCALLBACKHOLDER_H
#define AXREMOTEUIALERTCALLBACKHOLDER_H

@class SBSRemoteAlertHandle;

#import <Foundation/Foundation.h>


@interface AXRemoteUIAlertCallbackHolder : NSObject

@property (copy, nonatomic) id *dismissalHandler; // ivar: _dismissalHandler
@property (copy, nonatomic) id *presentationHandler; // ivar: _presentationHandler
@property (retain, nonatomic) SBSRemoteAlertHandle *remoteAlertHandle; // ivar: _remoteAlertHandle




@end


#endif