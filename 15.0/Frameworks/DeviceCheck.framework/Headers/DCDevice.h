// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DCDEVICE_H
#define DCDEVICE_H


#import <Foundation/Foundation.h>


@interface DCDevice : NSObject

@property (readonly, getter=isSupported) BOOL supported;


+(id)currentDevice;
-(BOOL)_isSupportedReturningError:(*id)arg0 ;
-(void)generateTokenWithCompletionHandler:(id)arg0 ;


@end


#endif