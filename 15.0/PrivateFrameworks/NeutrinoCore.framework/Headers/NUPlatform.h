// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NUPLATFORM_H
#define NUPLATFORM_H

@class NSArray, NSString;
@protocol NUDevice, NUDisplay;

#import <Foundation/Foundation.h>


@interface NUPlatform : NSObject

@property (retain, nonatomic) NSObject<NUDevice> *cpuDevice; // ivar: _cpuDevice
@property (readonly, nonatomic) BOOL defaultSupportsLiveVideoRendering;
@property (copy, nonatomic) NSArray *devices; // ivar: _devices
@property (retain, nonatomic) NSObject<NUDevice> *discreteDevice; // ivar: _discreteDevice
@property (readonly, nonatomic) NSArray *displays;
@property (nonatomic) BOOL hasExtendedColorDisplay; // ivar: _hasExtendedColorDisplay
@property (nonatomic) BOOL hasHeadlessGPU; // ivar: _hasHeadlessGPU
@property (retain, nonatomic) NSObject<NUDevice> *headlessDevice; // ivar: _headlessDevice
@property (retain, nonatomic) NSObject<NUDevice> *integratedDevice; // ivar: _integratedDevice
@property (readonly, nonatomic) NSObject<NUDevice> *mainDevice;
@property (readonly, nonatomic) NSObject<NUDisplay> *mainDisplay;
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) BOOL supportsANE; // ivar: _supportsANE
@property (nonatomic) BOOL supportsAutomaticGraphicsSwitching; // ivar: _supportsAutomaticGraphicsSwitching
@property (readonly, nonatomic) BOOL supportsLiveVideoRendering;


+(id)currentPlatform;
-(id)currentDevice;
-(id)debugDescription;
-(id)description;
-(id)deviceForDisplay:(id)arg0 ;
-(id)displayWithIdentifier:(id)arg0 ;
-(void)clearCaches;


@end


#endif