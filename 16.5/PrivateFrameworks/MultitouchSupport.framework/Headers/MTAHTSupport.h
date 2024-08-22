// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTAHTSUPPORT_H
#define MTAHTSUPPORT_H

@class NSBundle;

#import <Foundation/Foundation.h>


@interface MTAHTSupport : NSObject

@property (retain, nonatomic) Class AHTDevice; // ivar: _AHTDevice
@property (retain, nonatomic) Class AHTInterface; // ivar: _AHTInterface
@property (retain) NSBundle *bundle; // ivar: _bundle


+(id)allDevices;
+(id)allInterfaces;
+(id)getDeviceInServiceTree:(unsigned int)arg0 ;
+(id)getInterfaceInServiceTree:(unsigned int)arg0 ;
+(id)sharedInstance;
-(id)init;


@end


#endif