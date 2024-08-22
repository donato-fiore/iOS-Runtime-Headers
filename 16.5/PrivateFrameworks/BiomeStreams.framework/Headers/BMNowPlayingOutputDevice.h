// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMNOWPLAYINGOUTPUTDEVICE_H
#define BMNOWPLAYINGOUTPUTDEVICE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface BMNowPlayingOutputDevice : NSObject

@property (readonly, nonatomic) NSString *deviceId; // ivar: _deviceId
@property (readonly, nonatomic) NSUInteger deviceSubType; // ivar: _deviceSubType
@property (readonly, nonatomic) NSUInteger deviceType; // ivar: _deviceType


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithDeviceType:(NSUInteger)arg0 deviceSubType:(NSUInteger)arg1 deviceId:(id)arg2 ;
-(id)proto;


@end


#endif