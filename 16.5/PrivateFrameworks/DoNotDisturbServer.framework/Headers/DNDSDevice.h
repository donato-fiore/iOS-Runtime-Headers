// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DNDSDEVICE_H
#define DNDSDEVICE_H

@class DNDDevice, NSString;



@interface DNDSDevice : DNDDevice

@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier


+(id)currentDevice;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithClass:(NSUInteger)arg0 deviceCapabilities:(NSUInteger)arg1 identifier:(id)arg2 frameworkVersion:(struct ? )arg3 ;
-(id)description;


@end


#endif