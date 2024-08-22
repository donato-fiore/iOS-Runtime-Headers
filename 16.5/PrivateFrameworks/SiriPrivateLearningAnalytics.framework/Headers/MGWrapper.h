// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MGWRAPPER_H
#define MGWRAPPER_H


#import <Foundation/Foundation.h>


@interface MGWrapper : NSObject



+(id)sharedMGWrapper;
-(BOOL)isDeviceIPad;
-(BOOL)isDeviceIPhone;
-(id)deviceClass;


@end


#endif