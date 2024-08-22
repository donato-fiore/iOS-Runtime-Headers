// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPDEVICECONTROLLERSTARTUPPARAMS_H
#define CHIPDEVICECONTROLLERSTARTUPPARAMS_H

@class NSData;
@protocol CHIPKeypair;

#import <Foundation/Foundation.h>


@interface CHIPDeviceControllerStartupParams : NSObject

@property (nonatomic) NSUInteger fabricId; // ivar: _fabricId
@property (retain, nonatomic) NSData *ipk; // ivar: _ipk
@property (retain, nonatomic) NSObject<CHIPKeypair> *rootCAKeypair; // ivar: _rootCAKeypair
@property (nonatomic) unsigned short vendorId; // ivar: _vendorId


-(id)initWithKeypair:(id)arg0 ;


@end


#endif