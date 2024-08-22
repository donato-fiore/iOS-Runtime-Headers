// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MXMOSLOGDEVICE_INTERNAL_H
#define MXMOSLOGDEVICE_INTERNAL_H

@class NSString, OSLogDevice;
@protocol MXMProbeableDevice;

#import <Foundation/Foundation.h>


@interface MXMOSLogDevice_Internal : NSObject <MXMProbeableDevice>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) OSLogDevice *rawDevice; // ivar: _rawDevice
@property (readonly) Class superclass;


-(id)initWithName:(id)arg0 identifier:(id)arg1 ;
-(id)initWithOSLogDevice:(id)arg0 ;


@end


#endif