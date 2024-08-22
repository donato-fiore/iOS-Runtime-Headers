// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef APTARGETBTLEDEVICE_H
#define APTARGETBTLEDEVICE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface APTargetBTLEDevice : NSObject

@property (retain, nonatomic) NSString *deviceID; // ivar: _deviceID
@property (nonatomic) BOOL isSoloCapable; // ivar: _isSoloCapable
@property (nonatomic) ? lastData; // ivar: _lastData
@property (nonatomic) int lastRSSI; // ivar: _lastRSSI
@property (nonatomic) BOOL supportsMediaControlPort; // ivar: _supportsMediaControlPort


-(void)dealloc;


@end


#endif