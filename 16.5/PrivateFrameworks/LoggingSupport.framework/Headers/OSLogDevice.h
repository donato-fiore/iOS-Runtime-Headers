// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OSLOGDEVICE_H
#define OSLOGDEVICE_H

@class SimDevice, NSString;

#import <Foundation/Foundation.h>


@interface OSLogDevice : NSObject

@property (nonatomic) NSInteger devType; // ivar: _devType
@property (nonatomic) *void mobileDeviceRef; // ivar: _mobileDeviceRef
@property (retain, nonatomic) SimDevice *simDev; // ivar: _simDev
@property (retain, nonatomic) NSString *uid; // ivar: _uid


-(id)description;
-(id)init;
-(id)initWithMobileDevice:(*void)arg0 andUDID:(id)arg1 ;
-(id)initWithSimualatedDevice:(id)arg0 ;
-(void)dealloc;


@end


#endif