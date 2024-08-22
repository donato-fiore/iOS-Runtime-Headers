// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _GCHAPTICLOGICALDEVICE_H
#define _GCHAPTICLOGICALDEVICE_H

@class NSMutableArray;
@protocol _GCLogicalDevice, NSCopying><NSObject><NSSecureCoding, _GCDriverClientInterface;

#import <Foundation/Foundation.h>

#import "_GCHapticClientProxy.h"

@interface _GCHapticLogicalDevice : NSObject {
    id<_GCLogicalDevice> *_logicalDevice;
    id<NSCopying><NSObject><NSSecureCoding> *_identifier;
    NSMutableArray *_hapticClients;
    NSMutableArray *_hapticPlayers;
    float _prevSharpness;
    float _prevIntensity;
    id<_GCDriverClientInterface> *_driver;
    _GCHapticClientProxy *_clientConnection;
}




-(BOOL)hasClients;
-(id)initWithIdentifier:(id)arg0 clientConnection:(id)arg1 ;
-(void)registerHapticClient:(id)arg0 ;
-(void)stopAllHaptics;
-(void)unregisterHapticClient:(id)arg0 ;


@end


#endif