// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTAHTSUPPORT_H
#define MTAHTSUPPORT_H

@class NSBundle;

#import <Foundation/Foundation.h>


@interface MTAHTSupport : NSObject

@property (retain, nonatomic) Class AHTDevice; // ivar: _AHTDevice
@property (retain) NSBundle *bundle; // ivar: _bundle


+(id)allDevices;
+(id)sharedInstance;
-(id)init;


@end


#endif