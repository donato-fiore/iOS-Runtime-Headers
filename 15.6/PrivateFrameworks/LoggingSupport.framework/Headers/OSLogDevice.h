// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OSLOGDEVICE_H
#define OSLOGDEVICE_H

@class SimDevice, NSString;

#import <Foundation/Foundation.h>


@interface OSLogDevice : NSObject

@property (nonatomic) NSInteger devType; // ivar: _devType
@property (nonatomic) *void mobDev; // ivar: _mobDev
@property (retain, nonatomic) SimDevice *simDev; // ivar: _simDev
@property (retain, nonatomic) NSString *uid; // ivar: _uid


-(id)description;
-(id)init;
-(id)initWithMobileDevice:(*void)arg0 andID:(id)arg1 ;
-(id)initWithSimualatedDevice:(id)arg0 ;


@end


#endif