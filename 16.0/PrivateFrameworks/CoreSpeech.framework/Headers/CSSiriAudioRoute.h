// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSSIRIAUDIOROUTE_H
#define CSSIRIAUDIOROUTE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CSSiriAudioRoute : NSObject

@property (readonly, copy, nonatomic) NSString *destination; // ivar: _destination
@property (readonly, copy, nonatomic) NSString *deviceName; // ivar: _deviceName
@property (readonly, nonatomic) BOOL isBluetooth; // ivar: _isBluetooth
@property (readonly, copy, nonatomic) NSString *source; // ivar: _source
@property (readonly, copy, nonatomic) NSString *uid; // ivar: _uid


-(id)initWithAudioDeviceID:(unsigned int)arg0 ;


@end


#endif